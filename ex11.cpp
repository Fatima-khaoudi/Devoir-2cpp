#include<iostream>
using namespace std ;
class Vecteur3d
{
    private:
    float x,y,z;
    public:
    Vecteur3d( float a=0,  float b=0, float c=0){
        x=a;
        y=b;
        z=c;

    }
    void Affichage(float c1,float c2 ,float c3){
        cout<<"donner la valeur de c1:"<<endl;
        cin>>c1;
         cout<<"donner la valeur de c2:"<<endl;
        cin>>c2;
         cout<<"donner la valeur de c2:"<<endl;
        cin>>c2;
        x=c1;
        y=c2;
        z=c3;
        cout<<"les composant du vecteur est:"<< (x,y,z)<<endl;
    }
   float sum() {
        return  x+y ;
    }
    float produit (){
       return x*y;
    }
    float norme (){
       return((x*x)+(y*y));
    }

};
int main()
{
    float x,y,z;
    Vecteur3d ob(x,y,z);
    ob.Affichage(x,y,z);
    cout<<"la somme de 2 vecteur:";
    float sum();
    cout<<endl;
     cout<<"la produit de 2 vecteur:";
    float produit();
    cout<<endl;
 cout<<"la  norme de 2 vecteur:";
    float  norme();
    cout<<endl;


}