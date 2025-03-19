#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;
    int* weight;
public:
    
    /*Default copy*/
    Student()
    : name(""), age(0), weight(nullptr) {
        
        cout<<"Default constructor called"<<endl;
    }
    /*Shallow Copy*/
    
    /*Deep copy*/
    Student(const Student& other) {
        name = other.name;
        age = other.age;
        weight = new int;
        *weight = *(other.weight);
        cout<<"Copy Deep constructor called"<<endl;
    }
    Student(int age1) {
        age1>0? age = age1: age = 0;
    }
    Student(string name1) {
        name = name1;
    }
    Student(string name1, int age1) {
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
    
    void print_Student() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Weight: " << *weight << endl;
    }
};

int main()
{
    int weight1 = 70;
    int weight2 = 80;
    Student student1("Ahmed", 20);
    student1.setWeight(weight1);
    student1.print_Student();
    Student student2(student1);
    student2.print_Student();
    student2.setWeight(weight2);
    student2.print_Student();
    student1.print_Student();
    Student student3;
    return 0;
}

