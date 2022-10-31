// virtual functions  in c++
// virtual function ki help  se func jo hai vo derived class ka hi run ho 
//bhale hi base class ka pointer  derived class ke object ko point kr ra h hai 
// virtual function banane run time polymorphism ke lie  use hota hai 
#include <iostream>

 using  namespace std;
  class baseclass {
    public :
  int var1=88;
    virtual void display(){
    cout<<" 1base class variable "<<var1<<endl;
    
   }

  };
class derivedclass : public baseclass{
 public :
  int var2=99;
   void display(){
    cout<<" 2 displaying derived  class variable "<<var2<<endl;
    cout<<"2  displaying base class variable "<<var1<<endl;
    
   }

};
int main (){
    baseclass obj1;

    derivedclass obj2;

baseclass *bpr;
bpr =&obj2;
bpr->display(); // default behaviour 
return 0;

}