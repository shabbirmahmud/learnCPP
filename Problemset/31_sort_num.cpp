#include <iostream>
using namespace std;

int main()
{
    int A, B, C;

    cin >> A >> B >> C;

    if (A <= B && A <= C)
    {
        if (B <= C)
        {
            cout << A << "\n"
                 << B << "\n"
                 << C << "\n";
        }
        else
        {
            cout << A << "\n"
                 << C << "\n"
                 << B << "\n";
        }
    }
    else if (B <= A && B <= C)
    {
        if (A <= C)
        {
            cout << B << "\n"
                 << A << "\n"
                 << C << "\n";
        }
        else
        {
            cout << B << "\n"
                 << C << "\n"
                 << A << "\n";
        }
    }
    else
    {
        if (A <= B)
        {
            cout << C << "\n"
                 << A << "\n"
                 << B << "\n";
        }
        else
        {
            cout << C << "\n"
                 << B << "\n"
                 << A << "\n";
        }
    }

    cout << "\n";

    cout << A << "\n"
         << B << "\n"
         << C << "\n";

    return 0;
}
