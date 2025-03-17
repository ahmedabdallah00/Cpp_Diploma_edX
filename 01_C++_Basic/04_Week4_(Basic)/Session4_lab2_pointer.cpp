#include <iostream>
#include <string>

using namespace std;
int main()
{
    int x[5] = {1,2,3,4,5};
    int *ptr = &x[0];
    for(int i = 0; i < 5; i++)
    {
        cout << *ptr << endl;
        ptr++;
        
    }
    /*string*/
    string name[5] = {"Ahmed", "Ali", "Mohamed", "Omar", "Khaled"};
    string *ptr1 = &name[0];
    for(int i = 0; i < 5; i++)
    {
        cout << *ptr1 << endl;
        ptr1++;
        
    }

    for(int i = 0; i < 5; i++)
    {
        cout << *(name+i) << endl;
        
    }
    
    return 0;
}