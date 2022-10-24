//not in scope of class 
 //cant be called from the objects of the class
 //generally takes objects as arguments 
 #include <iostream>
using namespace std;
class complex {
    int a ,b;
    friend int sumrealcomplex (complex o1,complex o2);
public:
void setnumber (int a1,int b1){
    a=a1;
    b=b1;

}
void printnumber (){
    cout <<"your number is "<<a<<"+i"<<b;
    cout <<endl;

}



};
//compiler kisi bhi class ke private member ko kisi dusri class ke member ko access nhi karne deta hain 
//ek chor function bhi to ho sakta hai ye 
//sumcompllex class ka member nhi bana hai matlab abhi objects sumcomplex ko access nhi kar sakte hai 
int sumrealcomplex (complex o1 ,complex o2){

return ((o1.a+o2.a));

}

int main (){
    complex c1,c2,c3;
    c1.setnumber(1,4);
    c2.setnumber(5,8);
    c1.printnumber();
    c2.printnumber();
    cout<< sumrealcomplex (c1,c2);
    //c3.printnumber();

}