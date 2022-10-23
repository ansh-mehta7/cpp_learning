// ambiguity resolution in  c++
#include <iostream>
 using namespace std;
  class base1{
public:
 void greet(){
     cout<<"how are u "<<endl;

 }
  };
   class base2{
    void greet(){
     cout<<"kese ho "<<endl;
    }
   };
class derived  :public base1, public base2{
    int a;
    
    public :
     

};
 int main (){

 }
