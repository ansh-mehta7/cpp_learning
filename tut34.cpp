//copy constructors 
#include <iostream>
using namespace std;

class number {
    int a;
     public :
     number (){
      a=0;
     }
     number (int num ){
        a = num;

     }
     /// compiler ek default copy const har class ko alot kr deta hai 
     //compiler provides its own copy constructor 
     number (number &obj ){
      //copy const is called 
      cout<<"copy const. is called "<<endl;

        a =obj.a;

     }
     void display()
     {
        cout<<"the number is "<<a <<endl;

     }

};
int main (){
    number x,y(6);//ek empty constructor default constructor banana padega 
x.display();
y.display();
number z1(x);
z1.display();
number z4= y;


// z1 should exactly resemnble x or y or z 

return 1;


}