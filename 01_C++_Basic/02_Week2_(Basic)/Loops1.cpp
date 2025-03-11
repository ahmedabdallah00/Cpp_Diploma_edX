#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int x=0;
    int sum=0;
    for(int i = 0; i <= 100; i++)
    {
        if (i%3==0 && i%5==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}