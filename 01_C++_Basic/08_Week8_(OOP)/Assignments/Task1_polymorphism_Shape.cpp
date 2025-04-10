#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;
//Base class(Abstract class)
class Shape{
    public:
        virtual double getArea() = 0; // Pure virtual function
        virtual double getPerimeter() = 0; // Pure virtual function
        virtual void display() = 0; // Pure virtual function
        virtual ~Shape() {} // Virtual destructor
};
//Derived class
class Circle: public Shape{
    private:
        double radius;
    public:
        Circle(double r) : radius(r) {}
        double getArea() override {
            return 3.14 * radius * radius; // Area of circle
        }
        double getPerimeter() override {
            return 2 * 3.14 * radius; // Perimeter of circle
        }
        void display() override {
            cout << "Circle: Area = " << getArea() << ", Perimeter = " << getPerimeter() << endl;
        }
};
//Derived class
class Rectangle: public Shape{
    private:
        double width;
        double length;
    public:
        Rectangle(double w, double l) : width(w), length(l) {}
        double getArea() override {
            return width * length; // Area of rectangle
        }
        double getPerimeter() override {
            return 2 * (width + length); // Perimeter of rectangle
        }
        void display() override {
            cout << "Rectangle: Area = " << getArea() << ", Perimeter = " << getPerimeter() << endl;
        }    
};
//Derived class
class Triangle: public Shape{
    private:
        double base;
        double height;
    public:
        Triangle(double b, double h) : base(b), height(h) {}
        double getArea() override {
            return 0.5 * base * height; // Area of triangle
        }
        double getPerimeter() override {
            return base + height + sqrt(base * base + height * height); // Perimeter of triangle
        }
        void display() override {
            cout << "Triangle: Area = " << getArea() << ", Perimeter = " << getPerimeter() << endl;
        }    
};

void displayShapeInfo(Shape* shapes[], int size) {
    for (int i = 0; i < size; ++i) {
        cout<<"Shape " << i + 1 << ": ";
        shapes[i]->display();
    }
}

int main()
{
    Shape* shapes[3];
    shapes[0] = new Circle(5);
    shapes[1] = new Rectangle(4, 6);
    shapes[2] = new Triangle(3, 4);
    displayShapeInfo(shapes, 3);

    
    return 0;
}