#include <iostream>
#include <climits>
using namespace std;

int main()
{
    long long int T, N;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        if (1 <= T && T <= 100)
        {
            cin >> N;
            long long int A[N+1];
            A[0]=0;
            if (2 <= N && N <= 100)
            {
                for (int i = 1; i <= N; i++)
                {
                    cin >> A[i];
                }
                long long int  min = LLONG_MAX;
                for (int i = 1; i < N; i++)
                {
                    if (-1E6 <= A[i] && A[i] <= 1E6)
                    {
                        for (int j = i + 1; j <=N; j++)
                        {
                            if (1 <= i && i < j && j <= N)
                            {
                                long long int sum = A[i] + A[j] +(j - i);
                                if (sum < min)
                                {
                                    min = sum;
                                }
                            }
                        }
                    }
                }
                cout << min << endl;
            }
        }
    }
}
