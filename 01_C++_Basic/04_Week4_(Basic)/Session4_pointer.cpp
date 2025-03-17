#include <iostream>

using namespace std;
int main()
{
   int x = 10;
    int *ptr = &x;
    cout << "Value before change x is: " << *ptr << endl;
    *ptr=100;
    cout << "Value after change x is: " << *ptr << endl;
    return 0;
}