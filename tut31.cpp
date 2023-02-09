//contructor overloading 

#include <iostream>
using namespace std;

class complex 

{
    int a, b;

public:
  complex(){
        a = 0;
        b =0;
    }

    complex(int x, int y)
    {
        a = x;
        b = y;
    }

   complex (int x){
        a = x;
        b = 0;
    }

  

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
int main (){
 complex  c1(2,3);
     
    ex c2( 3);
    c2.printNumber();
c1.printNumber ();
    compl

return 1;
}