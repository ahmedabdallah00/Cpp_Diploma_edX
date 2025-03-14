#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;
int main()
{
    char str[50];
    strcpy(str, "ROS");
    strcat(str, " Diploma");
    cout<<str<<endl;
    cout<<strlen(str)<<endl;
    cout<<strcmp("A","\0")<<endl;

    return 0;
}