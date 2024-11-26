#include <iostream>
using namespace std;

int main()
{
    int A, B;
    char S;
    cin >> A >> S >> B;
    if (-100 <= A && -100 <= B && B <= 100 && A <= 100)
    {
        if ((S == '>' && A > B)||(S == '<' && A < B)||(S == '=' && A == B))
        {
            cout << "Right" << endl;
        }
        else{
            cout << "Wrong" << endl;
        }
    }
}