#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int expression=0;
    cout<< "entre the ID of student:"<<endl;
    cin>>expression;
    cin.clear();
    switch (expression)
    {
        case 0:
        /* code */
        cout<< "failed "<<endl;
        break;
        case 1234:
        /* code */
        cout<< "Ahmed "<<endl;
        break;
        case 1145:
        /* code */
        cout<< "Youssef "<<endl;
        break;
        case 5677: 
        /* code */
        cout<< "Mina "<<endl;
        break;
        default:
        cout<< "Wrong ID "<<endl;
        break;
    }
   
    return 0;
}