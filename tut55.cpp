// ploymorphism 
// onr name multiple forms 
// function overloading virtual functions 
// compile time and run time ploymorphism  complile time include function and operotor overloading 
// run time include virtual functions  
// pointers to the derived classes 
#include <iostream>
 using namespace std;
  class baseclass {
    public :
  int var1;
   void display(){
    cout<<"base class variable "<<var1<<endl;
    
   }

  };
class derivedclass : public baseclass{
 public :
  int var2;
   void display(){
    cout<<" displaying derived  class variable "<<var2<<endl;
    cout<<" displaying base class variable "<<var1<<endl;
    
   }

};
int main (){
    baseclass *pointer_base ;
    baseclass obj1;
    derivedclass obj2;
    pointer_base=  &obj2; // yes it is possible pointing to the derived class object 
pointer_base->var1=38;
pointer_base->display(); 
// pointer jo h vo main cheez hai agar vo base class ka hai bhale hi vo derived class ke object ko point kr rha hai but agr hum display funcrtion call k
// karenge to vo base class ka hi run hoga 
// object bhale hi derived class ka hai lekin pointer base class ka hai jo 
//pointer jis type ka hota hai uske function ke sathnye binding ka jiso late binding bolte hai 
// base class ka pointer agar humne derived class se point kra diya to hum keval jo base class se inherit hui hai cheeze unhi ko access kar sakte ho 


// pointer_base->var2= 45;  

// will throw an error keval base class ki properties ko access kr sakte h  base class ka pointer derived class ke memebr ko access nhi kar paega 
// display base class ka hi call ho ra hai 
// ab hum derived class ka pointer bna ke dekhte hai 


derivedclass *pointer_derived;

pointer_derived =& obj2;
pointer_derived->var2=100;



pointer_derived->var1=1700;
pointer_derived->display();
// this is run time polymorphism compiler decides after the program executes 


return 0 ;
 
}