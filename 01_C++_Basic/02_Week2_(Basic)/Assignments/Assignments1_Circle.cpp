#include <iostream>
#include <numbers>
#include <cmath>

using namespace std;
int main()
{
    /*decleration of raduis*/
    double radius;
    /*Init and decleration of area and circumference*/
    double area=0;
    double circumference=0;
    /*another solution
        double pi =numbers::pi; */
    double pi = 3.14159;
    
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    //Calculating the area and circumference of the circle
    /*another solution
        area = pi * radius*radius; */
    area = pi * pow(radius, 2);
    circumference = 2 * pi * radius;
    /* Display results of area and circumference of the circle */
    cout << "The area of the circle is: " << area << endl;
    cout << "The circumference of the circle is: " << circumference << endl;
    
    return 0;
}