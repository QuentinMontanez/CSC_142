#include <iostream> // Required for input and output
#include <string>
#include <iomanip> // For setting decimal precision

const double SALES_TAX_RATE = 0.06;

int main() {
    bool keepGoing = true;

    while (keepGoing) {
        std::string purchaseDescription;
        std::cout << "Enter the purchase description: ";
        std::getline(std::cin, purchaseDescription);

        std::string costString;
        double itemPrice = -1.0;

        do {
            std::cout << "Enter the cost of the purchase (in dollars and cents): $";
            std::getline(std::cin, costString);

            try {
                itemPrice = std::stod(costString);
                if (itemPrice < 0.0) {
                    std::cout << "Please enter a non-negative number." << std::endl;
                }
            } catch (const std::invalid_argument&) {
                std::cout << "Invalid input. Please enter a valid number." << std::endl;
            }
        } while (itemPrice < 0.0);

        double taxAmount = itemPrice * SALES_TAX_RATE;
        double totalPrice = itemPrice + taxAmount;

        std::cout << std::fixed << std::setprecision(2); // For formatting dollar amounts
        std::cout << "\nPurchase Description: " << purchaseDescription << std::endl;
        std::cout << "Item Price: $" << itemPrice << std::endl;
        std::cout << "Sales Tax: $" << taxAmount << std::endl;
        std::cout << "Total Amount: $" << totalPrice << std::endl;

        std::string userChoice;
        std::cout << "\nDo you want to enter another purchase? (Yes/No): ";
        std::getline(std::cin, userChoice);

        if (userChoice == "No" || userChoice == "no" || userChoice == "N" || userChoice == "n") {
            keepGoing = false;
        }
    }

    std::cout << "Program ended." << std::endl;
    return 0;
}

    // Print "Hello, World!" << std::endl;
    // Return 0 to indicate successful execution, optional but good backwards compatiable 

    
  //  int hours = 5;
  //  printf("I worked %d hours. \n", hours);
    
   // std::string formatted = std::("I worked {:d} hours. \n", hours);
    //std::cout<<formatted;
    

    