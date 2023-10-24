#include <iostream>
using namespace std;

int main() {
    int Tab[10];//un tableau de 10 entier.
    int i,j,tmp ;
    cout<<"  entre les elements de tableau:"<<endl;
    for(i=0;i<10;i++)
    {cout<<"entre les elements de tableau:"<<i<<endl;
       cin>>Tab[i];
    }
     cout<<"  les elements de tableau sont:"<<endl;
    for(i=0;i<10;i++){
    cout<<Tab[i]<<endl;
    }
   for(i=0;i<10;i++){
      for(j=i+1;j<10;j++){
        if(Tab[i]>Tab[j]){
          tmp=Tab[i];
           Tab[i]=Tab[j];
           Tab[j]=tmp;
           }
         } 
     }
     cout<<"le tableau tris est:" <<endl;
    for(i=0;i<10;i++){
         cout<<Tab[i]<<endl;
    }
    
    return 0;
}

