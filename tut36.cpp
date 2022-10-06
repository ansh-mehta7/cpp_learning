// reusability  is very important feature in cpp in c++ we can reuse the class it saves time
// existing class is base class
// new class is called as derived class
// one or more derived classes can exist
/*
single =a derived class from one base class
 multiple inheritence= derived class with more than one base class
 hierarchical = one base class several derived class
 multilevel = deriving classes from alredy derived classes
 hybrid =combination of multiple and multilevel

 */
#include <iostream>
using namespace std;
// base class
class employee
{
    int id;

public:
    float salary;
    employee(int i)
    {
        id = i;
        salary = 100;
    }
};
// derived class syntax
/*class {{derived class name }}: {{visibility mode }} {{ base class  name }}
class memebers and methods {

} default visbility mode is private 
private visib mode = public memebers of the base class becomes private mebers of the derived class 
public visib mode =public members of the base class becomes public memevers of the derived  class 
private members are never inherited 
*/
// creating a programmer  derived class from base class
class programmer :employee{
    public :
    int langcode =6;

};
int main(){}
{
    employee ansh(1);
    cout << ansh.salary;

    return 0;
}