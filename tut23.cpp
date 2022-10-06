//objects ki memory location 
#include<iostream>
using namespace std;
class shop{
    int itemid[100];
    int itemprice[100] ;
    int counter;
    public:
    
void initcounter(){
    counter =0;
    //counter 0 se initialize ho jaega har ek object ke lie
}
void getprice (void);
void showprice(void);

};
void shop ::getprice (){
    cout<<"enter the id of your item "<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"enter the price "<<endl;
    cin>>itemprice[counter];
    counter ++;//har object ke lie counter =0 se initialze hoga islie hum usko static variable bna dete hai 


  
}
void shop::showprice(){
    for (int i = 0; i < counter; i++)
    {
         cout<<"the price of your item id "<<itemid[i]<<"is "<<itemprice[i];
    }
}

int main(){
    shop dukaan;
    dukaan.initcounter();
    dukaan.getprice();
    // dukaan.getprice();
    dukaan.showprice();

    return 0;
}