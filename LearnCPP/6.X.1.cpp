#include <iostream>
#include <string_view>

// Write the function getQuantityPhrase() here
int getQuantityPhrase(int quantity) 
{
    if (quantity<0) 
    {  
        return "negative";
    }
    else if (quantity>3)
    {
        return std::string("many");
    }
    

    switch (x) {

    }

}

// Write the function getApplesPluralized() here

int main()
{
    constexpr int maryApples{3};
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}