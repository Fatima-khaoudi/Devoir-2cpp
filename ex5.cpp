#include <iostream>
using namespace std;

int main() {
    int a;
     cout<<"  la variablede a:"<<endl;
     cin>>a;
     int*p=&a;//pointeur 
     int&ref=a;//reference
       cout<<"  la valeur de  a est:"<<a<<endl;//affiche la valeur de a
      cout<< "la valeur de refeence" <<ref<<endl;//affiche lareference de a
     cout<<"  l adresse de  a est:"<<&a<<endl;//affiche l adresse de a
    return 0;
}