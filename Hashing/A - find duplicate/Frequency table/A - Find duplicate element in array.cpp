#include <iostream>



// INPUT
// 6
// 5 4 10 9 21 10
// OUTPUT
// 10

using namespace std;

int main() {

    // input array size
    int n, i, flag;
    scanf("%d", &n);
    
    // create array
    int arr[n];
    // Hashing array
    int hashArray[n*2];


    // input array
    for(i = 0 ; i < n; i++) {
        scanf("%d", &arr[i]);
        int hash = arr[i] % n + arr[i]% (n+1);


        hashArray[hash]+=1;

        if(hashArray[hash] == 2)
        {
            printf("%d", arr[i]);
        }
    }


    for(i = 0 ; i < n*2 ; i++){
        if(hashArray[i] != 0){
            printf("%d", hashArray[i]);
        }
    }
    


    return 0;
}