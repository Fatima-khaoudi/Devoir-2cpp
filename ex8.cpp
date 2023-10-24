#include <iostream>
using namespace std;
class NombreComplexe{
  private:
    float rel;
    float img;
    public:
  NombreComplexe( ){
    float a , b;
        cout<< "entre la partie rel:"<<endl;
        cin>>a;
        cout<< "entre la partie img:"<<endl;
        cin>> b;
        rel=a;
        img=b;
    }
   float geter_rel(){
    return rel;
   }
    float geter_img(){
    return img;
   }
};
int main() {
     NombreComplexe ob1;
     NombreComplexe ob2;
     cout<<"la partie rel:"<<endl;
     cout<<"somme :"<<ob1.geter_rel()+ob2.geter_rel ()<<endl;
     cout<<"soustraction :"<<ob1.geter_rel()-ob2.geter_rel ()<<endl;
     cout<<"multiclication :"<<ob1.geter_rel()*ob2.geter_rel ()<<endl;
     cout<<"division :"<<ob1.geter_rel()/ob2.geter_rel ()<<endl;
     cout<<"la partie img  :"<<endl;
     cout<<"somme :"<<ob1.geter_img ()+ob2.geter_img  ()<<endl;
     cout<<"soustraction :"<<ob1.geter_img()-ob2.geter_img ()<<endl;
     cout<<"multiclication :"<<ob1.geter_img()*ob2.geter_img ()<<endl;
     cout<<"division :"<<ob1.geter_img()/ob2.geter_img ()<<endl;

    return 0;
}