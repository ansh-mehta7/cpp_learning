// multilevel inheritence
// deriving classes from derived classes is called multilevel inheritence 
#include <iostream >
using namespace std;
class student
{
protected:
    int roll;

public:
    void set_roll(int r)
    {
        roll = r;
    }
    void get_roll(void)
    {
        cout << roll << endl;
    }
};

class exam : public student
{
    // is class ko roll protected hoke hi milega 
protected:
    float maths;
    float physics;

public:
    void setmarks(float x, float y)
    {
        maths = x;
        physics = y;
    }
    void getmarks(void)
    {
        cout << "the marks of physics is " << physics << "and maths is " << maths << endl;
    }
};
class result : public exam
{
    // isko roll maths physics protected  milege matlab inherit ho jaega 
    float percentage;

public:
    void display()
    {
        get_roll();
        getmarks();
        percentage = (maths + physics) / 2;
        cout << "percentage is " << percentage << endl;
    }
};

int main()
//  if we are inheriting b from a and c from b
//  a is the base class for b and b is the base class for c
// a--> b--> c is called inhertitence path

{
    result harry;
    harry.set_roll(23);
    harry.get_roll();// protecyed ko bhi objects ke through aap access kar skate ho 
    harry.setmarks(99, 37);
    harry.display();
    return 1;
}