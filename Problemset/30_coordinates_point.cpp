#include <iostream>
using namespace std;

int main()
{
    double X, Y;
    cin >> X >> Y;
    if (-1000 <= X && -1000 <= Y && X <= 1000 && Y <= 1000)
    {
        if (X == 0 && Y == 0)
        {
            cout << "Origem" << endl;
        }
        else if (X == 0)
        {
            cout << "Eixo Y" << endl;
        }
        else if (Y == 0)
        {
            cout << "Eixo X" << endl;
        }
        else if (X > 0 && Y > 0)
        {
            cout << "Q1" << endl;
        }
        else if (X < 0 && Y > 0)
        {
            cout << "Q2" << endl;
        }
        else if (X < 0 && Y < 0)
        {
            cout << "Q3" << endl;
        }
        else if (X > 0 && Y < 0)
        {
            cout << "Q4" << endl;
        }
    }
}