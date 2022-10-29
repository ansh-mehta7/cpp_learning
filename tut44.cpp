
// duplication nhi hone deta hai ambiguity relationship  se 
// virtual base classes
// student class do class banegi or
/* test class
and
sports class
and final class is result jo test or sports se mil kar ban ri hai
student  ke variable test or sports dono me hi aenge islie student ko hum
 virtual base class bna denge
 virtual base class ka data member ek bar se jyada inherit  hi hoga fir

*/
#include <iostream >
using namespace std;
class student
{
protected:
    int roll; // keval ek hi bar flow hoga set pure program me 

public:
    void set(int d)
    {
        roll = d;
    }
    void print()
    {
        cout << "your roll no is " << roll << endl;
    }
};

class test :  virtual  public student
{
protected:
    float maths, physics;

public:
    void setmarks(float x, float y)
    {
        maths = x;
        physics = y;
    }
    void printmarks()
    {
        cout << "your result is for " << maths << "and" << physics << endl;
    }
};

class sports : public virtual  student
{
protected:
    float score;

public:
    void set_score(float a)
    {
        score = a;
    }
    void print_score(void)
    {
        cout << "your score is " << score;
    }
};
class result : public test, public sports
{
private:
    float total;

public:
    void display_result()
    {
        total = maths + physics + score;
        print();
        printmarks();
        print_score();
        cout << "total is " << total << endl;
    }
};
int main()
{
    result ansh;
    ansh.set(7485757);
    ansh.setmarks(55, 93);
    ansh.set_score(5);
    ansh.display_result();
    return 0;
}
