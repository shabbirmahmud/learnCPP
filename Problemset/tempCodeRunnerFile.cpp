#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    if (N >= 2 && N <= 1000)
    {
        int A[N], min, max;
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        int mini = A[0];
        int maxi = A[0];
        int i;
        for (i = 1; i < N; i++)
        {
            if (mini < A[i])
            {
                mini = A[i];
                min = i;
            }
            if (maxi > A[i])
            {
                maxi = A[i];
                max = i;
            }
        }
        swap(A[min], A[max]);
        for (i = 0; i < N; i++)
        {
            cout << A[i];
            if (i != N - 1)
            {
                cout << " ";
            }
        }
    }
    return 0;
}
