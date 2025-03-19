#include <iostream> // Required for input and output 
int main() {
    std::string name;
    int first, second, third;
    double average;
    std::cout << "What is your name?";
    std::getline(std::cin, name);
    std::cout<<"Enter the first exam score:";
    std::cin>>first;
    std::cout<< "Enter the second exam score:";
    std::cin>>second;
    std::cout<<"Enter the third exam score:";
    std::cin>>third;
    std::cout<<"\n";
    average = (first + second + third) / 3.0;
    printf("The average exam score is: %.0f \n",average);
    // Print "Hello, World!" << std::endl;
    // Return 0 to indicate successful execution, optional but good backwards compatiable 

    
  //  int hours = 5;
  //  printf("I worked %d hours. \n", hours);
    
   // std::string formatted = std::("I worked {:d} hours. \n", hours);
    //std::cout<<formatted;
    

    return 0;
}