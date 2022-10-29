
//array of pointer of objects in c++
#include <iostream>
using namespace std;
class shop
{
    int id;
    float price;

public:
    void getdata()
    {
        cin >> id >> price;
        // id =a ;

        //  price =b ;
    }
    void show()
    {
        cout << id << endl;
        cout << price << endl;
    }
};
int main()
{
    int id;
    float price;

    shop *ptr = new shop[3];
    shop *locator = ptr;

    //  ptr->getdata(8,0);

    for (int i = 0; i < 3; i++)
    {
        (*ptr).getdata();
        ptr++;
    }

    for (int i = 0; i < 3; i++)
    {
        locator->show();
        locator++;
    }

    return 0;
}