#include <iostream>
using namespace std;

int main() {
    int n,i;
    //taille de tableau!
    cout<<"entre la taille de tableau:";
    cin>>n;
    int *Tab=new int [n];
 cout<<"  entre les elements de tableau:"<<endl;
    for(i=0;i<n;i++)
    {cout<<"entre les elements de tableau:"<<i<<endl;
       cin>>Tab[i];
       
    }
    //afichage de tableau:
     cout<<"  les elements de tableau sont:"<<endl;
    for(i=0;i<n;i++){
    cout<<Tab[i]<<endl;
    }
    //suprime le tableau!
    delete[ ]Tab;
    //table carre:
    int*TabCarre=new int [n];
    cout<<"  les elements de tableau  carre sont:"<<endl;
    for(i=0;i<n;i++){
    cout<<Tab[i]*Tab[i]<<endl;
    }
    //suprime le tableau carre!
    delete[ ]TabCarre;

   
    return 0;
}