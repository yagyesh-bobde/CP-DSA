#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t)
    {
        int N;
        cin >> N;

        // Allocate memory for the matrix
        int matrix[N][N];

        // Read the matrix
        for (int i = 0; i < N; ++i)
        {
            for (int j = 0; j < N; ++j)
            {
                cin >> matrix[i][j];
            }
        }

        // Rotate the matrix
        // Transpose the matrix
        for (int i = 0; i < N; ++i)
        {
            for (int j = i; j < N; ++j)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for (int i = 0; i < N; ++i)
        {
            int start = 0;
            int end = N - 1;
            while (start < end)
            {
                swap(matrix[i][start], matrix[i][end]);
                start++;
                end--;
            }
        }

        cout << "Test Case #" << t + 1 << ":"
             << "\n";
        // Print the rotated matrix
        for (int i = 0; i < N; ++i)
        {
            for (int j = 0; j < N; ++j)
            {
                cout << matrix[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
