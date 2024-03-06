#include <iostream>

// INPUT
// 6
// 5 4 10 9 21 10
// OUTPUT
// 10

using namespace std;

int main()
{

    // input array size
    int n, i, flag;
    scanf("%d", &n);

    // create array
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }


    // input array
    for (i = 0; i < n; i++)
    {
        int j, count=1; 

        for(j = i+1 ; j < n ; j++){
            if(flag == 0 && arr[i] == arr[j]){
                flag = 1;
                count++;
                printf("%d", arr[i]);
            }
        }
        
    }

    return 0;
}