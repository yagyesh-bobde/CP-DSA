#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    string ans;
    int len = s.size();

    for (int i = 1; i < s.size(); i = i + 2)
    {
        cout << s[i];
    }

    for (int i = 0; i < s.size(); i = i + 2)
    {
        cout << s[i];
    }

    
    cout << ans << endl;

    return 0;
}