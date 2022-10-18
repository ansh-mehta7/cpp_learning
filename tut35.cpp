//destructor never takes an argument nor does it takes return any value 
#include <iostream>
using namespace std;
class  num  {
    static int count ;

public :

num (){
count ++;
cout<<"this is the time when the const is called for obj no "<<count<<endl;

}
~num (){

    cout<<"this is the time when the distructor is called  for obj no "<<count <<endl;
count --;

}

};
int num :: count ;
int main (){
cout<<"we are in main function "<<endl;
cout<<"creating the first object num1 "<<endl;

num n1;{
    cout<<"entering the block "<<endl;

    num n2; num n3;
    cout<<"exiting th block "<<endl;


}
cout <<"back to main "<<endl;
return 1;

}