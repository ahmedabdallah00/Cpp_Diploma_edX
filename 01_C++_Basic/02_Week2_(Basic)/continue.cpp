#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    char x=0;
    int i=200;
    int j=200;
    int sum=0;
    cout<<"_______________Mulpilication Table_________ "<<endl;
    for(int i = 0; i <= 10; i++)
    {
        for(int j = 0; j <= 10; j++)
        {
            cout<<i<<" * "<<j<<" = "<<(i*j)<<endl;
        }
        cout<<"______________________________________________"<<endl;
    }

    return 0;
}