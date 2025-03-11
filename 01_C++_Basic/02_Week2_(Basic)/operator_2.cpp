#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int x=0,y=0;
    cout<< "entre 2 number:"<<endl;
    cin>>x;
    cin.clear();
    cin>>y;
    cout<< x<< " > "<<y<<" is: "<<boolalpha<< (x>y)<<endl;
    cout<< x<< " < "<<y<<" is: "<<boolalpha<< (x<y)<<endl;
    cout<< x<< " >= "<<y<<" is: "<<boolalpha<< (x>=y)<<endl;
    cout<< x<< " < "<<y<<" is: "<<boolalpha<< (x<=y)<<endl;
    cout<< x<< " == "<<y<<" is: "<<boolalpha<< (x==y)<<endl;
    cout<< x<< " != "<<y<<" is: "<<boolalpha<< (x!=y)<<endl;
    return 0;
}