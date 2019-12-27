#include<iostream>
using namespace std;
int main()
{    
    float sum=0, n=6;
    while(n<=19){
        sum+=1/n;
        n+=1;
    }
    cout<<sum;

    return 0;
}
