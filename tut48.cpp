// constructors in inheritence 
// we can use constructors in derived class 
// if base class constr does not have any arguments 
// base class have no arguments then no need of constructor in derived class 
// if base class constructor  has more than one arguments derived class constructor has to pass arguments to the base class 
// if both base and derived class has arguments then base class constructor is called first  
// c++ me ek special syntax hota hai arguments pass krne ka constructors ke lie 
// virtual base class ka constructor pehle run hoga 

#include <iostream >
 using namespace std;
 class base1 {
    int data1 ;
  
    public :
     base1 (int i ){
      data1=i ;
      cout<<"base  1 class const called";
 
     }
     void printdatab1 (void ){
         cout <<"value of data "<<data1<<endl;

     }
 };
 class base2 {
    int data2 ;
  
    public :
     base2 (int i ){
      data2 =i ;
      cout<<"base  2 class const called";
 
     }
     void printdatab2 (void ){
         cout <<"value of data "<<data2<<endl;

     }
 };
 // ye change krne se order change hoga 
  class derived : public base1 , public base2
  // 
  {

    
    int d1, d2;
     public:
     // ye base 1 or base 2 ke cinstructor se clall hi rha hai to mujhr // 
    // base1 or base2 dono ke const ko call krna hai to uska syntax kuch ese hoga 
     derived( int a , int b , int c , int d): base1(a) , base2(b)
     //ye order matter nhi karega 
     {
        d1=c ;
         d2=d ;
          cout<<"derived class const called "<<endl;
           

     }
     void printdatadd (void ){
         cout <<"value of d1 "<<d1<<endl;
         cout <<"value of d2  "<<d2<<endl;

     }
 };
  int main (){
derived ansh(1,2,3,4);
 ansh.printdatab1();
 ansh.printdatab2();
 ansh.printdatadd();


     return 0;
      
  }
 