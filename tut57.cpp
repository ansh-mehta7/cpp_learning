#include <iostream>
#include<string.h>
using namespace std;
 class cwh{
    protected:
    char title [30];
    float rating ;
    public :
    cwh (char *s , float r) {
        strcpy(title,s);
        rating =r ;


    }
    virtual void display(){

    }
 };
 class cwh_video: public cwh{
    int videolength;
     public:
     cwh_video(char *s , float r , int vl):cwh(s,r){
videolength =vl;

     }void display (){
        cout<<"video with title "<<title<<endl;
        cout<<"video with rating "<<rating<<"length is "<<videolength<<endl;
     }
 };
 class cwh_text: public cwh{
    int words;
     public:
     cwh_text(char *s , float r , int w):cwh(s,r){
// videolength =vl;
words=w;


     }
     void display (){
        cout<<"video with title "<<title<<endl;
        cout<<"video with rating "<<rating<<"words  is "<<words<<endl;
     }
 };
 int main (){
     char * title=  new char [30];
float rating,vlen ;
 int words ;
  title="web d start karna h he bahgwan ";
  vlen= 28.06;
  rating=5;


  cwh_video djvid (title,rating,vlen);
  djvid.display();
  
 }