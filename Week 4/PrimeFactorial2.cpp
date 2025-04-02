#include <iostream> // Required for input and output
#include <cstdlib>
#include <ctime>

using namespace std;

bool isPrime(int num);
double factorial(int num);

int main() {
    srand(time(0)); // Seed for random number generation
    char repeat;

    do {
        int num = rand() % 50; // Generate a random integer less than 50
        cout << "Generated number: " << num << endl;

        if (isPrime(num)) {
            cout << num << " is prime." << endl;
            cout << "Factorial of " << num << " is " << factorial(num) << endl;
        } else {
            cout << num << " is not prime." << endl;
        }

        cout << "Do you wish to repeat? (y/n): ";
        cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    cout << "Goodbye!" << endl;
    return 0;
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

double factorial(int num) {
    double result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

    // Print "Hello, World!" << std::endl;
    // Return 0 to indicate successful execution, optional but good backwards compatiable 

    
  //  int hours = 5;
  //  printf("I worked %d hours. \n", hours);
    
   // std::string formatted = std::("I worked {:d} hours. \n", hours);
    //std::cout<<formatted;
    

  