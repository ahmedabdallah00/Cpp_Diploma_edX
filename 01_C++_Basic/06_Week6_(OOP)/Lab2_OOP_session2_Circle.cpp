#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846

using namespace std;
class circle {
private:
    double radius;
    double area;
    double circumference;
public:
    circle(double radius){
        this->radius = radius;
        this->area = M_PI * radius * radius;
        this->circumference = 2 * M_PI * radius;
    }
    void setRadius(double radius){
        this->radius = radius;
    }
    friend double clac_area(circle o);
};
double clac_area(circle o)
{
    return o.area = M_PI * o.radius * o.radius;
}
int main()
{
    circle c1(5);
    cout << "Area of circle: " << clac_area(c1) << endl;
    return 0;
}