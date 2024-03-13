#include <iostream>

using namespace std;

// Snake game
// right game 
// downward 
// backward 
// upward




int main()
{
    int n = 5;
    int arr[n][n] = {{1, 2, 3, 4, 5},
                     {6, 7, 8, 9, 10},
                     {11, 12, 13, 14, 15},
                     {16, 17, 18, 19, 20},
                     {21, 22, 23, 24, 25}};
    int loop; 

    // 
    if(n%2==0){
        loop = n/2;
    }else{
        loop = (n / 2) + 1;
    }

    int i = 0;
    // printing array
    while(loop){
        // right
        int temp = n - 1; // upward
        int times = 0;

        for (i = times; i <= temp; i++)
        {
            cout << arr[n-2-loop][i] << " ";
        }

        // downward
        for ( int j = 0 ; j < temp; j++)
        {
            cout << arr[n - 1 - loop + j ][temp] << " ";
        }

        // backward
        for (int j = temp-1 ; j >= 0; j--)
        {
            cout << arr[temp][j] << " ";
        }

        

        for (int j = temp -1 ; j > times; j--)
        {
            cout << arr[j][times] << " ";
        }

        cout<<endl;
        loop--;
        temp--;
        times++;
    }

    return 0;
}