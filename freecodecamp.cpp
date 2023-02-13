#include <iostream>
#include <string.h>
using namespace std;
class abstractemployee{
public :
   virtual void askforpromotion()=0;
 
};
class employee : abstractemployee
{
private:
public:
    string name;
    string company;
    int age;
   // these are the hidden properties 
      employee (string nameofcomp, string fullname, int ageofemp)
    {
        company = nameofcomp;
        age = ageofemp;
        name = fullname;
    }// encapsulated data 
     void showdetails()
    {

        cout << name << " " << age << " " << company;
    }
   void askforpromotion(){
     if(age >30){
         cout<<name<<"  congrats you got promoted "<<endl;
     }else {
         cout<<name<<" sorry  no prmotion "<<endl;
     }
   }
    employee() {}
    // once we make the parameterized constructor we loose the default constructor by the compiler
    // encapsulation is the idea of bundling or tying the data and the methods that operate on the data to prevent the purpose of directly attacking the data by outside user 
    // we provide specific public functions to operate on the data 
    // so for encapsuation lets make our data private 
    //abstraction means hiding the details 
};
class developer :public employee  {
    public :

string favlanguuage;
 developer(string nameofcomp, string fullname, int ageofemp, string language) : employee(fullname ,nameofcomp,ageofemp  ){
       favlanguuage=language;
 }

void showdetailsinder()
    {

        cout << name << " " << age << " " << company<<"   "<<favlanguuage;
    }
};

int main()
{
    employee rajesh("google ","mike ross ",17);
     employee salina("amazon", "salina zane ", 35);
    // rajesh.name = "rajesh shukla ";
    // rajesh.age = 56;
    // rajesh.company = "google ";
    
    cout << endl;
    //   salina.company="amazon";
    //   salina.age=30;
    //   salina.name="salina zane ";
    salina.showdetails();cout<<endl;
    rajesh.showdetails();cout<<endl;
    rajesh.askforpromotion();cout<<endl;
    salina.askforpromotion();cout<<endl;
 developer d("ansh mehta"," adobe ",20 ,"c++") ;
d.showdetailsinder();
d.askforpromotion();
    return 0;
}