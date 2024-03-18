#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int matrix[N][M];
    int zeroCount = 0;

    // Read the matrix and count zeros
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == 0)
            {
                zeroCount++;
            }
        }
    }

    // Check if it is a sparse matrix
    if (zeroCount > (N * M) / 2)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}