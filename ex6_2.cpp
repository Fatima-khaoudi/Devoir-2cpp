//reference!
#include <iostream>
using namespace std;
int incrementer(int &w){ 
   w++; 
   cout<< "la valeur incrementerde w est" <<w<<endl;

}
void permuter(int x ,int y){
    int z;
    z=x;
    x=y;
    y=z;
    cout<< "new valeur de x est" <<x<<endl;
    cout<< "new valeur de y est" <<y<<endl;
}
int main() {
     int x,y,z,w;
   cout<< " entre la valeur de w :" <<endl;
    cin>>w;
    incrementer(w) ; 
    cout<< "entre la valeur de x:"<<endl;
    cin>>x;
    cout<< "entre la valeur de y:"<<endl;
    cin>>y;
    permuter(x, y);
    
    return 0;
    }
