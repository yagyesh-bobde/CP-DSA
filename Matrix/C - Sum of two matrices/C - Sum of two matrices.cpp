#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int matrix[N][M];

    // Read and sum the matrices
    for (int k = 0; k < 2; ++k) {
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                int num;
                cin >> num;
                if (k == 0) { // For matrix A
                    matrix[i][j] = num;
                } else { // For matrix B
                    matrix[i][j] += num;
                }
            }
        }
    }

    // Print the sum of matrices
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
