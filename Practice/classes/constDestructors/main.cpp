#include <iostream>

using namespace std;

class Base
{
    private:
    int a, b;

    public:
    Base() { a = 0; b = 0; cout << "Base constructor\n"; }
    Base(int x, int y) { a = x, b = y; }
    ~Base() {}

    void print() const { cout << a << ", " << b << "\n"; }

};

class Derived : public Base
{   
    private:
    int s;

    public:
    Derived(int q, int r, int x) : Base (q, r) { s = x; };
    int getS() const { return s; }
};



int main()
{
    Derived d(8, 3, 5);

    d.print();

    cout << d.getS() << "\n";

return 0;
};