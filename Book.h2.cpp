#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string codeNum;
    std::string author;
    std::string title;
    int edition;
    std::string pubCode;
    double price;

public:
    // Default constructor
    Book() : codeNum(""), author(""), title(""), edition(0), pubCode(""), price(0.0) {}

    // Constructor
    Book(std::string cn, std::string au, std::string ti, int ed, std::string pc, double pr) {
        codeNum = cn;
        author = au;
        title = ti;
        edition = ed;
        pubCode = pc;
        price = pr;
    }

    // Accessor methods (getters)
    std::string getTitle() const {
        return title;
    }

    std::string getAuthor() const {
        return author;
    }

    double getPrice() const {
        return price;
    }

    int getEdition() const {
        return edition;
    }

    std::string getISBN() const {
        return codeNum;
    }

    std::string getPubCode() const {
        return pubCode;
    }

    // Mutator method (setter)
    void changePrice(double newPrice) {
        price = newPrice;
    }
};

#endif // BOOK_H


    



  
    // Print "Hello, World!" << std::endl;
    // Return 0 to indicate successful execution, optional but good backwards compatiable 

    
  //  int hours = 5;
  //  printf("I worked %d hours. \n", hours);
    
   // std::string formatted = std::("I worked {:d} hours. \n", hours);
    //std::cout<<formatted;

