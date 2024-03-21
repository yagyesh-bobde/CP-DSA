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
        int count0 = 0; 
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] == 0){
                count0++;
            }
        }

        // print 0
        for (int i = 0; i < count0; i++)
        {
            cout<<0<<" ";
        }
        // print 0
        for (int i = 0; i < n - count0; i++)
        {
            cout<<1<<" ";
        }
        cout << "\n";
    }

    return 0;
}