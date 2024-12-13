#include <iostream>
using namespace std;

int main()
{
    long long int N, X;
    cin >> N;
    long long int arr[N];
    if (1 <= N && N <= 1E5)
    {
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        cin >> X;
        for (int i = 0; i < N; i++)
        {
            if (0 <= arr[i] && arr[i] <= 1E9)
            {
                if (0 <= X && X <= 1E9)
                {
                    if (X == arr[i])
                    {
                        cout << i << endl;
                        break;
                    }
                    else
                    {
                        if (i == N - 1)
                        {
                            cout << (-1) << endl;
                        }
                    }
                }
            }
        }
    }
    return 0;
}