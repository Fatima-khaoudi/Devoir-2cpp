#include <iostream>
using namespace std;

int main() {
    int Tab[10];//un tableau de 10 entier.
    int *P=Tab;//p est un pointeur qui point sur le tableau (Tab).
    int i,min,max;
    cout<<"  entre les elements de tableau:"<<endl;
    for(i=0;i<10;i++)
    {cout<<"entre les elements de tableau:"<<i<<endl;
       cin>>Tab[i];
    }
     cout<<"  les elements de tableau sont:"<<endl;
    for(i=0;i<10;i++){
    cout<<Tab[i]<<endl;
    }
    min=Tab[0];
    max=Tab[0];
   for(i=1;i<10;i++){
        if(Tab[i]<min){
            min=Tab[i];
        }
        if(Tab[i]>max){
      max=Tab[i];
     
    }
    
    }
    
    
   
       cout<<"  le min  de tableau est:"<<min<<endl;
      cout<<"  le max de tableau est:"<<max<<endl;

    return 0;
}
