#include <iostream>
#include <string>

using namespace std;
// Base class
class Person{
    private:
        string name;
    public:
        Person() : name("undefined"){}
        Person(string n) : name(n) {}
        void setName(string n) {
            name = n;
        }
        string getName() const {
            return name;
        }
        virtual void display() {
            cout << "Name: " << name << endl;
        }
};
// Derived class
class Student: private Person{
    private:
        int studentID;
    public:
        Student(int id) : studentID(id) {}
        Student(string n, int id) : Person(n), studentID(id) {}
        void setstudentID(int id) {
            studentID = id;
        }
        int getstudentID() const {
            return studentID;
        }
        void display() override {
            Person::display(); // Call base class display
            cout << "Student ID: " << studentID << endl;
        }
};
// Derived class
class Teacher: private Person{
    private:
        int teacherID;
    public:
        Teacher(string n, int s) : Person(n), teacherID(s) {}
        void setTeaherID(int s) {
            teacherID = s;
        }
        int getTeaherID() const {
            return teacherID;
        }
        void display() override {
            Person::display(); // Call base class display
            cout << "TeaherID: " << teacherID << endl;
        }
};
// Derived class
class TeachingAssistant: public Student, public Teacher{
    private:
        string course;
    public:
        TeachingAssistant(string n, int id, int s) : Student(n, id), Teacher(n, s) {}
        void setCourse(string c) {
            course = c;
        }
        string getCourse() const {
            return course;
        }
        void display() override {
            cout << "Teaching Assistant Details:" << endl;
            Student::display(); // Call Student display
            cout << "Teacher ID: " << getTeaherID() << endl;
            cout << "Course: " << course << endl;
            
        }
};

int main() {
    Person p("Alice");
    p.display();

    Student s("Bob", 12345);
    s.setstudentID(67890);
    s.display();

    Teacher t("Charlie", 54321);
    t.setTeaherID(98765);
    t.display();
    
    TeachingAssistant ta("John Doe", 12345, 67890);
    ta.setCourse("Computer Science");
    ta.display();
    return 0;
}
