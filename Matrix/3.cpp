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
        for (int j = 0; j < n; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}