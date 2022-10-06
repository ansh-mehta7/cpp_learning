// contructor with default argumwnts
#include <iostream>
using namespace std;
class simple
{
    int data1, data2, data3;

public:
    simple(int a, int b = 3, int c = 9)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printdata()

    {
        cout << "the value of the data is " << data1 << data2 << data3 << endl;
    }
};
// void simple :: printdata{

//     cout <<"the value of the data is "<<data1<<data2<<data3<<endl;

// }
int main()
{
    simple s(2, 10);
    s.printdata();
    return 1;
}