#include <iostream>

class Car
{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

    void accelerate(){
        std::cout << "You stepped on the gas!\n";
    } 
    void deccelerate() {
        std::cout << "You stepped on the brake!\n";
    }
    void turn() {
    std::cout << "You turned your steering wheel!\n";
    }
};

int main()
{
    Car car1;

    car1.make = "Ford";
    car1.model = "F150";
    car1.year = 2025;
    car1.color = "Black";

    std::cout << car1.make << std::endl;
    std::cout << car1.model << std::endl;
    std::cout << car1.year << std::endl;
    std::cout << car1.color << std::endl;

    return 0;
}