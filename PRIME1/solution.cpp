#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    if (num == 1) return false;
    bool prime = true;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            prime = false;
            break;
        }
    }
    return prime;
}

int main() {
    int n, a, b;
    cin >> n;
    while(n--) {
        cin >> a >> b;
        for (int i = a; i <= b; i++) {
            if (isPrime(i)) {
                cout << i << endl;
            }
        }
        cout << endl;
    }
    return 0;
}
