#include<iostream>
using namespace std;
int main(){
 int i,n;
cout<<"enter the number:";
cin>>n;
bool isPrime = true;
for(i=2; i<=(n-1); i++)
{
    if(n%i==0)
{
    isPrime = false;
    break;
}

}
if(isPrime ==true)
    {
        cout<<" prime";
    }
    else{
        cout<<" Non Prime";
    }
    return 0;
}