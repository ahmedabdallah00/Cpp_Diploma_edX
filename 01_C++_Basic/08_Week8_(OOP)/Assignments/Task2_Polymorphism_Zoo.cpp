#include <iostream>
#include <string>
#include <vector>

using namespace std;
// Base class
class Animal {
    protected:
        string name;
        int age;
    public:
        Animal(string n, int a) : name(n), age(a) {}
        void setName(string n) {
            name = n;
        }
        string getName() const {
            return name;
        }
        void setAge(int a) {
            age = a;
        }
        int getAge() const {
            return age;
        }
        virtual void display() = 0; // Pure virtual function
        virtual ~Animal() {} // Virtual destructor
};
// Derived class
class Mammal : public Animal {
    private:
        string color;
    public:
        Mammal(string n, int a, string c) : Animal(n,a), color(c) {}
        void setColor(string c) {
            color = c;
        }
        string getColor() const {
            return color;
        }
        void display() {
            cout << "Mammal: " << name << " is making sound." << endl; // Call base class makeSound
            cout << "Mammal: " << name << ", Age: " << age << " yeasr, Color: " << color << endl<<endl;
        }

};
// Derived class
class Bird : public Animal {
    private:
        double wingSpan;
    public:
        Bird(string n, int a, double wingSpan) : Animal(n,a), wingSpan(wingSpan) {}
        void setwingSpan(double wingSpan) {
            this->wingSpan = wingSpan;
        }
        double getwingSpan() const {
            return wingSpan;
        }
        void makesound(){
            cout << "Brid: " << name << " is making sound." << endl;
        }
        void display() override{
            makesound(); // Call base class makeSound
            cout << "Bird: " << name << ", Age: " << age << " years, WingSpan: " << wingSpan<<" Meters" << endl<<endl;
        }
};
// Derived class
class Reptile: public Animal {
    private:
        string shell;
    public:
        Reptile(string n, int a, string s) : Animal(n,a), shell(s) {}
        void setshell(string s) {
            shell = s;
        }
        string getshell() const {
            return shell;
        }
        void display() {
            cout << "Reptile: " << name << " is making sound." << endl; // Call base class makeSound
            cout << "Reptile: " << name << ", Age: " << age << " years, Has Shell: " << shell << endl<<endl;
        }
};

int main()
{
    vector<Animal*> animals; // Vector of pointers to Animal
    animals.push_back(new Mammal("Lion", 5, "Golden"));
    animals.push_back(new Bird("Parrot", 10, 2.5));
    animals.push_back(new Reptile("Turtle", 20, "Yes"));
    animals.at(0)->display();
    animals.at(1)->display();
    animals.at(2)->display();
    
    return 0; 
}
