#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    if (2 <= A && 2 <= B && 2 <= C && 2 <= D
    && A <= 1E9 && B <= 1E9 && C <= 1E9 && D <= 1E9)
    {
        long long result = ((A % 100) * (B % 100) % 100 * (C % 100) % 100 * (D % 100) % 100) % 100;
        cout << setw(2) << setfill('0') << result << endl;
    }
    return 0;
}
