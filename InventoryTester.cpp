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

    // Parameterized constructor
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
    // Create an inventory of size 10
    Inventory inventory(10);

    // Create and add books to the inventory
    if (!inventory.addBook(Book("978-0061120084", "Harper Lee", "To Kill a Mockingbird", 1, "HARPB", 14.99))) {
        cout << "Failed to add book: To Kill a Mockingbird (ISBN: 978-0061120084)\n";
    }

    if (!inventory.addBook(Book("978-0451524935", "George Orwell", "1984", 1, "SIGNET", 9.99))) {
        cout << "Failed to add book: 1984 (ISBN: 978-0451524935)\n";
    }

    if (!inventory.addBook(Book("978-0316769488", "J.D. Salinger", "The Catcher in the Rye", 1, "LB", 10.99))) {
        cout << "Failed to add book: The Catcher in the Rye (ISBN: 978-0316769488)\n";
    }

    // Add additional books
    if (!inventory.addBook(Book("0134444329", "Tony Gaddis", "Starting Out With Python", 4, "PE", 99.95))) {
        cout << "Failed to add book: Starting Out With Python (ISBN: 0134444329)\n";
    }

    if (!inventory.addBook(Book("0133582736", "Tony Gaddis", "Starting Out With Python", 3, "PE", 19.95))) {
        cout << "Failed to add book: Starting Out With Python (ISBN: 0133582736)\n";
    }

    if (!inventory.addBook(Book("013478796X", "Tony Gaddis", 
                                "Starting Out With Java: From Control Structures through Data Structures", 4, "PE", 145.38))) {
        cout << "Failed to add book: Starting Out With Java: From Control Structures through Data Structures (ISBN: 013478796X)\n";
    }

    if (!inventory.addBook(Book("1119056553", "Cay Horstmann", "Python for Everyone", 2, "WI", 98.38))) {
        cout << "Failed to add book: Python for Everyone (ISBN: 1119056553)\n";
    }

    if (!inventory.addBook(Book("0134802217", "Tony Gaddis", 
                                "Starting Out With Java: From Control Structures through Objects", 7, "PE", 188.95))) {
        cout << "Failed to add book: Starting Out With Java: From Control Structures through Objects (ISBN: 0134802217)\n";
    }

    if (!inventory.addBook(Book("0134462017", "Tony Gaddis", 
                                "Starting Out With Java: Early Objects", 6, "PE", 58.50))) {
        cout << "Failed to add book: Starting Out With Java: Early Objects (ISBN: 0134462017)\n";
    }

    // Attempt to add a duplicate book
    if (!inventory.addBook(Book("978-0061120084", "Harper Lee", "To Kill a Mockingbird", 1, "HARPB", 14.99))) {
        cout << "Failed to add duplicate book: To Kill a Mockingbird (ISBN: 978-0061120084)\n";
    }

    // Print initial inventory
    cout << "\nInitial Inventory:\n";
    inventory.printInventory();

    // Change book prices
    inventory.changePrice("978-0061120084", 50.00);
    inventory.changePrice("978-0451524935", 12.49);
    inventory.changePrice("978-0316769488", 8.99);

    // Print updated inventory
    cout << "\nUpdated Inventory:\n";
    inventory.printInventory();

    return 0;
}





  
    // Print "Hello, World!" << std::endl;
    // Return 0 to indicate successful execution, optional but good backwards compatiable 

    
  //  int hours = 5;
  //  printf("I worked %d hours. \n", hours);
    
   // std::string formatted = std::("I worked {:d} hours. \n", hours);
    //std::cout<<formatted;

