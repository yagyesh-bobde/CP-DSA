#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int arr[n][n] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};

    // alternate way to print array

    int alternate = 1;
    for (int i = 0; i < n; i++)
    {
        if (alternate == 1)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else if (alternate == 0)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
        alternate = 1 - alternate;
        cout << endl;
    }

    return 0;
}