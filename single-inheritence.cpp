// sigle inheritence 
#include <iostream>
using namespace std;
class base
{

    int data1; // private ko inherit nhi kar sakte hai
public:
    int data2;
    void setdata(void)
    {
        data1 =10;
    data2=20;

    }
    int getdata1(void ){
        return data1;

    }
    int getdata2(void ){
        return data2;

    }
};

class derived :   base// class is being derived publically 
{
    int data3;

public:
//
    void process();
    void display();
};
void derived :: process(){
    setdata();
   // data 1 base class ka private meber h to directly acces ni kr skte ek member function 
    // ki help se access krna padega  getdata1 ka access kr sakte hain 
    data3 =data2*getdata1();

}
void derived :: display (){
    cout<<"value of data 1 is "<<getdata1()<<endl;
    cout<<"value of data 2 is "<<data2<<endl;
    cout<<"value of data 3 is "<<data3<<endl;


}

int main()
{
derived der;
//der.setdata();
der.process();
der.display();


    return 1;
}