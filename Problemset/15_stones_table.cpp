#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    char color[50];
    cin >> n;
    if (1 <= n && n <= 50)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> color[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (color[i] == color[i + 1])
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
}