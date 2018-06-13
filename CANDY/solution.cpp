#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == -1) break;
        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];            
        }
        if (sum % n) {
            cout << -1 << endl;
        } else {
            int goal = sum / n;
            sort(a.begin(), a.end());
            int i = n - 1, ans = 0;
            while (a[i] > goal) {
                ans += a[i] - goal;
                i--;
            }
            cout << ans << endl;
        }
    }
    return 0;
}
