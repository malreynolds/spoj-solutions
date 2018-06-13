#include <iostream>

using namespace std;

inline int solve(int n) {
    int ans = 0;
    while (n) {
        ans += n * n;
        n--;
    }
    return ans;
}

int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) break;
        cout << solve(n) << endl;
    }

    return 0;
}
