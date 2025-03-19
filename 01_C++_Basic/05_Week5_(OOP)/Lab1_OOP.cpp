#include <iostream>
#include <string>

using namespace std;

class Dog {
private:
    string name;
    int age;
    int* weight;
public:
    
    Dog() {
        name = "";
        age = 0;
        cout<<"Default constructor called"<<endl;
    }
    Dog(int age1) {
        age1>0? age = age1: age = 0;
    }
    Dog(string name1) {
        name = name1;
    }
    Dog(string name1, int age1) {
        name = name1;
        age1>0? age = age1: age = 0;
    }
    void setName(string name1) {
        name = name1;
    }
    void setAge(int age1) {
        age1>0? age = age1: age = 0;
    }
    void setWeight(int weight1) {
        weight = new int;
        *weight = weight1;
    }
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    int getWeight() {
        return *weight;
    }
    Dog(const Dog &dog) {
        name = dog.name;
        age = dog.age;
        weight = new int;
        *weight = *dog.weight;
        cout<<"Copy constructor called"<<endl;
    }
};


int main() {
    Dog dog1("Buddy", 5);
    Dog dog2("Max", 3);
    Dog dog3;
    Dog dog4(4);
    Dog dog5("Lucy");
    cout << dog1.getName() << " is " << dog1.getAge() << " years old." << endl;
    cout << dog2.getName() << " is " << dog2.getAge() << " years old." << endl;
    dog3.setName("Lucy");
    dog3.setAge(4);
    cout << dog3.getName() << " is " << dog3.getAge() << " years old." << endl;
    dog4.setName("Buddy");
    cout << dog4.getName() << " is " << dog4.getAge() << " years old." << endl;
    dog5.setAge(5);
    cout << dog5.getName() << " is " << dog5.getAge() << " years old." << endl;
    Dog dog6 = dog1;
    cout << dog6.getName() << " is " << dog6.getAge() << " years old." << endl;

    return 0;
}