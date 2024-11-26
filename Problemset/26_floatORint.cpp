#include <iostream>
using namespace std;

int main()
{
    double N;
    cin >> N;
    if (1 <= N && N <= 1E3)
    {
        if (N == (int)(N))
        {
            cout << "int " << (int)N << endl;
        }
        else
        {
            cout << "float " << (int)N << " " << N - (int)N << endl;
        }
    }
}