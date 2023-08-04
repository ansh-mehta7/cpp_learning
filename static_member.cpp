// static functions can access only  all static variables
#include <iostream>
using namespace std;
class employee
{ 
    int id;
  static  int count;
  //static variable ko class ke bahar likht hai
  //static variable banane se sare objects me share hota hai


public:
    void setdata()
    {
        cout << "enter the id " << endl;

        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "the id of the employee is " << id << "the employee number is " << count << endl;
    }
    //static functions 
    static void getcount(void)
    {
        cout << "the value of count is " <<count << endl;
        // cout<<id
    }
};
//static ko class ke bahar likhte hain 
int employee ::count = 10; //isko me static banana chahta hu 
//static variables ki memory objects ke sath nahi class ke sath aati hai 

int main()
{
    employee harry, ansh, ayush;
    harry.setdata();
    harry.getdata();
    //harry.getcount();//////count is not static here thats why it is getting 1 for every object when it is called 
employee::getcount();
harry.getcount();

    // ansh.setdata();
    // ansh.getdata();
    // ansh.getcount();

    // ayush.setdata();
    // ayush.getdata();/////count abhi static nahi h islie har object ke lie vo 0 se initilaise ho rha hai 

   
    // ayush.getcount();//////count abhi static nahi h islie har object ke lie vo 0 se initilaise ho rha hai 
//cout<<employee::count;

    return 0;
}