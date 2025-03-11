#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    /*Solution with if condition and else*/
    int user_input=0;
    while(user_input != 12)
    {
        cout<<"entre the result of this multiplication 3*4: ";
        cin>>user_input;
        if(user_input == 12)
        {
            cout<<"Thanks"<<endl;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
    }
    cout<<"______________________________________________"<<endl;
    /*Solution with Switch*/
    user_input=0;
    while(user_input != 12)
    {
        cout<<"entre the result of this multiplication 3*4: ";
        cin>>user_input;
        cin.clear();
        cin.ignore(10000, '\n');
        switch(user_input)
        {
            case 12:
                cout<<"Thanks"<<endl;
                break;
            default:
                cout<<"Wrong"<<endl;
        }
    }
    /*solution with switch and without while */
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    int search, pos = 0;
    
    // Read 10 numbers
    cout << "Enter number 1: "; cin >> n1;
    cout << "Enter number 2: "; cin >> n2;
    cout << "Enter number 3: "; cin >> n3;
    cout << "Enter number 4: "; cin >> n4;
    cout << "Enter number 5: "; cin >> n5;
    cout << "Enter number 6: "; cin >> n6;
    cout << "Enter number 7: "; cin >> n7;
    cout << "Enter number 8: "; cin >> n8;
    cout << "Enter number 9: "; cin >> n9;
    cout << "Enter number 10: "; cin >> n10;
    
    // Get search number
    cout << "\nEnter number to search: ";
    cin >> search;
    
    // Determine position using ternary operator
    pos = (search == n1) ? 1 : 
          (search == n2) ? 2 :
          (search == n3) ? 3 :
          (search == n4) ? 4 :
          (search == n5) ? 5 :
          (search == n6) ? 6 :
          (search == n7) ? 7 :
          (search == n8) ? 8 :
          (search == n9) ? 9 :
          (search == n10) ? 10 : 0;

    // Switch-based output
    switch(pos) {
        case 1: cout << "Found at position 1"; break;
        case 2: cout << "Found at position 2"; break;
        case 3: cout << "Found at position 3"; break;
        case 4: cout << "Found at position 4"; break;
        case 5: cout << "Found at position 5"; break;
        case 6: cout << "Found at position 6"; break;
        case 7: cout << "Found at position 7"; break;
        case 8: cout << "Found at position 8"; break;
        case 9: cout << "Found at position 9"; break;
        case 10: cout << "Found at position 10"; break;
        default: cout << "Number does not exist";
    }
    
    

    return 0;
}