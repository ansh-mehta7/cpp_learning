#include <iostream >
 using namespace std ;
  int main (){
     float x =55;
     cout<<x;
      float &y =x;
       cout<<endl;
       cout<<y<<endl;
// refrence variable ko bnate ke sath hi initilise krna jaruri hai  vo bhi already existing variable ke sath hi
y++;
cout<<y <<" "<<x;
  }