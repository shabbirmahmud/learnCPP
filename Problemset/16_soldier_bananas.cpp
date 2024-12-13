#include <iostream>
using namespace std;

int main()
{
    int k, n, w, lend, total=0;
    cin >> k >> n >> w;
    if (1 <= k && w <= 1000 && 0 <= n && n <= 1E9)
    {
        for (int i = 1; i <= w; i++)
        {
            
            total = total + i*k;
        }
        if (total > n)
        {
            lend = total - n;
            cout<<lend<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
}