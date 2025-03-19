#include <iostream>

using namespace std;
class Date {
private:
    int day;
    int month;
    int year;

    bool isValidYear(int year) {
        return year > 0;
    }
    bool isValidMonth(int month) {
        return month >= 1 && month <= 12;
    }
    bool isValidDay(int day, int month, int year) {
        if (day < 1 || day > 31) {
            return false;
        }
        if (month == 4 || month == 6 || month == 9 || month == 11) {
            return day <= 30;
        }
        if (month == 2) {
            bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
            if (isLeapYear) {
                return day <= 29;
            } else {
                return day <= 28;
            }
        }
        return true;
    }
    bool isValidDate(int day, int month, int year) {
        return isValidYear(year) && isValidMonth(month) && isValidDay(day, month, year);
    }
    bool isLeapYear()  {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
    bool isValid()  {
        if (year < 1 || month < 1 || month > 12) return false;
    
        const int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 
                                   31, 31, 30, 31, 30, 31};
        int maxDay = daysInMonth[month];
        
        if (month == 2 && isLeapYear()) maxDay = 29;
    
        return (day >= 1 && day <= maxDay);
    }

public:
    Date(): day(1), month(1), year(2001)
    {
        cout << "Default constructor called" << endl;
    }
     
    //shallow copy constructor
    
    
    // Copy constructor (deep copy)
    Date(const Date &other) {
        day = other.day;
        month = other.month;
        year = other.year;
    }
    
    void setDate(int d, int m, int y) {
        if (isValidDate(d, m, y)) {
            day = d;
            month = m;
            year = y;
            cout << "Date set successfully" << endl;
            cout << "The Date is valid" << endl;
        } else {
            day = d;
            month = m;
            year = y;
            cout << "Invalid date" << endl;
        }
    }
    
    void setDay(int d) {
        day=d;
    }
    void setMonth(int m) {
        month=m;
    }
    void setYear(int y) {
        year=y;
    }
    int getDay() {
        return day;
    }

    int getMonth() {
        return month;
    }

    int getYear() {
        return year;
    }

    void printDate() {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date date;
    int year, month, day;
    cout<<"Enter day: ";
    cin>>day;
    cout<<"Enter month: ";
    cin>>month;
    cout<<"Enter year: ";
    cin>>year;
    date.setDate(day, month, year); 
    date.printDate();

    date.setDate(31, 4, 2021); 
    date.printDate();
    //Test copy deep constructor
    Date date2 = date;
    date2.printDate();
    date2.setDate(year, month, day);
    date2.printDate();
    date.printDate();

    return 0;
}