#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Book Class
class Book {
private:
    string codeNum;
    string author;
    string title;
    int edition;
    string pubCode;
    double price;

public:
    // Default constructor
    Book() : codeNum(""), author(""), title(""), edition(0), pubCode(""), price(0.0) {}

    // Constructor with parameters
    Book(string cn, string au, string ti, int ed, string pc, double pr)
        : codeNum(cn), author(au), title(ti), edition(ed), pubCode(pc), price(pr) {}

    // Mutator method to change the price
    void changePrice(double newPrice) { price = newPrice; }

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

    // Getter for ISBN (used in Inventory class)
    string getISBN() const {
        return codeNum;
    }
};

// Inventory Class
class Inventory {
private:
    Book* books;
    int nextEntry;
    int length;

public:
    // Constructor
    Inventory(int size) : nextEntry(0), length(size) {
        books = new Book[size];
    }

    // Destructor
    ~Inventory() {
        delete[] books;
    }

    // Add a book to the inventory
    bool addBook(const Book& theBook) {
        // Check if there is no room in the inventory
        if (nextEntry >= length) {
            return false;
        }

        // Check if the book is already in the inventory
        for (int i = 0; i < nextEntry; ++i) {
            if (books[i] == theBook) { // Using overloaded operator==
                return false;
            }
        }

        // Add the book and increment nextEntry
        books[nextEntry++] = theBook;
        return true;
    }

    // Change the price of a book by ISBN
    void changePrice(const string& isbn, double newPrice) {
        for (int i = 0; i < nextEntry; ++i) {
            if (books[i].getISBN() == isbn) {
                books[i].changePrice(newPrice);
                break;
            }
        }
    }

    // Print the inventory
    void printInventory() const {
        cout << "Inventory:\n";
        for (int i = 0; i < nextEntry; ++i) {
            cout << books[i] << "\n"; // Directly using overloaded operator<<
        }
    }
};

// Main Function
int main() {
    Inventory inventory(5); // Create an inventory with a capacity of 5 books

    // Create books
    Book book1("978-0743273565", "F. Scott Fitzgerald", "The Great Gatsby", 1, "SCRIB", 10.99);
    Book book2("978-0061120084", "Harper Lee", "To Kill a Mockingbird", 1, "HARPB", 14.99);
    Book book3("978-0451524935", "George Orwell", "1984", 1, "PLUME", 9.99);

    // Add books to the inventory
    if (inventory.addBook(book1)) {
        cout << "Book 1 added successfully.\n";
    } else {
        cout << "Failed to add Book 1.\n";
    }

    if (inventory.addBook(book2)) {
        cout << "Book 2 added successfully.\n";
    } else {
        cout << "Failed to add Book 2.\n";
    }

    if (inventory.addBook(book3)) {
        cout << "Book 3 added successfully.\n";
    } else {
        cout << "Failed to add Book 3.\n";
    }

    // Attempt to add a duplicate book
    if (inventory.addBook(book1)) {
        cout << "Duplicate Book 1 added successfully.\n";
    } else {
        cout << "Failed to add duplicate Book 1.\n";
    }

    // Print the inventory
    inventory.printInventory();

    // Change the price of a book
    inventory.changePrice("978-0061120084", 19.99);
    cout << "Updated Inventory:\n";
    inventory.printInventory();

    return 0;
}



  
    // Print "Hello, World!" << std::endl;
    // Return 0 to indicate successful execution, optional but good backwards compatiable 

    
  //  int hours = 5;
  //  printf("I worked %d hours. \n", hours);
    
   // std::string formatted = std::("I worked {:d} hours. \n", hours);
    //std::cout<<formatted;

