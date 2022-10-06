#include <iostream>
using namespace std;
class complex
{
   int a, b;

public:
   // constructor is a special member function with same name as of class
   //  it is used to initialse objects of its class
  complex(int ,int );
   // constructor declaration
   // it is automatically invoked whenever the object is created

   void printdata()
   {
      cout << "your number is " << a << "+i" << b << endl;
   }
};
//constructor ka matlab h ki construct krna yane ki objects ko banana 
//same name hoga class ke as it is 
//
complex ::complex(int x,int y) //this is parametrized constructor as it takes the arguments 
//automatically run ho jaega 
{
   a = x;
   b = y;
   //hhbvhbhbn  vvhjv
}
int main()
{
    //implicit call 
 complex c(4,6);
 //explicit call
 c.printdata();
//complex b ;
complex b=complex (5,7);
b.printdata();


   
   return 1;
}