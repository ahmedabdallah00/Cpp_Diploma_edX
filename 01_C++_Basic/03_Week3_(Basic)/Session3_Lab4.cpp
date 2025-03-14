#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;
int main(void)
{
    char str[20];
    char str1[10];
    char compare[] = "Ahmed Abdallah";
    cout << "Enter the full name: ";
    cin.getline(str, 20);
    cout <<"your full name is"<<" "<< str <<endl;
    cout<<"---------------------------------"<<endl;
    if(strcmp(str, compare) == 0)
    {
        cout<<str <<" And "<<compare<<" is The same"<<endl;
    }
    cout<<"---------------------------------"<<endl;
    cout <<"your full name is"<<" "<< str <<endl;
    for(int i = 0; i < strlen(str); i++)
    {
        str[i]=toupper(str[i]);
    }
    if(!strcmp(str, compare) == 0)
    {
        cout<<compare <<" And "<<str<<" is not the same"<<endl;
    }
    cout<<"---------------------------------"<<endl;
    cout <<"Result of comparing the two strings: "<<str<<" "<< compare<< " "<<strcmp(str, compare)<<endl;
    for(int i = 0; i < strlen(str); i++)
    {
        str[i]=tolower(str[i]);
    }
    cout <<"Result of comparing the two strings: "<< str<<" "<< compare<< " "<<strcmp(str, compare)<<endl;
    return 0;
}