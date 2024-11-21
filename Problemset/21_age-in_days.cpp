#include <iostream>
using namespace std;

int main(){
    int N,N1,N2,N3;
    cin>>N;
    if (0<=N && N<=1E6)
    {
        N1=N/365;
        N2=(N%365)/30;
        N3=(N%365)%30;
    }
    cout<<N1<<" years"<<endl;
    cout<<N2<<" months"<<endl;
    cout<<N3<<" days"<<endl;
}