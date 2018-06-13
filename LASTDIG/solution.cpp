#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int> > m;
    m.push_back({0});
    m.push_back({1});
    m.push_back({2, 4, 8, 6});
    m.push_back({3, 9, 7, 1});
    m.push_back({4, 6});
    m.push_back({5});
    m.push_back({6});
    m.push_back({7, 9, 3, 1});
    m.push_back({8, 4, 2, 6});
    m.push_back({9, 1});
    int t;
    cin >> t;
    long long a, b;
    while(t--) {
        cin >> a >> b;
        if (a <= 1) cout << a << endl;
        else if (b == 0) cout << 1 << endl;
        else {
            int d = a % 10;
            cout << m[d][(b - 1) % m[d].size()] << endl;
        }
    }
    return 0;
}