#include <iostream>
#include <string>

int main() {
    
    std::string name;
    int age;

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Enter your age: ";
    std::cin >> age;

    
    int age_in_days = age * 365;

    
    std::cout << "\nHello, " << name 
              << "! You are approximately " 
              << age_in_days
 << " days old." << std::endl;

    return 0; 
}
