#include <iostream>
using namespace std;

int main()
{

    int A, B, C, D, result;
    cin >> A >> B >> C >> D;
    result = A * B * C * D;
    result = result % 100;
    if (result == 0)
    {
        cout << "00" << endl;
    }
    else
    {
        cout << result << endl;
    }
}