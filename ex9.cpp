#include<iostream>
using namespace std;
class Animal{
    public:
    string name;
    int age;
    void set_value(string a,int b){
        cout<<"entre la nom:"<<a<<endl;
        cout<<"entre  age:"<<b<<endl;

        name=a;
        age=b;
    }
    class Zebra:public Animal{
        public:
        set_value(string x,int y);
    


    }
    class Dolphin:public Animal{
        public:
        set_value(string x,int y);}

};

int main ()
{
   

}


