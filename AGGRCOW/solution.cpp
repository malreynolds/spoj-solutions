#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool pred(int m, vector<int> &x, int c) {
    int current = 0, cows = 0;
    for (auto i : x) {
        if (current + i < m) {
            current += i;
        } else {
            current = 0;
            cows++;
        }
    }
    return cows >= c;
}

int main() {
    int t, n, c;
    cin >> t;
    while(t--) {
        cin >> n >> c;
        vector<int> x(n);
        sort(x.begin(), x.end());
        for (int i = 1; i <= 10; i++) {
            cout << pred(i, x, c);
        }
        // int lo = 0, hi = x[n-1],  mid;
        // while (lo < hi) {
        //     mid = lo + (hi - lo) / 2;
        //     if (pred(mid, x, c)) {
        //         lo = mid + 1;
        //     } else {
        //         hi = mid;
        //     }
        // }
        // cout << lo << endl;
    }
    return 0;
}