#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    long long int A[N];

    if (2 <= N && N <= 1000)
    {
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        long long min = A[0], max = A[0], temp;
        int minIndex = 0, maxIndex = 0;
        for (int i = 1; i < N; i++)
        {
            if (-1E5 <= A[i] && A[i] <= 1E5)
            {
                if (A[i] < min)
                {
                    min = A[i];
                    minIndex = i;
                }
                if (A[i] > max)
                {
                    max = A[i];
                    maxIndex = i;
                }
            }
        }
        temp = A[minIndex];
        A[minIndex] = A[maxIndex];
        A[maxIndex] = temp;
        for (int i = 0; i < N; i++)
        {
            cout << A[i] << " ";
        }
        cout<<"\n";
    }

    return 0;
}