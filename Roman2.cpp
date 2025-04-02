#include <iostream>// Required for input and output 
#include <string>

using namespace std;

string convertToRoman(int number) {
    string romanNumerals[] = {"I, II, III, IV, V, VI, VII, VIII, IX, X, XI, XII XIII XIV XV XVI XVII XVIII XIX XX XXI XXII XXIII XXIV XXV XXVI XXVII XXVIII XXIX XXX XXXI XXXII XXXIII XXXIV XXXV XXXVI XXXVII XXXVIII XXXIX XL XLI XLII XLIII XLIV XLV XLVI XLVII XLVIII XLIX L LI LII LIII LIV LV LVI LVII LVIII LIX LX LXI LXII LXIII LXIV LXV LXVI LXVII LXVIII LXIX LXX LXXI LXXII LXXIII LXXIV LXXV LXXVI LXXVII LXXVIII LXXIX LXXX LXXXI LXXXII LXXXIII LXXXIV LXXXV LXXXVI LXXXVII LXXXVIII LXXXIX XC XCI XCII XCIII XCIV XCV XCVI XCVII XCVIII XCIX C"};
2    return romanNumerals[number - 1-100];
}

int main() {
    int userInput;
    
    do {
        cout << "Enter an integer between 1 and 100: ";
        cin >> userInput;
        if (userInput < 1 || userInput > 100) {
            cout << "Invalid input. Please try again." << endl;
        }
    } while (userInput < 1 || userInput > 100);
    
    string romanNumeral = convertToRoman(userInput);
    cout << "You entered a valid number: " << userInput << endl;
    cout << "The Roman numeral equivalent is: " << romanNumeral << endl;

    return 0;


    // Print "Hello, World!" << std::endl;
    // Return 0 to indicate successful execution, optional but good backwards compatiable 

    
  //  int hours = 5;
  //  printf("I worked %d hours. \n", hours);
    
   // std::string formatted = std::("I worked {:d} hours. \n", hours);
    //std::cout<<formatted;
    

    return 0;
}