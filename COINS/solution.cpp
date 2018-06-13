#include <iostream>
#include <cmath>
#include <unordered_map>

using namespace std;

unordered_map<long long, long long> dp;

long long max_coin(long long n) {
    if (n <= 1) return n;
    if (dp[n] != 0) return dp[n];
    return dp[n] = max(n, max_coin(n / 2) + max_coin(n / 3) + max_coin(n / 4));
}

int main() {
    long long n;
    while(cin >> n) {
        cout << max_coin(n) << endl;
    }

    return 0;
}