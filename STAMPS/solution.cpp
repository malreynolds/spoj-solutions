#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t, s, f;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> s >> f;
        vector<int> stamps(f);
        for (int j = 0; j < f; j++) {
            cin >> stamps[j];
        }
        cout << "Scenario #" << i << ":" << endl;
        sort(stamps.begin(), stamps.end(), std::greater<int>());

        int j = 0, sum = 0;
        while(sum < s && j < f) {
            sum += stamps[j++];
        }
        if (sum >= s) cout << j << endl;
        else cout << "impossible" << endl;

        cout << endl;
    }
    return 0;
}