#include <iostream>
#include <string>

#define M_PI 3.14159265358979323846

using namespace std;
// Base class
class Shape{
    protected:
        string color;
    public:
        Shape() : color("undefined") {}
        Shape(string c) : color(c) {}
        virtual double getArea() {
            return 0.0; 
        }
        void setColor(string c) {
            color = c;
        }
        string getColor() const {
            return color;
        }
};
// Derived class
class Rectangle : public Shape{
    private:
        double length;
        double width;
    public:
        //Rectangle(double l, double w, string c) : length(l) , width(w) ,color(c)  {}
        Rectangle(double l, double w, string c) {
            length = l;
            width = w;
            color = c;
        }
        double getArea() override {
            return length * width; 
        }
};
// Derived class
class Circle : public Shape{
    private:
        double radius;
    public:
        Circle(double r, string c)
        {
            radius = r;
            color = c;
        }
        double getArea() override {
            return M_PI * radius * radius; 
        }
};
// Derived class
class Triangle : public Shape{
    private:
        double base;
        double height;
    public:
        Triangle(double b, double h, string c) {
            base = b;
            height = h;
            color = c;
        }
        double getArea() override {
            return 0.5 * base * height; 
        }
};

int main()
{
    Shape *shapePtr;
    Rectangle rect(5.0, 3.0, "Red");
    Circle circ(2.0, "Blue");
    Triangle tri(4.0, 3.0, "Green");


    cout << "Rectangle Area: " << rect.getArea() << endl;
    cout << "Rectangle Color: " << rect.getColor() << endl;

    cout << "Circle Area: " << circ.getArea() << endl;
    cout << "Circle Color: " << circ.getColor() << endl;

    cout << "Triangle Area: " << tri.getArea() << endl;
    cout << "Triangle Color: " << tri.getColor() << endl;

    return 0;
}