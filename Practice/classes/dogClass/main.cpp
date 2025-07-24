#include <iostream>

using namespace std;

class Dog{
    public:
        string breed;
        int age;
    
    void bark() {
        cout << "Woof!\n";
    }
};

int main() {

    Dog dog1;

    dog1.breed = "Bishan";
    dog1.age = 14;

    dog1.bark();

    return 0;
}