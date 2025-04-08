#include <iostream>
#include <string>
#include <cstring>

using namespace std;
// Base class
class String{
    private:
        char *str;
    public:
        // Default Constructor
        String() : str(NULL) {}

        // Constructor
        String(const String &s) {
            str = new char[strlen(s.str) + 1];
            strcpy(str, s.str);
        }
        //setString
        void setString(const string s) {
            str = new char[s.length() + 1];
            strcpy(str, s.c_str());
        }
        //getString
        const char* getString() const {
            return str;
        }
        String operator+(const String &s) const {
            String result;
            result.str = new char[strlen(str) + strlen(s.str) + 1];
            strcpy(result.str, str);
            strcat(result.str, s.str);
            return result;
        }
        String operator=(const String &s) {
            if (this != &s) {
                delete[] str; // Free existing memory
                str = new char[strlen(s.str) + 1];
                strcpy(str, s.str);
            }
            return *this;
        }
};

int main()
{
    String s1, s2, s3;
    s1.setString("Hello ");
    s2.setString("World!");
    s3 = s1 + s2;
    cout << "Concatenated String: " << s3.getString() << endl;
    return 0;
}