#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    cout << "______________________________________________" << endl;
    /*Solution with array*/
    /*decleration of array of numbers*/ 
    int numbers[10];
    /*decleration and Initilization of search variable*/
    int search = 0;
    cout << "entre 10 numbers ,each separted by white space: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
    }
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "Enter the number you want to search for: ";
    cin >> search;
    cin.clear();
    cin.ignore(10000, '\n');
    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] == search)
        {
            cout << "The number " << search << " is found at index " << i << endl;
            break;
        }
    }
    
    return 0;
}