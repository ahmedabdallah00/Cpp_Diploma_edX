#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int numbers[10];
    int sum = 0;
    cout << "______________________________________________" << endl;
    cout << "Enter 10 numbers : "<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter number "<<(i+1)<<": ";
        cin >> numbers[i];
        sum += numbers[i];
    }
    cout<<"The DATA you Entre:"<<endl;
    
    for (int i = 0; i < 10; i++)
    {
        cout << numbers[i]<<" ";
    }
    cout<<endl;
    cout << "The sum of the numbers is: " << sum << endl;
    cout << "______________________________________________" << endl;
   
  
    return 0;
}