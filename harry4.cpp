//the concept of local and global and local variables 
#include <iostream>
using namespace std;
void demo (){
    int glo =4;
    cout <<"the global glo is "<<glo ;

}
int  main (){
    int a=10;
    int glo =88;
    cout <<"the concept of local and global varibles ";

     cout<<"the local glo is "<<glo ;
demo ();
return 1;

}