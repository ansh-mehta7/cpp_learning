// dynamic initialization of objects
// means user ne pehle value dedi fir malum padega  ki konsa constructor run hoga
// user ki diff value par constructor overloading ki help se
#include <iostream>
using namespace std;
class bankdeposit
{
    int principal;
    int years;
    float intrestrate;
    float returnvalue;

public:
    bankdeposit(){}// empty constructor declration so that compiler can understand agar humm main me bd1 bd2 bd3 banate h to 

    bankdeposit(int p, int y, double r)
    // r can be like 4 % for 0.04
    {
        principal = p;
        years = y;
        intrestrate = r;
        returnvalue = principal;

        for (int i = 0; i < y; i++)
        {
            returnvalue = returnvalue * (1 + r);
        }
    }
    bankdeposit(int p, int y, int r)
    {
        principal = p;
        years = y;
        intrestrate = double(r) / 100;
        returnvalue = principal;

        for (int i = 0; i < y; i++)
        {
            returnvalue = returnvalue * (1 + intrestrate);
        }
    }
    void show();
};
void bankdeposit ::show()
{
    cout << endl
         << "principal amount was " << principal;

    cout << endl
         << "return value after " << years << endl
         << "is " << returnvalue;
}

int main()
{
    bankdeposit bd1, bd2, bd3;
    int p, y;
    double r;
    int R;
    cout << "enter the value of p y and r ";
    cin >> p >> y >> r;
//bankdeposit bd1;

//    bd1 = bankdeposit(p, y, r);
//    bd1.show();
    bankdeposit bd1 (p,y,r);
    bd1 .show();


    return 1;
}
