/*rules 
1 . they cant be static 
 2 . they are accessed object pointers 
3. virtual functions can be friend 0f another class 
4. a virtual function in base class might not be used
 5. a virtual function defined in the base class there is no necessacity of it in 
 to describe in derived class vo default base class ka hi run ho jaega   */






#include <iostream>
#include<string.h>
using namespace std;
 class cwh{
    protected:
     string title;

    float rating ;
    public :
    cwh (string s  , float r) {
      title= s;
        rating =r ;


    }
    virtual void display(){

    }
 };
 class cwh_video: public cwh{
    int videolength;
     public:
     cwh_video(string s , float r , int vl):cwh(s,r)
     // constructor in derived class 
     {
videolength =vl;

     }void display (){
        cout<<"video with title "<<title<<endl;
        cout<<"video with rating "<<rating<<"length is "<<videolength<<endl;
     }
 };
 class cwh_text: public cwh{
    int words;
     public:
     cwh_text(string s , float r , int w):cwh(s,r){
// videolength =vl;
words=w;


     }
     void display (){
        cout<<"video with title "<<title<<endl;
        cout<<"video with rating "<<rating<<"words  is "<<words<<endl;
     }
 };
 int main (){
     string title ;
float rating,vlen ;
 int words ;
  title="babbar dsa 1 nov se ";
  vlen= 28.06;
  rating=5;
  cwh_video djvid (title,rating,vlen);


  title="web d  1 nov se ";
  words= 45;
  rating=5;
 cwh_text djtxt(title,rating,words);

//  djtxt.display();



 cwh * tuts[2];
  tuts[0]= & djvid;
  tuts[1]= & djtxt;

  tuts[0]->display();
  tuts[1]->display();

//    djvid.display();

  
 }