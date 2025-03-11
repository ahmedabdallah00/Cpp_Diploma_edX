// C++ program to evaluate area of a polygon using
#include <iostream>
#include <cmath>

using namespace std;    
int main()
{
    /*Solution depend on  length_of_each_side and number of It*/
    double length_of_side= 0;
    double area = 0;
    int number_of_sides;

    cout << "Enter the number of sides of the polygon: ";
    cin >> number_of_sides;
    if (number_of_sides < 3) {
        cout<< "A polygon must have at least 3 sides." <<endl;
    }
    cout << "Enter the length of each side of the polygon: ";
    cin >> length_of_side;
    /*M_PI == PI == double pi = 3.14159;*/
    area = (number_of_sides * pow(length_of_side, 2)) / (4 * tan(M_PI / number_of_sides));
    cout << "The area of the polygon is: " << area << endl;
    return 0;
}