#include<iostream>
#include<queue>
using namespace std;
int main()
{
 queue<int> q;  //creating queue

 q.push(23);
 q.push(12);
 q.push(19);

 cout<<"size:"<<q.size()<<endl;


 q.pop();
 q.pop();
 q.pop();

 cout<<"size:"<<q.size()<<endl;

if(q.empty()){
    cout<<"empty"<<endl;

}else{
    cout<<"not empty";
}

q.push(11);
cout<<"front of q :"<<q.front()<<endl;



 return 0;

}