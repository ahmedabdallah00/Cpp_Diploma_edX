#include <iostream>
#include <string>

using namespace std;


double RectangleArea(double length, double width);
int main(void)
{
    double length, width;
    cout << "Enter the length of the rectangle: "; 
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    cout << "The area of the rectangle is: " << RectangleArea(length, width) << endl;

    return 0;
}

double RectangleArea(double length, double width)
{
    return length * width;
}