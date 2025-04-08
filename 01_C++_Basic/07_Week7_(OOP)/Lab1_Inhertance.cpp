#include <iostream>
#include <string>

using namespace std;
// Base class
class Animal {
    public:
    string name;
    void say_name() {
        cout << "My name is: " << name << endl;
    }
    void eat() {
        cout << "Animal eats" << endl;
    }
};
// Derived class
class Dog : public Animal {
    public:
    void say_name() {
        cout << "Dog's name is: " << name << endl;
    }
};
// Derived class
class Cat : public Animal {
    public:
    void say_name() {
        cout << "Cat's name is: " << name << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;

    dog.name = "Buddy";
    cat.name = "Whiskers";
    dog.say_name(); // Dog's own method
    cat.say_name(); // Cat's own method

    return 0;
}