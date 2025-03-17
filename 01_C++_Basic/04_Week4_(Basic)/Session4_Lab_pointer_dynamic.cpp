#include <iostream>

using namespace std;
int main()
{
    int *ptr = new int[5];
    int sum = 0;
    cout << "Enter 5 elements to get sum: " << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << "Enter value of element " << i << ": ";
        cin >> *(ptr+i);
        sum += *(ptr+i);
    }
    cout << "Sum of elements is: " << sum << endl;
    delete[] ptr;

    return 0;
}


