#include <iostream>
#include <string>

using namespace std;

double Area(double x, double y);
double Area(double x);

int main(void)
{
    
    double x2= 5;
    double y2= 10;
    cout<<"The area of the rectangle is: "<<Area(x2, y2)<<endl;
    cout<<"The area of the square is: "<<Area(x2)<<endl;
    return 0;
}
double Area(double x, double y)
{
    return x * y;
}   
double Area(double x)
{
    return x * x;
}

