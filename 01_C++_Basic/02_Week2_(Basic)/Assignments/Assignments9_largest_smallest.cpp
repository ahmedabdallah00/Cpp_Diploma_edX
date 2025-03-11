#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int numbers[10];
    int Smallest_number=0,Largest_number=0;
    cout << "Enter 10 numbers : "<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter number "<<(i+1)<<": ";
        cin >> numbers[i];
    }
    cout<<"The DATA you Entre:"<<endl;
    cout<<"____________________"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout << numbers[i]<<" ";
    }
    cout<<endl;
    cout<<"____________________"<<endl;
    Largest_number = numbers[0];
    Smallest_number = numbers[0];
    int i=0;
    while(i<10)
    {
        if (numbers[i] > Largest_number)
        {
            Largest_number = numbers[i];
        }
        if (numbers[i] < Smallest_number)
        {
            Smallest_number = numbers[i];
        }
        i++;
    }
    cout << "The largest number is: " << Largest_number << endl;
    cout << "The smallest number is: " << Smallest_number << endl;
  
    return 0;
}