#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;
int main()
{
    char str[20];
    char str1[10];
    cout << "Enter the full name: ";
    cin.getline(str, 20);

    //strcat(str, str1);
    cout <<"your full name is"<<" "<< str <<endl;

    return 0;
}