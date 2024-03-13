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

    int alternate = 1, temp;

    // upper triangle
    for (int i = 0; i < n; i++)
    {
        int temp = i;    
        for (int j = 0, temp = i; j <= i ; j++)
        { 
            cout<<arr[j][temp]<<" ";
            temp--;
        }
        cout<<endl;
    }



    // lower triangle
    for (int i = 1; i < n; i++)
    {
        int temp = i;
        for (int j = n-1; j >= i; j--)
        {
            cout << arr[temp][j] << " ";
            temp++;
        }
        cout<<endl;
    }

    return 0;
}