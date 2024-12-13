#include <iostream>
using namespace std;

int main()
{
    int n, k, result;
    cin >> n>> k;
    if (2 <= n && n <= 1E9 && 1 <= k && k <= 50)
    {
        for (int i = 1; i <= k; i++)
        {
            if (n % 10 == 0)
            {
                n = n / 10;
                result=n;
            }
            else
            {
                n = n - 1;
                result=n;
            }
        }
    }
    cout << result << endl;
}
