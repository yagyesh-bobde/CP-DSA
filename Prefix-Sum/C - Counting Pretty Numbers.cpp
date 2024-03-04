// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
int main()
{

    int t, i;

    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {

        int l, r;

        scanf("%d %d", &l, &r);

        int digit, count = 0;
        for (int j = l; j <= r; j++)
        {
            digit = j % 10;
            if (digit == 2 || digit == 3 || digit == 9)
            {
                count++;
            }
        }

        printf("%d", count);
        printf("\n");
    }
    return 0;
}