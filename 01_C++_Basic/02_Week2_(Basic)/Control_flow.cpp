#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int x=0;
    cout<< "entre the age of person:"<<endl;
    cin>>x;
    cin.clear();
    if(x>=16)
    {
        cout<< "you are able to drive"<<endl;
    }
   /* else if(x==y)
    {
        cout<< x<< " = "<<y<<" is: "<<boolalpha<< (x==y)<<endl;
    }*/
    else
    {
        cout<< "you aren't able to drive"<<endl;
    }
   
    return 0;
}