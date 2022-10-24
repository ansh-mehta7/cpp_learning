#include <iostream >
 using namespace std;
 class base {
    protected :

    int a ; // a ko inherit krna chahta hu lekin public bhi nhi bnana chahta hu 
    // private rahe lekin inherit ho jae to protected use karenge 
private :

     int b ;// jyada  sensitive  h islie private 

    
 };
 class derived:  protected base  {
// // for a protected member 
//              public            private               protected 

// private     not inherited      not inherited         not inherited 
// protected   protected          private               protected 
// public      public             private               protected 



 };
 int main ()
 {
base b ;
 derived d;
  //cout << b.a;  ese access nhi kar sakte private jaisa behaviour hi show karega 
//  cout << d.a;  

    return 0;

 }
  