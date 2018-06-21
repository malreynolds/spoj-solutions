#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    cout << ((n & (n - 1)) == 0 ?  "TAK" : "NIE") << endl;
    return 0;
}