#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    string s, a, b, c, op;

    while(t--) {
        getline(cin, s);
        getline(cin, s);
        istringstream iss(s);
        iss >> a;
        iss >> op;
        iss >> b;
        iss >> op;
        iss >> c;
        if (a.find("machula") != string::npos) {
            cout << to_string(stoi(c) - stoi(b)) << " + " << b << " = " << c << endl;
        } else if (b.find("machula") != string::npos) {
            cout << a << " + " << to_string(stoi(c) - stoi(a)) << " = " << c << endl;
        } else {
            cout << a << " + " << b << " = " << to_string(stoi(a) + stoi(b)) << endl;
        }
    }
    return 0;
}