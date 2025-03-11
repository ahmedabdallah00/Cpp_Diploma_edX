#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int x=0;
    cout<< "entre the grade of student:"<<endl;
    cin>>x;
    cin.clear();
    if(x<=0 || x<50)
    {
        cout<< "failed "<<endl;
    }
    else if(x<=50 || x<65)
    {
        cout<< "D"<<endl;
    }
    else if(x<=65 || x<75)
    {
        cout<< "C"<<endl;
    }
    else if(x<=75 || x<85)
    {
        cout<< "B"<<endl;
    }
    else if(x<=85 || x<100)
    {
        cout<< "A"<<endl;
    }
    else
    {
        cout<< "F"<<endl;
    }
    
   
    return 0;
}