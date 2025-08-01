#include <iostream>

using namespace std;

class Base
{
    private:
    int a, b;

    public:
    Base() { a = 0; b = 0; }
    Base(int x, int y) { a = x, b = y; }
    ~Base() {}

    void print() const { cout << a << ", " << b << "\n"; }

};

class Derived : public Base
{   
    private:
    Base::Base;

    public:

};



int main()
{
    Derived d(8, 3);

    d.print();

return 0;
};