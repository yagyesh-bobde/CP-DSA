#include <iostream>

using namespace std;

int main()
{
    int t;

    cin >> t;

    for (int a = 0; a < t; a++)
    {
        int n;

        cin >> n;

        int arr[n];

        // enter array
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int swaps = 0;
        // sort array using bubble sort
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swaps++;
                }
            }
        }

        // print array
        // for(int i = 0; i < n ; i++) {
        //     cout << arr[i] << " ";
        // }
        cout << swaps;
        cout << "\n";
    }

    return 0;
}