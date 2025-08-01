#include <iostream>

using namespace std;

class Base
{
    private:
    int a, b;

    public:
    Base() { a = 0; b = 0; cout << "Base constructor\n"; }
    Base(int x, int y) { a = x, b = y; }
    ~Base() { cout << "Base destructor\n"; }

    void print() const { cout << a << ", " << b << "\n"; }

};

class Derived : public Base
{   
    public:
    Derived() { cout << "Derived constructor\n"; }
    ~Derived () { cout << "Derived destructor\n"; }
};



int main()
{
    // base, derived
    Derived* p = new Derived;

    // derived, base
    delete p;

return 0;
};