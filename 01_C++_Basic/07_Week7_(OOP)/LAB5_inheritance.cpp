#include <iostream>
#include <string>

using namespace std;
// Base class
class Vechicle
{
    public:
    string brand;
    string color;
    int speed;
    void set_brand(string n) {
        brand = n;
    }
    void set_color(string c) {
        color = c;
    }
    void set_speed(int s) {
        speed = s;
    }
    string get_brand() {
        return brand;
    }
    string get_color() {
        return color;
    }
    int get_speed() {
        return speed;
    }
};
//derived class
class car : public Vechicle
{
    public:
    int number_of_doors;
    void set_number_of_doors(int number) {
        number_of_doors = number;
    }
    int get_number_of_doors() {
        return number_of_doors;
    }
    void Display() {
        cout << "My brand is: " << brand << endl;
        cout << "My color is: " << color << endl;
        cout << "My speed is: " << speed << endl;
        cout << "number of doors is: " << number_of_doors << endl;
    }
};
//derived class
class sportcar : public car
{
    public:
    bool is_convertible;
    void set_is_convertible(bool convertible) {
        is_convertible = convertible;
    }
    bool get_is_convertible() {
        return is_convertible;
    }
    
    void Display() {
        cout << "My brand is: " << brand << endl;
        cout << "My color is: " << color << endl;
        cout << "My speed is: " << speed << endl;
        cout <<"number of doors is: " << number_of_doors << endl;
        cout << "My type is: " << is_convertible << endl;
    }
};

int main() {
    car mycar;
    sportcar mysportcar;
    
    mycar.set_brand("Toyota");
    mycar.set_color("Red");
    mycar.set_speed(120);
    mycar.set_number_of_doors(4);
    
    mysportcar.set_brand("Ferrari");
    mysportcar.set_color("Yellow");
    mysportcar.set_speed(200);
    mysportcar.set_number_of_doors(2);
    mysportcar.set_is_convertible(true);
    
    cout << "Car details:" << endl;
    mycar.Display();
    
    cout << "\nSport Car details:" << endl;
    mysportcar.Display();
    
    return 0;
}