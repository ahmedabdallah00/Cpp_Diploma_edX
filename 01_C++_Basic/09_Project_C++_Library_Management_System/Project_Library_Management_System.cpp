#include <iostream>
#include <string>
#include <vector>
#include <memory> // For smart pointers

using namespace std;


// Derived class for Book
class Book{
    private:
        string title;
        string author;
        int ISBN;
        bool isAvailable;
    public:
        Book( string t, string a, int i, bool avail = true) : title(t), author(a), ISBN(i), isAvailable(avail) {}
        void setTitle(string t) {
            title = t;
        }
        string getTitle() {
            return title;
        }
        void setAuthor(string a) {
            author = a;
        }
        string getAuthor() {
            return author;
        }
        void setISBN(int i) {
            ISBN = i;
        }
        int getISBN() {
            return ISBN;
        }
        void setAvailability(bool a) {
            isAvailable = a;
        }
        bool getAvailability() {
            return isAvailable;
        }
        void display() {
            cout << "Book Details:" << endl;
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "ISBN: " << ISBN << endl;
            cout << "Availability: " << (isAvailable ? "Available" : "Not Available") << endl;
        }
};

// Derived class for BorrowRecord
class BorrowRecord {
    public:
        shared_ptr<Book> book;
        int borrowerID;
        string duedate;
        BorrowRecord(shared_ptr<Book> b, int id, string d) : book(b), borrowerID(id), duedate(d) {}
        void display() {
            cout << "Borrowed Book: " << book->getTitle() << endl;
            cout << "Borrower ID: " << borrowerID << endl;
            cout << "Due Date: " << duedate << endl;
        }
};
// Base class
class User {
    protected:
        string name;
        int ID;
    public:
        User(string n, int e) : name(n), ID(e) {}
        virtual void display() {
            cout << "Name: " << name << endl;
            cout << "ID: " << ID << endl;
        }
        void setName(string n) {
            name = n;
        }
        string getName() {
            return name;
        }
        void setID(int e) {
            ID = e;
        }
        int getID() {
            return ID;
        }
        virtual void Display_menu()=0;
        virtual ~User() {} // Virtual destructor for proper cleanup

};
// Derived class for Librarian
class Librarian: public User{
    public:
    vector<shared_ptr<Book>>& book;
    vector<shared_ptr<BorrowRecord>>& borrowedBooks;
    Librarian(vector<shared_ptr<Book>>& b,vector<shared_ptr<BorrowRecord>>& r,string n, int e) : book(b), borrowedBooks(r),User(n, e) {}
    string trim(const string& str) {
        size_t start = str.find_first_not_of(" \t"); // Skip spaces and tabs
        if (start == string::npos) return "";        // Empty string if all whitespace
        size_t end = str.find_last_not_of(" \t");
        return str.substr(start, end - start + 1);
    }
    void AddBook() {
        string title, author;
        int isbn;
        cout << "Enter book details (Title Author ISBN): ";
        cout<<"Enter Title of the book: ";getline(cin, title);title = trim(title);
        cout<<"Enter Author of the book: ";getline(cin, author);author = trim(author);
        cout<<"Enter ISBN of the book: ";cin >> isbn;
        cin.ignore(); // Clear the newline character from the input buffer
        book.push_back(make_shared<Book>(title, author, isbn));
    }
    void RemoveBook(){
        int isbn;
        cout<<"Enter ISBN of the book to remove: ";
        cin >> isbn;
        cin.ignore(); // Clear the newline character from the input buffer
        //auto for automated data type
        //.begin depend on vecotr library to return start address
        //.end return end of vector
        for(size_t it = 0; it != book.size(); ++it) {
            if (book.at(it)->getISBN() == isbn && book.at(it)->getAvailability() ) { // Dereference the shared_ptr using '->'
                book.erase(book.begin() + it); // Use book.begin() + it to get the correct iterator
                cout << "Book removed successfully." << endl;
                break; // Exit the loop after removing the book
            }
        }
    }
    void DisplayAllBooks() {
        cout << "Available Books:" << endl;
        for (const auto& b : book) {
            b->display();
            cout << endl;
        }
    }
    void DisplayBorrowedBooks() {
        cout << "Borrowed Books:" << endl;
        for (const auto& r : borrowedBooks) {
            r->display();
            cout << endl;
        }
    }
    void SearchBooks(){
        string keyword;
        bool found = false;
        cout << "Enter title or author keyword: "; getline(cin, keyword);
        for (auto &b : book) {
            if (b->getTitle().find(keyword) != string::npos ||
                b->getAuthor().find(keyword) != string::npos) {
                        b->display();
                        found = true;
                        cout << endl;}
        }
        if (!found) {
            cout << "Book not found." << endl;
        }
    }
    void ViewOverdueBooks() {
        cout << "Overdue Books:" << endl;
        for (const auto& r : borrowedBooks) {
            // Assuming the due date is in the format "YYYY-MM-DD"
            // You can implement a proper date comparison here
            cout << "Book: " << r->book->getTitle() << ", Due Date: " << r->duedate << endl;
        }
    }
    void Display_menu() override {
        while (true) {
            cout << "\nLibrarian Menu:\n";
            cout << "1. Add Book\n";
            cout << "2. Remove Book\n";
            cout << "3. View All Books\n";
            cout << "4. View All Borrowing Records\n";
            cout << "5. Search Books\n";
            cout << "6. View Overdue Books\n";
            cout << "7. Logout\n";
            cout << "Enter choice: ";
            int choice;
            cin >> choice;
            cin.ignore(); // Clear the newline character from the input buffer
            switch (choice) {
                case 1:
                    AddBook();
                    break;
                case 2:
                    RemoveBook();
                    break;
                case 3:
                    DisplayAllBooks();
                    break;
                case 4:
                    DisplayBorrowedBooks();
                    break;
                case 5:
                    SearchBooks();
                    break;
                case 6:
                    ViewOverdueBooks();
                    break;
                case 7:
                    cout << "Logging out..." << endl;
                    return; // Exit the menu loop
                default:
                    cout << "Invalid choice. Please try again." << endl;
            }
        }
    }
};
class Member: public User{
    public:
    vector<shared_ptr<Book>>& book;
    vector<shared_ptr<BorrowRecord>>& borrowedBooks;
    Member(vector<shared_ptr<Book>>& b,vector<shared_ptr<BorrowRecord>>& r,string n, int e) : book(b), borrowedBooks(r),User(n, e) {}
    void BorrowBook(){
        string date;
        int isbn;
        bool found=false;
        cout<<"Enter ISBN of the book to borrow: ";
        cin >> isbn;
        cin.ignore(); // Clear the newline character from the input buffer
        cout<<"Enter Date of borrowing the book: ";getline(cin,date);
        for(const auto& b:book)
        {
           /*Check if book isbn is in database of library or not and if it didn't borrow also*/
           if(b->getISBN() == isbn && b->getAvailability())
           {
               b->setAvailability(false); // Set the book as not available
               borrowedBooks.push_back(make_shared<BorrowRecord>(b,ID,date)); // Create a new BorrowRecord and add it to the vector
               cout << "Book borrowed successfully." << endl;
               found= true;
               break;
           }
        }
        if(!found)
        {
            cout << "Book not found or already borrowed." << endl;
        }

    }
    void returnBook(){
        int isbn;
        bool found=false;
        cout<<"Enter ISBN of the book to return: ";
        cin >> isbn;
        cin.ignore(); // Clear the newline character from the input buffer
        for(size_t it = 0; it != borrowedBooks.size(); ++it) {
            if (borrowedBooks.at(it)->book->getISBN() == isbn && borrowedBooks.at(it)->book->getAvailability()==false ) { // Dereference the shared_ptr using '->'
                borrowedBooks.at(it)->book->setAvailability(true);
                borrowedBooks.erase(borrowedBooks.begin() + it); // Use book.begin() + it to get the correct iterator
                cout << "Book returned successfully." << endl;
                found = true;
                break; // Exit the loop after removing the book
            }
        }
        if(!found)
        {
            cout << "Book not found or already returned." << endl;
        }
    }
    void DisplayBorrowedBooks() {
        cout << "Borrowed Books:" << endl;
        for (const auto& r : borrowedBooks) {
            r->display();
            cout << endl;
        }
    }
    void DisplayAvailaBooks() {
        cout << "Available Books:" << endl;
        for (const auto& b : book) {
            if(b->getAvailability())
            {
                b->display();
                cout << endl;
            }
        }
    }
    void DisplayAllBooks() {
        cout << "All Books:" << endl;
        for (const auto& b : book) {
            b->display();
            cout << endl;
        }
    }
    void SearchBooks(){
        string title;
        cout << "Enter book title to search: ";
        cin.ignore(); // Clear the newline character from the input buffer
        getline(cin, title);
        bool found = false;
        for (const auto& b : book) {
            if (b->getTitle() == title) {
                b->display();
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Book not found." << endl;
        }
    }
    void ViewOverdueBooks() {
        cout << "Overdue Books:" << endl;
        for (const auto& r : borrowedBooks) {
            // Assuming the due date is in the format "YYYY-MM-DD"
            // You can implement a proper date comparison here
            cout << "Book: " << r->book->getTitle() << ", Due Date: " << r->duedate << endl;
        }
    }
    void Display_menu() override {
        while (true) {
            cout << "\nMember Menu:\n";
            cout << "1. Borrow Book\n";
            cout << "2. Return Book\n";
            cout << "3. View All Books\n";
            cout << "4. View All Borrowing Records\n";
            cout << "5. Search Books\n";
            cout << "6. View Overdue Books\n";
            cout << "7. Logout\n";
            cout << "Enter choice: ";
            int choice;
            cin >> choice;
            cin.ignore(); // Clear the newline character from the input buffer
            switch (choice) {
                case 1:
                    BorrowBook();
                    break;
                case 2:
                    returnBook();
                    break;
                case 3:
                    DisplayAllBooks();
                    break;
                case 4:
                    DisplayBorrowedBooks();
                    break;
                case 5:
                    SearchBooks();
                    break;
                case 6:
                    ViewOverdueBooks();
                    break;
                case 7:
                    cout << "Logging out..." << endl;
                    return; // Exit the menu loop
                default:
                    cout << "Invalid choice. Please try again." << endl;
            }
        }
    }

};


int main()
{
    vector<shared_ptr<Book>> books;
    vector<shared_ptr<BorrowRecord>> borrowedBooks;
    while (true) {
        int choice;
        cout << "\n--- Library System ---\n";
        cout << "1. Login as Librarian\n2. Login as Member\n3. Exit\nChoice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            shared_ptr<User> lib = make_shared<Librarian>(books,borrowedBooks,"Admin", 1);
            lib->Display_menu();}
        else if (choice == 2) {
            string name;
            int id;
            cout << "Enter Your Name: "; getline(cin, name);
            cout << "Enter Your ID: "; 
            cin >> id;
            shared_ptr<User> mem = make_shared<Member>(books,borrowedBooks,name, id);
            mem->Display_menu();

        } else if (choice == 3) {
            break;
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
        }    
    }
    return 0;
}
