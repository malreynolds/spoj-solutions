#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    string s;
    while (true) {
        cin >> n;
        if (n == 0) break;
        cin >> s;
        int l = s.length(), m = l / n;
        int i = 0, size = 0, prev = 0;
        bool temp = true;
        while (prev < n) {
            cout << s[i];
            i += n;
            if (temp) {
                i += n - (2 * prev + 1);
            } else {
                i -= n - (2 * prev + 1);
            }
            temp = !temp;
            if (i >= l) { 
                temp = true;
                prev++;
                i = prev;
            }
        }
        cout << endl;
    }
    return 0;
}