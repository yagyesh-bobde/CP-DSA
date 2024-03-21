#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int k = 0; k < t; k++)
    {

        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // implement selection sort where largest element is swapped in the last and print the index which gets swapped at each step

        for (int i = n - 1; i >= 0; i--)
        {
            int max = 0;

            for (int j = 0; j < i + 1; j++)
            {
                if (arr[j] > arr[max])
                {
                    max = j;
                }
            }

            swap(arr[max], arr[i]);
            cout << max << " ";
        }

        cout << "\n";
    }

    return 0;
}