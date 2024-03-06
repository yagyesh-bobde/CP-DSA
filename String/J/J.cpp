#include <iostream>
#include <string.h>

using namespace std;
int main() {
    int t; 
    cin >> t; 

    while(t--) {
        string str;
        cin >> str;
        int flag = 0;
        const int MAX_CHAR = 256;
        int charCount[MAX_CHAR] = {0};

        for (char ch : str)
        {
            charCount[ch]++;
            if (charCount[ch] > 1)
            {
                cout << ch << endl;
                flag=1;
                break;
            }
        }

        if (flag == 0)
        {
            cout << "." << endl;
        }
    }
    
    return 1;
}
