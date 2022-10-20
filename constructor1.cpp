// it should be declared in the public member of the class
//they do not have the return types and they do not return the values 
//it can have the default arguments 
//we cant refer to their address

#include <iostream>
using namespace std;
class complex
{
   int a, b;

public:
   // constructor is a special member function with same name as of class
   //  it is used to initialse objects of its class
  complex(void);
   // constructor declaration
   // it is automaticallly invoked whenever the object is created

   void printdata()
   {
      cout << "your number is " << a << "+i" << b << endl;
   }
};
//constructor ka matlab h ki construct krna yane ki objects ko banana 
//same name hoga class ke as it is 
//
complex ::complex(void) //this is default constructor as it takes no parameter 
{
   a = 8;
   b = 5;
}
int main()
{
   complex c;
   c.printdata();
   return 1;
}