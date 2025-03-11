#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int sum[10];
    
    for(int i = 0; i <=10 ; i++)
    {
        cout<<"entre number of index "<<i<<": ";
        cin>>sum[i];
        
    }
    for(int j = 10; j > 0; j--)
    {
        cout<<sum[j]<<endl;
    }
        cout<<"______________________________________________"<<endl;

    return 0;
}