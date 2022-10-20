#include<iostream>
using namespace std;

// int sum (int a ,int b,int c ){
//     return a+b+c;
// }
// int sum (int a ,int b){
//     return a+b;
// }
int volume (float r ,int h)
{
    return(3.14*r*r*h);

}
int volume (int a)
{
    return a*a*a;
}
int volume (int l ,int b, int h){
    return l*b*h;

}
int  main ()

{
// cout<<"the sum of 2 and 4 is "<<sum(2,4)<<endl;
// cout<<"the sum 2 4 and 6 is "<<sum(2,4,6)<<endl;
cout <<"the volume of cylinder is "<<volume(5,2)<<endl;
cout <<"the volume of cuboid  is "<<volume(2,3,4)<<endl;
cout <<"the volume of cube  is "<<volume(5)<<endl;

return 1;
}


