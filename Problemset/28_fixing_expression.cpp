#include <iostream>
using namespace std;

int main()
{
    char s[4];
    int t;
    cin >> t;
    if (1 <= t && t <= 300)
    {
        for (int i = 0; i < t; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> s[j];
            }
            if ((s[0] >= '0' && s[0] <= '9' && s[2] >= '0' && s[2] <= '9') && (s[1] == '<' || s[1] == '>' || s[1] == '='))
            {
                if (!(s[0] <= s[2]))
                {
                    s[1] = '>';
                    cout<<s<<endl;
                }
                else if (!(s[0] >= s[2]))
                {
                    s[1] = '<';
                    cout<<s<<endl;
                }
                else{
                    s[1] = '=';
                    cout<<s<<endl;
                }
            }
        }
    }
}