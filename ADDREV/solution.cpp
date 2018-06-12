#include <iostream>

using namespace std;

int rev(int num) {
    int res = 0;
    while (num) {
        res *= 10;
        res += num % 10;
        num /= 10;
    }
    return res;
}

int main() {
    int n, a, b;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        cout << rev(rev(a) + rev(b)) << endl;
    }
    return 0;
}
