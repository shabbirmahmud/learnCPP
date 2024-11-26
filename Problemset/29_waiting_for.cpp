#include <iostream>
using namespace std;

int main()
{
    int n;
    char eventName;
    int eventNum, pCount = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> eventName >> eventNum;
        if (eventName == 'P')
        {
            pCount = pCount + eventNum;
        }
        else if (eventName == 'B')
        {
            if (eventNum > pCount)
            {
                cout << "YES" << endl;
                pCount = 0;
            }
            else
            {
                cout << "NO" << endl;
                pCount = pCount - eventNum;
            }
        }
    }
}