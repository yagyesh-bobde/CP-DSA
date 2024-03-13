// 
// INPUT: 3
// 1 4 1
// 3
// 1 1
// 1 2
// 0 2
// OUTPUT: 
// 4
// 5
// 6

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    // TAKE INPUT
    int n, q, i, sum;
    cin >> n >> q;
    int arr[n];

    for (i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (i == 0)
        {
            arr[i] = num;
        }
        else
        {
            arr[i] = arr[i - 1] + num;
        }
    }

    // Two queries
    for (i = 0; i < q; i++)
    {
        int q1, q2;
        cin >> q1 >> q2;
        if (q1 != 1)
        {
            sum = arr[q2 - 1] - arr[q1 - 2];
        }
        else
        {
            sum = arr[q2 - 1];
        }
        cout << sum << "\n";
    }

    return 0;
}