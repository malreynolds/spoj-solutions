#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<double> a;
    double f = 0.5;
    int n = 2;
    while(f <= 5.20) {
        a.push_back(f);
        n++;
        f += (double)1/n;
    }
    double c; 
    while (true) {
        cin >> c;
        if (c == 0) break;
        auto ans = lower_bound(a.begin(), a.end(), c) + 1;
        cout << ans - a.begin() << " card(s)" << endl;
    }
}