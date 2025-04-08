#include <iostream>
#include <string>

using namespace std;
// Base class
class person {
    public:
    string name;
    int age;
    int ID;
    string gender;
    string country;
    person(string name,int age,int ID, string gender, string country,string person_gender) : name(name), age(age), ID(ID) ,gender(person_gender), country(country)
    {
        
    }
    void set_name(string n) {
        name = n;
    }
    void set_age(int a) {
        age = a;

    }
    void set_ID(int id) {
        ID = id;
    }
    void set_gender(string g) {
        gender = g;
        if(gender == "male" || gender == "female")
        {
            gender = g;
        }
        else{
            gender = "Validgender";
        }
    }
    void set_country(string c) {
        country = c;
    }
    string get_name() {
        return name;
    }
    int get_age() {
        return age;
    }
    int get_ID() {
        return ID;
    }
    string get_gender() {
        return gender;
    }
    string get_country() {
        return country;
    }
    void Display() {
        cout << "My name is: " << name << endl;
        cout << "My age is: " << age << endl;
        cout << "My ID is: " << ID << endl;
        cout << "My gender is: " << gender << endl;
        cout << "My country is: " << country << endl;
    }
    
};
// Derived class
class student : public person {
    public:
    double fees;
    string course;
    void set_fees(double f) {
        fees = f;
    }
    void set_course(string c) {
        course = c;
    }
    double get_fees() {
        return fees;
    }
    string get_course() {
        return course;
    }
    void Display() {
        cout << "My name is: " << name << endl;
        cout << "My age is: " << age << endl;
        cout << "My ID is: " << ID << endl;
        cout << "My gender is: " << gender << endl;
        cout << "My country is: " << country << endl;
        cout << "My fees is: " << fees << endl;
        cout << "My courses are: " << course << endl;
    }
};
class employee : public person {
    public:
    double salary;
    string Job_title;
    employee(string name, int age, int ID, string gender, string country, double salary, string Job_title) 
            : person(name, age, ID, gender, country, gender), salary(salary), Job_title(Job_title)
        {
            
        }   
    void set_salary(double f) {
        salary = f;
    }
    void set_Job_title(string c) {
        Job_title = c;
    }
    double get_salary() {
        return salary;
    }
    string get_Job_title() {
        return Job_title;
    }
    void Display() {
        cout << "My name is: " << name << endl;
        cout << "My age is: " << age << endl;
        cout << "My ID is: " << ID << endl;
        cout << "My gender is: " << gender << endl;
        cout << "My country is: " << country << endl;
        cout << "My salary is: " << salary << endl;
        cout << "My Job are: " << Job_title << endl;
    }
};

int main() {
    employee ahmed("Ahmed Abdallah",25,12345,"male","Egypt",1000.50,"Software Engineer");
    ahmed.Display(); 
    return 0;
}