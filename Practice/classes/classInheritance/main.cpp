#include <iostream>

// Foo the parent class, or base class
class Foo
{
    private:
        int x;

    public: // Interface
        void setX(int _x) {x=_x;} // mutator
        int getX() const {return x;} // accessor
};

// the is-a relationship
// Bar is a Foo
// child class, or derived class
class Bar : public Foo
{
    private:
    int y;

    public: // Interface
    void setY(int _y) {y = _y;} // mutator
    int getY() const {return y;} // accessor

};

int main()
{
    Bar b;

    b.setX(8);
    b.setY(6);

    std::cout << b.getX() << b.getY() << "\n";

    Foo f;
    f.setX(88);

    std::cout << f.getX() << "\n";

return 0;
}