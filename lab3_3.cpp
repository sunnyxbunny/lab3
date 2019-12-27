#include<iostream>
using namespace std;
int main()
{    
    float sum=0, n=2;
    while(n<=69){
        sum+=1/n;
        n+=1;
    }
    cout<<sum;

    return 0;
}
