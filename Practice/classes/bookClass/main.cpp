#include <iostream>

class Book {

    public:
        std::string Title;
        std::string Author;
        int year;
};

int main() {

    Book book1;

    book1.Author = " Brandon Mull";
    book1.Title = "Fablehaven";
    book1.year = 2006;

    Book book2;

    book2.Author = "George Orwell";
    book2.Title = "1984";
    book2.year = 1949;

    std::cout << book1.Author << " " << book1.Title << " " << book1.year << ".\n";
    std::cout << book2.Author << " " << book2.Title << " " << book2.year << ".\n";

    return 0;
}