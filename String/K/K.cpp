#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    int n;
    cin >> n; // Number of sentences

    cin.ignore(); // Ignore newline character in input buffer

    while (n--)
    {
        string sentence;
        getline(cin, sentence);

        int words = 0, vowels = 0, consonants = 0;
        bool inWord = false;

        for (char c : sentence)
        {
            if (isspace(c))
            {
                if (inWord)
                {
                    words++;
                    inWord = false;
                }
            }
            else
            {
                inWord = true;
                if (isalpha(c))
                {
                    if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u')
                        vowels++;
                    else
                        consonants++;
                }
            }
        }

        if (inWord)
            words++;

        cout << words << " " << vowels << " " << consonants << endl;
    }

    return 0;
}
