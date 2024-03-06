#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    int n = str.length();
    int lps[n];
    lps[0] = 0;
    int len = 0;
    int i = 1;

    while (i < n) {
        if (str[i] == str[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }

    cout << lps[n - 1] << endl;

    return 0;
}
