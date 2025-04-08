#include <iostream>
#include <string>

using namespace std;
//Abstract class
class Animal {
    public:
        virtual void makeSound() = 0; // Pure virtual function
};
//Derived class
class Dog : public Animal {
    public:
        void makeSound() override {
            cout << "Woof Woof" << endl;
        }
};
//Derived class
class Cat : public Animal {
    public:
        void makeSound() override {
            cout << "Meow Meow" << endl;
        }
};
//Derived class
class brid : public Animal {
    public:
        void makeSound() override {
            cout << "Tweet! Tweet!" << endl;
        }
};

int main() {
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();
    Animal* animal3 = new brid();

    animal1->makeSound(); 
    animal2->makeSound(); 
    animal3->makeSound(); 

    delete animal1;
    delete animal2;
    delete animal3;

    return 0;
}