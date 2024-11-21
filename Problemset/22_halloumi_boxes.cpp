#include <iostream>
using namespace std;

int main()
{
    int t, n, k, a[100];
    cin >> t;
    if (1 <= t && t <= 100)
    {
        for (int i = 0; i < t; i++)
        {
            cin >> n >> k;
            for (int i = 0; i < n; i++)
            {
                cin >> a[i];
            }
            if (k == 1)
            {
                bool isSorted = true;
                for (int i = 0; i < n - 1; i++)
                {
                    if (a[i] > a[i + 1])
                    {
                        isSorted = false;
                        break;
                    }
                }

                if (isSorted)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
}
