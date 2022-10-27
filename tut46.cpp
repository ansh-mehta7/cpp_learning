// constructors in inheritence 
// we can use constructors in derived class 
// if base class constr does not have any arguments 
// base class have no arguments then no need of constructor in derived class 
// if base class constructor  has more than one arguments derived class constructor has to pass arguments to the base class 
// id both base and derived class has arguments then base class constructor is called first  

#include <iostream >
 using namespace std;
 class base1 {
    int data1 ;
  
    public :
     base1 (int i ){
data1=i ;
cout<<"base class const called";
 
     }
     void printdata (void ){
         cout <<"value of data "<<data1<<endl;

     }
 };
 class base2 {
    int data2 ;
  
    public :
     base2 (int i ){
data2 =i ;
cout<<"base class const called";
 
     }
     void printdata (void ){
         cout <<"value of data "<<data2<<endl;

     }
 };
 
  class derived : public base1 , public base2{
    
    int derived1, derived2;
     public:
     derived()
 };
  int main (){



     return 0;
      
  }
 