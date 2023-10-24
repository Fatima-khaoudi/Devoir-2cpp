#include<iostream>
using namespace std;

int mult2(int n){
    if(n%2==0)
    cout<<"nombre est paire"<<endl;
   }
   int mult3(int m){
    if(m%3==0)
    cout<<"nombre est multiple de 3"<<endl;
   }
int main ()
{
    int x;
     cout<<" entre a nombre "<<endl;
     cin>>x;
     mult2(x);
     mult3( x);
     if(x%6==0)
    cout<<"nombre est divisible par 6 "<<endl;


}
