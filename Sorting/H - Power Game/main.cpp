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

        int arr1[n];
        int arr2[n];
        // enter array
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        // enter array
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }


        // sort array using bubble sort
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr1[j] > arr1[j + 1])
                {
                    int temp = arr1[j];
                    arr1[j] = arr1[j + 1];
                    arr1[j + 1] = temp;
                }


                if (arr2[j] > arr2[j + 1])
                {
                    int temp = arr2[j];
                    arr2[j] = arr2[j + 1];
                    arr2[j + 1] = temp;
                }

            }
        }

        int count = 0;
        for(int i = n-1 ; i >= 0 ; i--) {
            if(arr1[i] > arr2[i]) {
                count++;
            }
        }
        cout << count <<"\n";
    }

    return 0;
}