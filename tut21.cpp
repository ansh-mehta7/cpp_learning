//cpp is c with classes 
//to increase the efficiency of the program 
//effective way of addressing the function 
//in c data moves from function to function 
#include<iostream>
using namespace std;
class employee{
    private :
    int a,b,c;

    public:
    int d,e;
    void setdata (int ,int ,int );//declaration
    // here the functions of the class can directly access the private members of the class 
    void getdata(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;
    }
};//declaration of function outside the class 
    void employee :: setdata(int a1,int b1 ,int c1 ){
a=a1;
b=b1;
c=c1;
}

int main()
{
employee ansh;
//ansh.a=323;
ansh.setdata(1,2,3);
//ansh.a=5; object private members ko directly access nhi kar skte hai only the members of the class or the functions indside 
// the class can access the private members 

ansh.d=4;
ansh.e=5;
ansh.getdata();


return 0;
}
