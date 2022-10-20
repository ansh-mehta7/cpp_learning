#include <iostream >
 using namespace std;
 class base {
    protected :

    int a ; // a ko inherit krna chahta hu lekin public bhi nhi bnana echahta hu 
    // private rahe lekin inherit ho jae to protected use karenge 
private :

     int b ;// jyad asensitive  h islie private 

    
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
  //cout << b.a;  ese access nhi kar sakte 
 // cout << b.a;  

    return 0;

 }
  