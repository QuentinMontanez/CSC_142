#include <iostream> // Required for input and output 
#include <string>
int main() {
  int speedlimit;
  double driverspeed;
  std::cout << "Please enter the speed limit: 90";
  std::cin >> speedlimit;

  std::cout << "Please enter the driver's speed: 75"; 
  std::cin >> driverspeed; 
  
  if (driverspeed <= speedlimit) {
    std::cout << "The driver's speed is legal." << std::endl;
  } else {
    std::cout << "The driver will recieve a speeding ticket." << std::endl;
  }


  std::cout << "The speed limit is " << speedlimit << " mph." << std::endl;
  std::cout << "The driver's speed is " << driverspeed << " mph." << std::endl;
  
  
  
 
    
    // Print "Hello, World!" << std::endl;
    // Return 0 to indicate successful execution, optional but good backwards compatiable 

    
  //  int hours = 5;
  //  printf("I worked %d hours. \n", hours);
    
   // std::string formatted = std::("I worked {:d} hours. \n", hours);
    //std::cout<<formatted;
    

    return 0;
}