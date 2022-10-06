//factorial of a  number 
//recursions in c++



#include <iostream>
using namespace std;
// int factorial (int n ){
//     if (n<=1)
//     {
//         return 1;

//     }
//     else {
//         return n*factorial(n-1);

// }
    
// }
// int main (){int a;

// //n!= n*(n-1)!
// cout<<"enter the number "<<endl;
// cin >>a;
// cout<<"the factorial of a is "<<factorial(a)<<endl;
// return 1;

// }
int fibonacci (int n){
    if (n<=1)
    {
        return 1;

    }
    else {
        return fibonacci(n-1)+ fibonacci(n-2);

    }
}
int main (){
    int a;

//n!= n*(n-1)!
cout<<"enter the number at position of fibonacci  "<<endl;
cin >>a;
cout<<"the term in fibonacci series till (a) position  is "<<fibonacci(a)<<endl;
return 1;
}