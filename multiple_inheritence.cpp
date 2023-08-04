//         multiple inheritence 
//multiple base class to one derived class 
#include <iostream >
using namespace std;
//  class derived :visib mode  base1, visib mode base 2{
//      class body of derived class
//  };
class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
    class base2
    {
    protected:
        int base2int;

    public:
        void set_base2int(int a)
        {
            base2int = a;
        }
    };
   class derived :public base1, public  base2 // idhar base 3 bhi ho sakt hai jitni chahe utni base classes ho sakti hain 
    {
    public:
        void show()
        {
            cout << "the value of base 1 is " << base1int << "the value of base 2 is " << base2int << endl;
            cout << "the sum is "<<base1int + base2int;
        }
    };

    int main()
    // the inherited class will look like 
    // memebers 

    // base1int -->protected 
    // base2int -->protected
    // functions 

    // set_base1int -->public 
    // set_base2int -->public 
    // show --> public 
    {
        derived harry;
        harry.set_base2int(55);
        harry.set_base1int(44);
harry.show();



        return 1;
    }