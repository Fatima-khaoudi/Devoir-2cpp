#include <iostream>
using namespace std;
class Std{
    public:
   void Cal(){
    static int a=0;
    a++;
    cout<<" le nombre de Cal est:"<<a<<endl;
    }
};

int main() {
    int x;
   Std ob;
   ob.Cal();
     ob.Cal();
    }