#include<iostream>
using namespace std;
int main(){
    int n=5 , i, j;
    for(i=0; i<=n; i++)
    {
        char ch ='A';
        for(j=0 ; j<=8; j++)
        {
        cout<<ch<<" ";
        ch+=1;
        }
        cout<<endl;
    }
    return 0;
}