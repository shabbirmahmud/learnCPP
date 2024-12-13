#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    if (1 <= t && t <= 9261)
    {
        int a, b, c;
        for (int i = 0; i < t; i++)
        {
            cin >> a >> b >> c;
            if (0 <= a && 0 <= b && 0 <= c && a <= 20 && b <= 20 && c <= 20)
            {
                if ((a+b==c)||(b+c==a)||(a+c==b))
                {
                    cout<<"Yes\n";
                }
                else{
                    cout<<"No\n";
                }
            }
        }
    }
}