//nesting of member function in c++
#include<iostream>
#include<string.h>
using namespace std;
class binary {
    string s;//by daefault s ek private member hai lekin fir bhi har ek function class ka usko access kr sakta hai 
    void check ();
     public :
     void read ();
     
     void ones();
     void display();



};
void binary :: read(){
    cout<<"enter the binary number "<<endl;
    cin >>s;

}void binary :: check(){
    for (int i = 0; i <s.length(); i++)
    {
        /* code */
        if(s.at(i)!='0'&& s.at(i)!='1'){
            cout<<"number enterd is incorrect"<<endl;
            break;

        }
    }
    
}
void binary ::ones (){
      check ();// idhar humne member functions ki nesting kr di hai iska ek benefit ye bhi hai ki agar chack private hota toh bhi hum isko 
      //with the help pf class functions access kr pate jo ki objects ke dwara possible nhi hota 
    for (int i = 0; i <s.length(); i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
       else {
        s.at(i)='0';
       }
    }
}
void binary ::display (){
    for (int i = 0; i <s.length(); i++){
        cout<<s.at(i);
        

}
cout<<endl;
}

int main()
{
    binary b;
    b.read();
    //b.check();
    b.display();
     b.ones();
    b.display();
    return 1;
}                             