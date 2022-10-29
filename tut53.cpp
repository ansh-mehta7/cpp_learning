// this pointer in c++ 
#include <iostream >
 using namespace std;
  class A {
     int a;
      public :
       A &setdata (int a ){
      // void setdata (int a ){
        // this will throw error therfore we use this opertor 
        // this us object ke lie member function ko invoke kar deta hai 
        // this ek pointer hota hi 

        this->a=a;
        return *this ;


// this is a keyword which points to the object whic is created which inviokes the member function
// also thi is used to return the object  
       }
       void getdata ()
       {
         cout<<"the value of a is "<<a<<endl ;
          
       }
  };

  int main (){
     A b;
     b.setdata(6).getdata();

     //b.getdata();
     return 1;
      
  }