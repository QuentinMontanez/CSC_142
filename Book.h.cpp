#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string codeNum;
    string author;
    string title;
    int edition;
    string pubCode;
    double price;

public:
    // Constructor
    Book(string cn, string au, string ti, int ed, string pc, double pr)
        : codeNum(cn), author(au), title(ti), edition(ed), pubCode(pc), price(pr) {}

    // Accessor methods (getters)
    string getTitle() const {
        return title;
    }

    string getAuthor() const {
        return author;
    }

    double getPrice() const {
        return price;
    }

    int getEdition() const {
        return edition;
    }

    string getISBN() const {
        return codeNum;
    }

    string getPubCode() const {
        return pubCode;
    }

    // Mutator method (setter)
    void changePrice(double newPrice) {
        price = newPrice;
    }

    // Overloaded output stream operator
    friend ostream& operator<<(ostream& os, const Book& book) {
        os << "ISBN: " << book.codeNum << "\n"
           << "Author: " << book.author << "\n"
           << "Title: " << book.title << "\n"
           << "Edition: " << book.edition << "\n"
           << "Publisher Code: " << book.pubCode << "\n"
           << "Price: $" << book.price;
        return os;
    }

    // Overloaded equality operator
    friend bool operator==(const Book& mainBook, const Book& otherBook) {
        return mainBook.codeNum == otherBook.codeNum;
    }
};

int main() {
    // Example of creating two Book objects and using the overloaded operators
    Book book1("978-0743273565", "F. Scott Fitzgerald", "The Great Gatsby", 1, "SCRIB", 10.99);
    Book book2("978-0061120084", "Harper Lee", "To Kill a Mockingbird", 1, "HARPB", 14.99);

    // Using the overloaded << operator
    cout << "Book 1 Details:\n" << book1 << endl;

    // Comparing the two books using the overloaded == operator
    if (book1 == book2) {
        cout << "The books have the same ISBN." << endl;
    } else {
        cout << "The books have different ISBNs." << endl;
    }

    return 0;
}




  
    // Print "Hello, World!" << std::endl;
    // Return 0 to indicate successful execution, optional but good backwards compatiable 

    
  //  int hours = 5;
  //  printf("I worked %d hours. \n", hours);
    
   // std::string formatted = std::("I worked {:d} hours. \n", hours);
    //std::cout<<formatted;

