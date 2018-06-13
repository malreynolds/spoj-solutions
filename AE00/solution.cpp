#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = n;
    for (int i = 2; i <= floor(sqrt(n)); i++) {
        ans += n / i - i + 1;
    }

    cout << ans << endl;

    return 0;
