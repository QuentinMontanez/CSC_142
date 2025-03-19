#include <iostream> // Required for input and output
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

// Method to check if a number is even
bool isEven(int n) {
    return n % 2 == 0;
}

int main() {
    // Seed the random number generator
    srand(time(0));

    int totalNumbers = 1000;
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < totalNumbers; ++i) {
        // Generate a random number between 0 and 100 (inclusive)
        int number = rand() % 101;

        // Check if the number is even or odd
        if (isEven(number)) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Display results in a creative format
    cout << "Out of  " << totalNumbers << " random numbers generated:" << endl;
    cout << " " << evenCount << " were even." << endl;
    cout << " " << oddCount << " were odd." << endl;

    return 0;
}


  
    // Print "Hello, World!" << std::endl;
    // Return 0 to indicate successful execution, optional but good backwards compatiable 

    
  //  int hours = 5;
  //  printf("I worked %d hours. \n", hours);
    
   // std::string formatted = std::("I worked {:d} hours. \n", hours);
    //std::cout<<formatted;

