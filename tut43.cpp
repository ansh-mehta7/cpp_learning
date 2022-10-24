// ambiguity resolution in c++ ek hi function base 1 me bhi ho 2 m2 bhi ho to derived
// me konsa aaega same name ka function
#include <iostream>
using namespace std;
class base1
{
public:
    void greeting()
    {
        cout << "how are u ";
    }
};
class base2
{
public:
    void greeting()
    {

        cout << "kese ho ";
    }
};
class derived : public base1, public base2
{
    int a;
    public:

    void greeting (){
base1::greeting();// ambiguity solve by scope resolution operator 

    }

};
class b {
    public :
     void say (){
         cout<<"hello ";
     }
     };
class d: public b {
    public :
    //  void say (){
    //      cout<<"world ";

    //  }
};


int main()
{
//     base1 obj;
//     base2 job;
//     obj.greeting();
//     job.greeting();
// derived d;
//  d.greeting(); // ye abhi ambigious hai kis class ka greeting lena hai 
 d d1;

d1.say();

    return 0;
}
