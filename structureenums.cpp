#include <iostream >
 using namespace std ;
  union money{
     int rice ;
      char car;
       float pounds;

  };
  // at a time keval ek hi use krna chahta hu data 
  // memory share ho jaegi teeno ke beech 
  int main (){
     /* union money m1;
      m1.car='t';
       m1.rice=77;
        cout<<m1.rice;
       cout<<m1.car; // garbage value print hogi */

enum meal {breakfast,lunch,dinner};
// since breakfast is a datatype of meal we can also write 
meal m1=breakfast;
cout<<breakfast;//0
cout<<dinner;//2
cout<<lunch;//1
cout<<m1;

  }
  
  