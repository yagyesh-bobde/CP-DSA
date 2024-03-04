// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    // TAKE INPUT

    // test case
    int t, i;

    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        /* code */

        // array size_t
        int n, j, q, sum;
        scanf("%d", &n);
        int arr[n];

        // take array
        for (j = 0; j < n; j++)
        {
            int num;
            scanf("%d", &num);
            // cin >> num ;
            if (j == 0)
            {
                arr[j] = num;
            }
            else
            {
                arr[j] = arr[j - 1] + num;
            }
        }

        // take no querries
        scanf("%d", &q);

        // for each query
        // Two queries
        for (j = 0; j < q; j++)
        {
            int q1, q2;
            scanf("%d %d", &q1, &q2);

            if (q1 != 1)
            {
                sum = arr[q2 - 1] - arr[q1 - 2];
            }
            else
            {
                sum = arr[q2 - 1];
            }

            printf("%d", sum);
            printf("\n");
        }
    }

    return 0;
}