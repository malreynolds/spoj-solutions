#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long sum = 0;
        long long c;
        for (int i = 0; i < n; i++) {
            cin >> c;
            sum += c % n;
        }
        if (sum % n == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}