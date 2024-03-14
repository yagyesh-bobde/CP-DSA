#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; ++i)
    {
        int rowSum = 0;
        for (int j = 0; j < M; ++j)
        {
            int num;
            cin >> num;
            rowSum += num;
        }
        cout << rowSum << endl;
    }

    return 0;
}
