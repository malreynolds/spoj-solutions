#include <iostream>

using namespace std;

inline int solve(int x, int y) {
    if (y > x) {
        return -1;
    } else if (x == y) {
        if (x % 2 == 0) {
            return x + y;
        } else {
            return x + y - 1;
        }
    } else if (x - y > 2 || x - y == 1) {
        return -1;
    } else {
        if (x % 2 == 0) {
            return x + y;
        } else {
            return x + y - 1;
        }
    }
}

int main() {
    int n, x, y;
    cin >> n;
    while(n--) {
        cin >> x >> y;
        int ans = solve(x, y);
        if (ans == -1) {
            cout << "No Number" << endl;
        } else {
            cout << ans << endl;
        }
    }
    return 0;
}
