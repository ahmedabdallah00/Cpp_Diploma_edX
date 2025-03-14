#include <iostream>

void swap(int &x, int &y);
using namespace std;
int main()
{
    int x = 100;
    int y = 200;
    cout << "number1 Before swapping: " << x <<endl<< "number 2 Before swapping " << y << endl;
    swap(x, y);
    cout << " number1 After swapping: " << x <<endl<< "number 2 After swapping " << y << endl;
    return 0;
}
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
