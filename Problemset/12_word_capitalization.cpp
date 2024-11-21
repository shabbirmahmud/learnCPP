#include <iostream>
using namespace std;

int main()
{
    char word[1001];
    cin >> word;
    if (((int)word[0]) >= 97 && ((int)word[0]) <= 122)
    {
        int X = (int)word[0];
        X -= 32;
        word[0] = (char)X;
        cout << word << endl;
    }
    else
    {
        cout << word << endl;
    }

    return 0;
}