////array of objects and passing objects as the argument for a function 
#include <iostream>
using namespace std;
class employee {
    int id ;
     int salary;
     public :
     void setid (){
        salary =120;
        cout<<"enter the the id of the employee  "<<endl;
        cin >>id;


     }void getid (){
        cout<<"the id of the employee is "<<id <<endl;


     }

};
int main (){
    employee ansh;
ansh.setid ();
ansh.getid();
employee fb[4];//array of objects declared here 
//fb[0].getid()
for (int  i = 0; i < 4; i++)
{
    fb[i].setid();
    fb[i].getid();

}

return 1;

}