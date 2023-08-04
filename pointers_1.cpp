#include <iostream>
using namespace std;
 int  main  (){
    int  *p = new int (4 ); // dynamically memory allocate kar rha hai 
    // new opertor 
     int * arr =new int [3];

     (*arr)=10;
    * (arr+1)=11;
     arr[2]=12;
     
// delete[] arr;
// delete kr dia h free kr dia hai 
     cout <<"the vakue at arr [1] is  "<<arr[1];
     // delete operator 
      return  0;
       
 }