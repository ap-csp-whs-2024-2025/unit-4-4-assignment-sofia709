#include <iostream>  // std::cin, std::cout, std::getline
#include <string>    // std::string

int main()
{
    
    // Problem 1: Prompt the user for a number from 1 to 100
    int number;
    std::cout << "Please enter a number from 1 to 100: ";
    std::cin >> number;
    
    while (number < 1 || number > 100)
    {
         std::cout << "Invalid number entered. Please enter a number from 1 to 100: ";
        std::cin >> number;
    }
    std::cout << "Thank you for your input!" << std::endl;
    
    // Problem 2
    
    
    
    // Problem 3
    
    
    
    return 0;
}
