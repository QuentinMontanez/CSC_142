#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

int main() {
    std::string inputFileName, outputFileName;

    // Prompt user for input file name
    std::cout << "Enter the name of the input file: ";
    std::getline(std::cin, inputFileName);
    
    // Open input file for reading
    std::ifstream inputFile(inputFileName);
    if (!inputFile) {
        std::cerr << "Error opening input file: " << inputFileName << std::endl;
        return 1;
    }

    // Prompt user for output file name
    std::cout << "Enter the name of the output file: ";
    std::getline(std::cin, outputFileName);
    
    // Open output file for writing
    std::ofstream outputFile(outputFileName);
    if (!outputFile) {
        std::cerr << "Error opening output file: " << outputFileName << std::endl;
        return 1;
    }

    // Read lines from input file, add line numbers, and write to output file
    std::string line;
    int lineNumber = 1;
    while (std::getline(inputFile, line)) {
        outputFile << std::setw(5) << lineNumber << ". " << line << std::endl;
        lineNumber++;
    }

    // Close both files
    inputFile.close();
    outputFile.close();

    std::cout << "Text has been successfully processed and saved to " << outputFileName << std::endl;
    return 0;
}

    // Print "Hello, World!" << std::endl;
    // Return 0 to indicate successful execution, optional but good backwards compatiable 

    
  //  int hours = 5;
  //  printf("I worked %d hours. \n", hours);
    
   // std::string formatted = std::("I worked {:d} hours. \n", hours);
    //std::cout<<formatted;
    

