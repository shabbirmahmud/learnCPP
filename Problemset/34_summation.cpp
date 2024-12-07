#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int N, result = 0;
    cin >> N;
    long long int sum[N];
    if (1 <= N && N <= 1E5)
    {
        for (int i = 0; i < N; i++)
        {
            cin >> sum[i];
            if (-1E9 <= sum[i] && sum[i] <= 1E9)
            {
                result += sum[i];
            }
        }
        cout << abs(result) << endl;
    }

    return 0;
}