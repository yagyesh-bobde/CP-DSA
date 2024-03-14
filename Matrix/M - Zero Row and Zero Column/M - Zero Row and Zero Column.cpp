#include <iostream>

using namespace std;

#include <iostream>

using namespace std;

int main()
{
    int n = 4, m = 5;
    cin >> n >> m;

    int a[n][m];
    int b[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 0)
            {
                for (int k = 0; k < n; k++)
                {
                    b[k][j] = 0;
                }
                for (int k = 0; k < m; k++)
                {
                    b[i][k] = 0;
                }
            }
        }
    }

    // Print the modified matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}