#include <iostream >
using namespace std;
template <class T1 = int, class T2 = float>

class harry
{
public:
    T1 a;
    T2 b;
    harry(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "jefe   " << a << endl;
        cout << "jefe   " << b << endl;
    }
};
int main()
{

    harry<> h(4, 6.5); // default parameters of template class
    h.display();
    return 0;
}