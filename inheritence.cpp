// reusability  is very important feature in cpp in c++ we can reuse the class it saves time
// we cam reuse the properties of existing class by inheriting from it
// existing class is base class
// new class is called as derived class
// one or more derived classes can exist
// we can also add variables and functions in the derived class

/*
single =a derived class from only one base class

 multiple inheritence=  a derived class with more than one base class

 hierarchical = one base class several derived class

 multilevel = deriving classes from alredy derived classes

 hybrid =combination of multiple and multilevel

 */ 
// derived class syntax

/*class {{derived class name }}: {{visibility mode }} {{ base class  name }}
class memebers and methods {

} default visbility mode is private

private visib mode = public memebers of the base class becomes private mebers of the derived class
public visib mode =public members of the base class becomes public members of the derived  class
private members cant be  inherited
*/
// creating a programmer  derived class from base class
#include <iostream >
using namespace std;
class employee
{
public:
    int id;  // id is public 
   
     employee() {} // ek default constructor banana padega because derived class ka object base class ke 
    // constructor ko bhi calll karega 
    employee(int iid)
    {
        id = iid;
       
    }
};
// class programmer : employee
class programmer : employee
{
public:
    
    programmer(int xid)
    {
        id = xid; // id abhi inherit nhi hogi because id jo hai vo employee class ki private member hain
    }
    void getdata()
    {
        cout << id;
    }
};

int main()
{
    employee harry(1);
    
    programmer ansh(2);
    
    // cout<<ansh.id;
     ansh.getdata();

   //  id ab private ho gya  h to ese access nhi kar sakte 
    // at this point error ayega employee::employee because programmer employee se i nherit  hua hai to ye employee ke default constructor
    // ko call krne ki koshish karega jo ki hame banana padega
    // cout<<ansh.id;
    

    return 0;
}
// inherit hi nhi hoga nuiche nhi aaega id ahgar id private hua to  id ko inherit 
// krne ke lie hame usko public banana padega 
// ansh.id ko bhi hum print nahi kr paenge 
// we can inherit the function which have private members bhale hi inheritence 
 // nhi private ho to nhi access ho jaega 
 // private members ka to app refrence hi nhi de sakte ho derived class me 
 // bhale hi vo koi bhi mode ka inheritence ho 
 // public variable bhale h iprivate mode me ionherit hue ho uka refrence 
 // le sakte hai print ya memmber functions me 