#include <iostream>
using namespace std;

int main(){
    int N,sum1=0;
    cin>>N;
    if (1<=N && N<=1E9)
    {
        for (int i = 1; i <=N ; i++)
        {
            sum1=sum1+i;
        }
        
    }
    cout<<sum1<<endl;
}