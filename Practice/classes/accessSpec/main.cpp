#include <iostream>

using namespace std;

class Foo
{
    private: // base class only
    int x;

    protected: // protected can create brittle class, can break
    int y; // bass & derived classes only

    public: // accessible from anywhere
    int z;

    public: // interface
    Foo() {x = 0;}
    void setX(int _x) {x = _x;}
    int getX() const {return x;}
};

// derived class
// class access specifier
// public => private is private, protected is protected, public is public
// protected => private is private, protected is protected, public becomes protected
// private => everything in derived class is treated as private
class Bar : private Foo
{
    public:
    Bar()
    {
        y = 8; // y is protected
        z = 4; // z is public
        setX(8);
    }

};

int main()
{
    Foo f;
    f.z = 88;
    /* 
    Bar b;
    b.x = 99; // x is private in derived
    b.y = 88; // y is private in derived 
    b.z = 77; // z is private in derived
    */
return 0;
};