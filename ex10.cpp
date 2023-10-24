#include <iostream>
using namespace std;
class Personne{
    private:
    string nom;
    string prenom;
    int dade_de_naissance;
  public:
  Personne(string a,string b,int c){
    cout<<"entre le nom:"<<a<<endl;
    cout<<" entrele prenom :"<<b<<endl;
    cout<<" entre la date_de_naissance est:"<<c<<endl;
         nom=a;
         prenom=b;
         dade_de_naissance=c;
  }
  void Affiche(){
    cout<<"le nom est:"<<nom<<endl;
    cout<<"le prenom est:"<<prenom<<endl;
    cout<<"ledade_de_naissance est:"<<dade_de_naissance<<endl;
  }

};
class Employe: Personne{
        private:
        int salary;
        public:
        Employe(const string a,const string b, const int c, int salary);
      void Affiche();
    
    };
    class Chef: Employe{
        private:
        string service;
        public:
       Chef();
        void Affiche();
    
    };
    class Directeur:public  Chef{
        private:
        string societe;
        public:
        Directeur();
        void Affiche();
      };
    
