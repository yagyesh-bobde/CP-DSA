// n-way too long words
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int j;
        string s;
        cin >> s;
        int len = s.size();
        if (len - 1 > 10)
        {
            cout << s[0] << len - 2 << s[len - 1] << "\n";
        }
        else
        {
            cout << s << "\n";
        }
    }

    return 0;
}