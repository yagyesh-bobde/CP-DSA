#include <iostream>
#include <string.h>
#include <unordered_set>

using namespace std;
int main() {
    int t; 
    cin >> t; 

    while(t--) {
        string str;
        cin >> str;
        int flag = 0;
        unordered_set<char> charSet;

        for (char ch : str)
        {
            if (charSet.count(ch) > 0)
            {
                cout << ch << endl;
                flag=1;
                break;
            }
            charSet.insert(ch);
        }

        if (flag == 0)
        {
            cout << "." << endl;
        }
    }
    
    return 1;
}
