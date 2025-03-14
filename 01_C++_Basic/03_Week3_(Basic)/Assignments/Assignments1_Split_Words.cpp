/*C++ Code to insert a space whenever a lower character followed
 by upper character in a string */
 #include <iostream>
 #include <string>
 #include <cctype>

using namespace std;
int main()
{
    /*Initialize of string variable */
    string str ;
    /*Ask user to input Data*/
    cout << "Enter a string: ";
    getline(cin, str);
    /*Loop throw string to check check if char is a upper so print space to split it from pre. word*/
    for(int i = 0; i < str.length(); ++i)
    {
        /*1.if it the start of sentence we mustn't add space because there is no lower letter before it.
          2.if there is a upper letter and before is a lower letter so that meaning new begining for new word */
        if(isupper(str[i]) && i > 0 && islower(str[i-1]))
        {
            cout << " ";
        }
        cout << str[i];
    } 
    /*clear string to can add another value and test it*/
    str.clear();
    cout<<str<<endl;
    /*Another solution with Null*/ 
    cout << "Enter a string: ";
    getline(cin, str);
    /*loop throw string and make a condition check it loop has achieve to Null or not to stop looping */
    for(int i = 0; str[i] != '\0'; ++i)
    {
        /*1.if it the start of sentence we mustn't add space because there is no lower letter before it.
          2.if there is a upper letter and before is a lower letter so that meaning new begining for new word */
        if(isupper(str[i]) && i > 0 && islower(str[i-1]))
        {
            cout << " ";
        }
        cout << str[i];
    }
    /*clear string to can add another value and test it*/
    str.clear();
    cout<<str<<endl;
    /*Another solution with Null*/ 
    cout << "Enter a string: ";
    getline(cin, str);
    /*loop throw string with range-based tech. */
    char prev = '\0'; // Track previous character
    /*in Visual make error in it but I doesn't know why but it work in it also without any errors(logic)*/
    for (char c : str)
    {
        /*1.if it the start of sentence we mustn't add space because there is no lower letter before it.
          2.if there is a upper letter(previous) and before is a lower letter(C) so that meaning new begining for new word */
        if (prev != '\0' && islower(prev) && isupper(c)) {
            cout << " ";
        }
        cout << c;
        prev = c; // Update previous
    }

    return 0;
}