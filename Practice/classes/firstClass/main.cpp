#include <iostream>

class Human 
{
    public:
        std::string name;
        std::string job;
        int age;

    void eat()
    {
        std::cout << "This person is eating.\n";
    }
    void drink()
    {
        std::cout << "This person is drinking.\n";
    }
    void sleep()
    {
        std::cout << "This person is sleeping.\n";
    }
};

int main () 
{

    Human human1;
    Human human2;

    human1.name = "Rick";
    human1.job = "State Farm Agent";
    human1.age = 62;

    std::cout << human1.name << "\n";
    std::cout << human1.job << "\n";
    std::cout << human1.age << "\n";

    human2.name = "Marissa";
    human2.job = "Insurance Agent";
    human2.age = 55;

    std::cout << human2.name << "\n";
    std::cout << human2.job << "\n";
    std::cout << human2.age << "\n";

    human2.eat();
    human2.drink();
    human2.sleep();

    return 0;
}