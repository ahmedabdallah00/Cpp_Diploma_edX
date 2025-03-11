#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    /*solution without array*/
    int num, max;
    cout << "Enter 5 numbers, each separated by white space: ";
    cin >> num;
    max = num;
    for (int i = 1; i < 5; ++i) {
        cin >> num;
        if (num > max) {
            max = num;
        }
    }
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "The max value is: " << max << endl;
    cout << "______________________________________________" << endl;
    /*Solution with 5 integer values */
    int num1, num2, num3, num4, num5;
    max = 0;
    cout<<"entre 5 numbers ,each separted by white space: ";
    cin>>num1>>num2>>num3>>num4>>num5;
    cin.clear();
    cin.ignore(10000, '\n');
    cout<<"The numbers you entered are: "<<num1<<" "<<num2<<" "<<num3<<" "<<num4<<" "<<num5<<endl;
    if(num1 > max) max = num1;              
    if(num2 > max) max = num2;
    if(num3 > max) max = num3;
    if(num4 > max) max = num4;
    if(num5 > max) max = num5;
    cout<<"The max value is: "<<max<<endl;
    cout << "______________________________________________" << endl;
    /*Solution with array*/
    /*decleration of array of numbers*/
    int numbers[5];
    /*decleration and Initilization of max*/
    max = 0;
    cout<<"entre 5 numbers ,each separted by white space: ";
    cin>>numbers[0]>>numbers[1]>>numbers[2]>>numbers[3]>>numbers[4];
    cin.clear();
    cin.ignore(10000, '\n');
    cout<<"The numbers you entered are: "<<numbers[0]<<" "<<numbers[1]<<" "<<numbers[2]<<" "<<numbers[3]<<" "<<numbers[4]<<endl;
    for(int i = 0; i < 5 ; i++)
    {
        if(numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    cout<<"The max value is: "<<max<<endl;
    cout<<"______________________________________________"<<endl;
    return 0;
}