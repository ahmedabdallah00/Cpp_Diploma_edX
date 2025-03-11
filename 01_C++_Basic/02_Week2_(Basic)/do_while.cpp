#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    char x=0;
    int i=200;
    int j=200;
    int sum=0;
    
    do
    {   
        
        cout<<"please entre width : ";
        cin>>i;
        cin.clear();
        cout<<"please entre length : ";
        cin>>j;
        cout << (i *j)<<endl;
        cout<<"do you want to continue y/n : ";
        cin>>x;
        cin.clear();
    }while(x == 'y');

    return 0;
}