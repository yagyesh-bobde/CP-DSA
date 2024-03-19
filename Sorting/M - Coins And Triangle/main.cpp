#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int diff = 1;
        int counter = 0;
        int height = 1;

        while (n > 0)
        {
            counter += diff;
            if (n >= counter)
            {
                height++;
            }
            diff++;
            n = n - counter;
        }
        cout << height << "\n";
    }
    return 0;
}
