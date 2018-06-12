#include <iostream>
#include <cmath>

using namespace std;

int z(int num) {
    int fiveCount = 0;
    int power = 1;
    for (int i = 5; i <= num; i *= 5, power++) {
        int fivePower = pow(5, power);
        int n = floor(num / fivePower) * fivePower;
        fiveCount += n / fivePower;
    }
    return fiveCount;
}

int main() {
    int t, n;
    cin >> t;

    while(t--) {
        cin >> n; 
        cout << z(n) << endl;
    }

    return 0;
}
                                                    