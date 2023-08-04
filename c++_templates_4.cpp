#include <iostream>
using namespace std ;
template <class T1 , class T2 >

float  funcavg (T1 a , T2  b  ){
    float avg1 = (a+b )/ 2.0;
     float avg2=float(avg1);

     return avg2 ;
      
}
template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

// swap functionka bhi use kar sakte hain par har type ke function ke lie hume new 
// template to banani hi padegi
int   main (){
     float a ; 
      a = funcavg(5,2 );
       cout<<a ;

      return 0 ; 
}