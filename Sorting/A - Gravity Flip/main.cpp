#include <iostream>

using namespace std;

int main() {
    int n ;

    cin>>n;

    int arr[n];

    // enter array
    for(int i =0 ; i < n ; i++){
        cin>>arr[i];
    }

    // sort array in ascending order
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // print array
    for(int i = 0; i < n ; i++) {
        cout << arr[i] << " ";
    }

    cout<<"\n";
    
    return 0 ;
}