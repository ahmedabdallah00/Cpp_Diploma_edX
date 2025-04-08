#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    char class_number;
    int age;
    int* grades;
    int* roll_number;

public:
    
    /*Default copy*/
    Student()
    : name(""), class_number('A') ,age(0),grades(nullptr), roll_number(nullptr) {
        
        cout<<"Default constructor called"<<endl;
    }
    Student(string name, char class_number, int age, int* grades, int* roll_number)
    : name(name), class_number(class_number), age(age), grades(grades), roll_number(roll_number) {
        cout<<"Copy constructor called"<<endl;
    }
    /*Shallow Copy*/
    /*Deep copy*/
    Student(const Student& other) {
        name = other.name;
        age = other.age;
        class_number = other.class_number;
        grades = new int;
        *grades = *(other.grades);
        roll_number = new int;
        *roll_number = *(other.roll_number);
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
    void setClassNumber(char class_number1) {
        class_number = class_number1;
    }
    void setAge(int age1) {
        age1>0? age = age1: age = 0;
    }
    void setGrades(int grades1) {
        grades = new int;
       /* grades1>0 && grades1<100 ? *grades  = grades1: *grades = 0;*/ 
        *grades = grades1;
    }
    void setRollNumber(int roll_number1) {
        roll_number = new int;
        *roll_number = roll_number1;
    }
    string getName() {
        return name;
    }
    char getClassNumber() {
        return class_number;
    }
    int getAge() {
        return age;
    }
    int getGrades() {
        return *grades;
    }
    int getRollNumber() {
        return *roll_number;
    }
    
    void print_Student() {
        cout<<"Student Details:"<<endl;
        cout << "Name: " << name << endl;
        cout << "Class Number: " << class_number << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << *roll_number << endl;
        cout << "Gardes (0:100): " << *grades << endl;
        if(*grades < 50) {
            cout << "Grade : F" << endl;
        } 
        else if(*grades < 60) {
            cout << "Grade : D" << endl;
        }
        else if(*grades < 65) {
            cout << "Grade : C" << endl;
        }
        else if(*grades < 75 ) {
            cout << "Grade : B" << endl;
        }
        else if(*grades < 85) {
            cout << "Grade : A" << endl;
        }
        else if(*grades < 95 ) {
            cout << "Grade : A+" << endl;
        }
        
        cout <<"---------------------------------------"<< endl;
    }
};

int main()
{
    int grades = 70;
    int grades2 = 80;
    int roll_number = 1234;
    int roll_number2 = 5678;
    Student student1("Ahmed", 20, 'A', &grades, &roll_number);

    student1.print_Student();
    Student student2(student1);
    student2.print_Student();
    student2.setGrades(grades2);
    student2.setRollNumber(roll_number2);
    student2.print_Student();
    student1.print_Student();
    
    Student student3 = student1;
    student3.print_Student();
    student3.setGrades(grades2);
    student3.setRollNumber(roll_number2);
    student3.print_Student();
    student1.print_Student();
    return 0;
}

