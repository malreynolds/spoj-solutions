#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string k;
        cin >> k;
        int n = k.size(), i = n / 2, j = n - i - 1;
        bool isPalindrome = true, allNines = true, increased = false, leftBiggerThanRight;

        while (i >= 0) {
            if (k[i] != k[j]) {
                isPalindrome = false;
            }
            if (k[i] != '9') {
                allNines = false;
            }
            i--; j++;
        }
        if (!isPalindrome) {
            i = n / 2 - 1, j = n - i - 1;
            while(i >= 0) {
                if (k[i] != k[j]) {
                    leftBiggerThanRight =  (k[i] > k[j]);
                    break;
                }
                i--; j++;
            }
            i = n / 2 - 1 + n % 2, j = n - i - 1;
            while (i >= 0) {
                if (k[i] != k[j]) {
                    if (k[i] < k[j] && !increased) {
                        if (!leftBiggerThanRight) {
                            k[i]++;
                        }
                        increased = true;
                    }
                    k[j] = k[i];
                } else if ((i == j || j == i + 1)) {
                    if (!leftBiggerThanRight) {
                        if (k[i] != '9') {
                            k[i]++;
                            if (i != j) k[j]++;
                        } else {
                            k[i] = k[j] = '0';
                            if (n >= 3) {
                                i--; j++;
                                while (k[i] == k[j] && k[i] == '9') {
                                    k[i] = k[j] = '0';
                                    i--; j++;
                                } k[i]++; k[j] = k[i]; }
                        }
                    }
                    increased = true;
                }
                i--; j++;
            }
        } else {
            if(allNines) {
                k[0] = '1';
                for (int i = 1; i < n; i++) {
                    k[i] = '0';
                }
                k += '1';
            } else if (k[n / 2] != '9') {
                if (n % 2 == 0) {
                    k[n / 2]++;
                    k[n / 2 - 1]++;
                } else {
                    k[n / 2]++;
                }
            } else {
                bool found = false;
                int j = -1;
                for (int i = 0; i < n; i++) {
                    if (k[i] == '9') {
                        if (!found) {
                            j = i;
                        }
                        found = true;
                        k[i] = '0';
                    }
                }
                j--;
                k[j]++;
                k[n - j - 1]++;
            }
        }
        cout << k << endl;
    }
    return 0;
}