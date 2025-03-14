#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;
int main()
{
    char str[10];
    char str1[10];
    cout << "Enter the frist name: ";
    cin >> str;
    cout<<"entre the last name: ";
    cin>>str1;
    //strcat(str, str1);
    cout <<"your full name is"<<" "<< str <<" "<< str1<<endl;

    return 0;
}