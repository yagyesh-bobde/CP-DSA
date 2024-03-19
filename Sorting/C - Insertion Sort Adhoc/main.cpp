#include <iostream>

using namespace std;

int main() {
    int t ;
    cin>>t;

    for(int k = 0 ; k < t ; k++){

        int n; 
        cin>>n;

        int arr[n];

        for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }

        // implement insertion sort and print the ith index with which it gets swapped
        for(int i = 1; i < n; i++) {
            int key = arr[i];
            int j = i - 1;

            while(j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
            cout<<j + 1<<" ";
        }

    }
    
    return 0;
}