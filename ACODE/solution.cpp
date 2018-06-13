#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string s;
    int temp;

    while (true) {
        cin >> s;
        if (s == "0") break;
        int n = s.size();
        vector<int> dp(n);
        dp[0] = 1;
        temp = stoi(s.substr(0, 2));
        dp[1] = (temp <= 26 && s[1] != '0' ? 2 : 1);
        if (temp > 26 && s[1] == '0') dp[1] = 0;

        for (int i = 2; i < n; i++) {
            temp = stoi(s.substr(i-1, 2));
            if (temp == 0) continue;
            if (s[i] != '0') {
                if (temp <= 26 && s[i-1] != '0')
                    dp[i] = dp[i-1] + dp[i-2];
                else 
                    dp[i] = dp[i-1];
            } else {
                if (temp <= 26) {
                    dp[i] = dp[i-2];
                }
            }
        }
        cout << dp[n-1] << endl;
    }
    return 0;
}