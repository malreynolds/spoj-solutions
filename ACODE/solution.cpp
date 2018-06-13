#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

unordered_map<string, int> dp;

int cnt(string s) {
    if (dp[s]) return dp[s];
    string left = s.substr(0, s.size() - 1);
    string right = s.substr(1, s.size() - 1);
    string common = s.substr(1, s.size() - 2);
    // cout << left << " " << dp[left] << endl;
    // cout << right << " " << dp[right] << endl;
    dp[s] = cnt(left) + cnt(right) - cnt(common);
    cout << left << " " << right << " " << common << " " << dp[left] << " " << dp[right] << " " << dp[common] << " " << s << " " << dp[s] << endl;
    // cout << s << " " << dp[s] << endl;
    return dp[s];
}

int main() {
    for (int i = 1; i <= 9; i++) {
        dp[to_string(i)] = 1;
    }

    dp["10"] = 1; dp["20"] = 1;
    for (int i = 11; i <= 19; i++) {
        dp[to_string(i)] = 2;
    }

    for (int i = 21; i<= 26; i++) {
        dp[to_string(i)] = 2;
    }
    for (int i = 27; i <= 99; i++) {
        dp[to_string(i)] = 1;
    }

    string s;
    while (true) {
        cin >> s;
        if (s == "0") break;
        cout << cnt(s) << endl;
    }
    return 0;
}