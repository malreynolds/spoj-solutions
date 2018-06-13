#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> m(n), f(n);
        for (int i = 0; i < n; i++) {
            cin >> m[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> f[i];
        }
        sort(m.begin(), m.end());
        sort(f.begin(), f.end());
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += m[i] * f[i];
        }
        cout << ans << endl;
    }
    return 0;
}
