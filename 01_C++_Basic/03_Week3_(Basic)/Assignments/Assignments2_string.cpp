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
        /*1.if it the start of sentence we must add space because it is the start of the sentence and before it there is no sapce so we should make for it or operator.
          2.if there is a lower letter and before it there a space so that meaning new begining for new word so we covert to upper*/
        if(((str[i-1] == ' ') && islower(str[i])) || i ==0)
        {
            str[i]=toupper(str[i]);
        }
    
    } 
    cout<<str;
    /*clear string to can add another value and test it*/
    str.clear();
    cout<<str<<endl;
    /*Another solution with Null*/ 
    cout << "Enter a string: ";
    getline(cin, str);
    /*loop throw string and make a condition check it loop has achieve to Null or not to stop looping */
    for(int i = 0; str[i] != '\0'; ++i)
    {
        /*1.if it the start of sentence we must add space because it is the start of the sentence and before it there is no sapce so we should make for it or operator.
          2.if there is a lower letter and before it there a space so that meaning new begining for new word so we covert to upper*/
        if(((str[i-1] == ' ') && islower(str[i])) || i ==0)
        {
            str[i]=toupper(str[i]);
        }
      
    } 
    cout<<str;
    
    return 0;
}