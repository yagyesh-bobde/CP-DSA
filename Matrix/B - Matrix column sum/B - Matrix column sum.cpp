#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    // Read the matrix
    int matrix[N][M];
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    // Calculate column-wise sums
    for (int j = 0; j < M; ++j)
    {
        int colSum = 0;
        for (int i = 0; i < N; ++i)
        {
            colSum += matrix[i][j];
        }
        cout << colSum << endl;
    }

    return 0;
}
