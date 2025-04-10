#include <iostream>
#include <string>
#include <vector>
#include <memory> // For smart pointers (ensure C++11 or later is enabled)

using namespace std;
// Base class
class Book {
    protected:
        string title;
        string author;
    public:
        Book(string t, string a) : title(t), author(a) {}
        virtual void display(){
            cout << "BOOK Title: " << title << ", Author: " << author << endl;
        } 
        string getTitle() const {
            return title;
        }
        string getAuthor() const {
            return author;
        }

        virtual ~Book() {} // Virtual destructor
};

int main(){
    // Using smart pointers to manage memory automatically
    unique_ptr<Book> book = make_unique<Book>("1984", "George Orwell");
    book->display();
    vector<shared_ptr<Book>> books;
    books.push_back(make_shared<Book>("The Great Gatsby", "F. Scott Fitzgerald"));
    books.push_back(make_shared<Book>("To Kill a Mockingbird", "Harper Lee"));
    books.push_back(make_shared<Book>("1984", "George Orwell"));  
    books.at(0)->display();
    books.at(1)->display();
    books.at(2)->display();

    weak_ptr<Book> weakPtr = books.at(0); // Create a weak pointer to the first book
    if (auto sharedPtr = weakPtr.lock()) { // Check if the weak pointer is still valid
        cout << "Weak pointer is valid. Book title: " << sharedPtr->getTitle() << endl;
    } else {
        cout << "Weak pointer is no longer valid." << endl;
    }
    return 0;
}