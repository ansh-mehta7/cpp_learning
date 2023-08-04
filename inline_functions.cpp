#include <iostream>
using namespace std;
inline int product(int a, int b)
{
    //
    return a * b ;
}
float  moneyrecieved(int currentmoney,float factor=1.04){

return currentmoney*factor;

}
int main()
{
    // int a, b;

    // cout << "enter the value of a and b ";
    // cin >> a >> b;
    int money=100000;

    cout<<"if u have "<<money<<"rs in your bank account "<<moneyrecieved(money,1.06)<<"after 1 year";
    cout<<"if u have "<<money<<"rs in your bank account "<<moneyrecieved(money)<<"after 1 year";

    return 1;
}