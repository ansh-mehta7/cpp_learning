// initilisation list  section in constructors 
// ek value dene ka tarika hai 
#include <iostream >
using namespace std;
class  test {
// int a ;
//  int b;
 int b;
int a ;
  public :
//    test (int i , int j  ): a (i), b (j )
//    test (int i , int j  ): a (i), b (j*2 )
   test (int i , int j  ): b (j ), a (i+b )
   // error dega becuse a will be initilsed first 
   
   
   // ye bhi run ho jaega kyko a ki value available hogi yahan
   // complex program me ese value de sakte hai
    {
     cout<<"const executed "<<endl;
      cout<<"a is "<<a<<endl;
      cout<<"b is "<<b<<endl;
      

   }






};
int main (){
      test t (4,6);
       
     return 1;
      
}
 