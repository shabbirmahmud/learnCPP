#include <iostream>
using namespace std;

int main()
{
    int a, b, years = 0;
    cin >> a >> b;
    if (1 <= a && a <= b && b <= 10)
    {
        while (a < b && a!=b)
        {
            a *= 3;
            b *= 2;
            years++;
        }
        if (a == b)
        {
            years++;
        }
    }
    cout << years << endl;
}