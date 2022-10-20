#include <iostream>
using namespace std;
class complex ;
//complex class ka forward declaration karna padega for compiler to understand 
//ki ha bhaiya aage complex class hain 

class calculator {
    int a,b;
     public :
     int  add (int a ,int b )
{
    return a+b;

}
int sumrealcomplex (complex o1 ,complex  o2 );//function defination nhi di hai abhi tak nhi to compiler ko kese pta chalega 
int sumcompcomplex (complex o1 ,complex  o2 );//function defination nhi di hai abhi tak nhi to compiler ko kese pta chalega 
//ki apan ne class define kr di hai islie hum usko niche declare kr rhe hain class complex ke badd 

// {
//     return ((o1.a+o2.a));

// }
};
class complex
{
    int a, b;
    //dusri calss ke koi bhi function ko is class ka friend function banana hai 
    //individulally declaring functions as friend 
    //declare kr do entire class ko acces as friend class 
 friend int calculator :: sumrealcomplex (complex o1 ,complex  o2);
 friend int calculator :: sumcompcomplex (complex o1 ,complex  o2);
 //alternative class ko hi friend bna diya hai 
friend class calculator ;


public:
    void setnumber(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void printnumber()
    {
        cout << "your number is " << a << "+i" << b;
        cout << endl;
    }
    // int sumrealcomplex (complex o1,complex o2 ){
    //      return ((o1.a+o2.a));
    // }
    
};
int  calculator ::sumrealcomplex (complex o1,complex o2 ){
    return (o1.a+o2.a);
}
int  calculator ::sumcompcomplex (complex o1,complex o2 ){
    return (o1.b+o2.b);
}


int main ()
{
complex o1,o2 ;
o1.setnumber(1,4);
o2.setnumber(5,7);
calculator cal;
int res = cal.sumrealcomplex(o1,o2);
int ser = cal.sumcompcomplex(o1,o2);
cout<<res;
cout<<ser;



return 0;

}
