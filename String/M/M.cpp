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
        string s1, s2;
        cin >> s1 >> s2;

        int j, k;
        int akiarray[256] = {0};
        int bkiarray[256] = {0};

        for (j = 0; j < s1.size(); j++)
        {
            akiarray[(int)s1[j]] += 1;
        }

        for (j = 0; j < s2.size(); j++)
        {
            bkiarray[(int)s2[j]] += 1;
        }

        int flag = 1;
        for (j = 0; j < 256; j++)
        {

            if (akiarray[j] > 0)
            {
                if (akiarray[j] != bkiarray[j])
                {
                    flag = 0;
                }
            }
        }

        if (flag)
        {
            cout << "True"
                 << "\n";
        }
        else
        {
            cout << "False"
                 << "\n";
        }
    }

    return 0;
}