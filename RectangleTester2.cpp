#include <iostream> // Required for input and output 
int main() {

  class Rectangle {
  private:
      double length;
      double width;
  
  public:
      double getWidth() {
          return width;
      }
  
      double getLength() {
          return length;
      }
  
      void setWidth(double w) {
          width = w;
      }
  
      void setLength(double l) {
          length = l;
      }
  
      double getArea() {
          return length * width;
      }
  };
  
  
      Rectangle kitchen, bedroom, livingRoom;
      double length, width;
  
      // Get dimensions for the kitchen
      std::cout << "Enter the length and width of the kitchen: ";
      std::cin >> length >> width;
      kitchen.setLength(length);
      kitchen.setWidth(width);
  
      // Get dimensions for the bedroom
      std::cout << "Enter the length and width of the bedroom: ";
      std::cin >> length >> width;
      bedroom.setLength(length);
      bedroom.setWidth(width);
  
      // Get dimensions for the living room
      std::cout << "Enter the length and width of the living room: ";
      std::cin >> length >> width;
      livingRoom.setLength(length);
      livingRoom.setWidth(width);
  
      // Display the size and area of each room
      std::cout << "Kitchen: " << kitchen.getLength() << " x " << kitchen.getWidth() << " = " << kitchen.getArea() << std::endl;
      std::cout << "Bedroom: " << bedroom.getLength() << " x " << bedroom.getWidth() << " = " << bedroom.getArea() << std::endl;
      std::cout << "Living Room: " << livingRoom.getLength() << " x " << livingRoom.getWidth() << " = " << livingRoom.getArea() << std::endl;
  
      // Calculate and display the total area of the apartment
      double totalArea = kitchen.getArea() + bedroom.getArea() + livingRoom.getArea();
      std::cout << "Total area of the apartment: " << totalArea << std::endl;
  
      return 0;
  }
  
    
    // Print "Hello, World!" << std::endl;
    // Return 0 to indicate successful execution, optional but good backwards compatiable 

    
  //  int hours = 5;
  //  printf("I worked %d hours. \n", hours);
    
   // std::string formatted = std::("I worked {:d} hours. \n", hours);
    //std::cout<<formatted;
    

    
