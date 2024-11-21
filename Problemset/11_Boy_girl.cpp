#include <iostream>
using namespace std;


int main()
{
    char username[101];
    int distinct[26] = {0};
    int count = 0;

    cin >> username;

    for (int i = 0; username[i] != '\0'; i++) {
        int index = username[i] - 'a';
        if (distinct[index] == 0) {
            distinct[index] = 1; 
            count++;  
        }
    }

    if (count % 2 == 0) {
        cout<<"CHAT WITH HER!"<<endl;
    } else {
        cout<<"IGNORE HIM!"<<endl;
    }

    return 0;
}