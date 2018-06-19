#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool pred(long long m, vector<long long> &x, long long c) {
    long long current = 0, cows = 1;
    for (int i = 1; i < x.size(); i++) {
        if (current + (x[i] - x[i-1]) < m) {
            current += x[i] - x[i-1];
        } else {
            current = 0;
            cows++;
        }
    }
    return cows < c;
}

int main() {
    int t, n, c;
    cin >> t;
    while(t--) {
        cin >> n >> c;
        vector<long long> x(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }

        sort(x.begin(), x.end());
        long long lo = 0, hi = x[n-1],  mid;
        while (lo < hi) {
            mid = lo + (hi - lo + 1) / 2;
            if (pred(mid, x, c)) {
                hi = mid - 1;
            } else {
                lo = mid;
            }
        }
        cout << lo << endl;
    }
    return 0;
}