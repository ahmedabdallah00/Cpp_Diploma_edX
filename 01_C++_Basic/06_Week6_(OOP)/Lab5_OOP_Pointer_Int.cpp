#include <iostream>
#include <string>

using namespace std;

class Integer{
    private:
    int* value=new int;
    public:
    Integer( ) {}
    Integer(int value1) {
        *value=value1;
    }
    Integer(const Integer &other) {
        *value = *other.value;
    }
    ~Integer() {
        delete value;
    }
    void setValue(int value1) {
        *value = value1;
    }
    int getValue() {
        return *value;
    }
    Integer operator=(const Integer &other) {
       *value = *other.value;
       return *this;
    }
    Integer operator+(const Integer &other) {
        Integer result;
        result.value = new int;
        *result.value = *value + *other.value;
        return result;
    }
    Integer operator-(const Integer &other) {
        Integer result;
        result.value = new int;
        *result.value = *value - *other.value;
        return result;
    }
    Integer operator*(const Integer &other)
    {
        Integer result;
        result.value = new int;
        *result.value = *value * *other.value;
        return result;
    }
    Integer operator/(const Integer &other) {
        Integer result;
        result.value = new int;
        *result.value = *value / *other.value;
        return result;
    }
    Integer operator%(const Integer &other) {
        Integer result;
        result.value = new int;
        *result.value = *value % *other.value;
        return result;
    }
    Integer& operator++() {
        ++(*value);
        return *this;
    }
    Integer operator--(){
        --(*value);
        return *this;
    }
    bool operator<=(const Integer &other) {
        return *value <= *other.value;
    }
    bool operator>=(const Integer &other) {
        return *value >= *other.value;
    }
    bool operator<(const Integer &other) {
        return *value < *other.value;
    }
    bool operator>(const Integer &other) {
        return *value > *other.value;
    }
    bool operator==(const Integer &other) {
        return *value == *other.value;
    }
    bool operator!=(const Integer &other) {
        return *value != *other.value;
    }
    Integer operator[](int index) {
        return *(value + index);
    }

};

int main()
{
    Integer i1(5),i2(6),result;
    result = i1;
    cout <<"Before: " <<result.getValue() << endl;
    i1.setValue(9);
    cout <<"After: " <<result.getValue() << endl;
    cout <<"After: " <<i1.getValue() << endl;
    result = i1 + i2;
    cout << "Addition: result = i1 + i2 = " << result.getValue() << endl;
    result = i1 - i2;
    cout << "Subtraction: result = i1 - i2 = " << result.getValue() << endl;
    result = i1 * i2;
    cout << "Multiplication: result = i1 * i2 = " << result.getValue() << endl;
    result = i1 / i2;
    cout << "Division: result = i1 / i2 = " << result.getValue() << endl;
    result = i1 % i2;
    cout << "Modulus: result = i1 % i2 = " << result.getValue() << endl;
    result = ++i1;
    cout << "Increment: i1++ = " << result.getValue() << endl;
    result = --i1;
    cout << "Decrement: i1-- = " <<boolalpha<< result.getValue() << endl;
    cout << "Less than: i1 < i2 is :" <<boolalpha<< (i1 < i2) << endl;
    cout << "Greater than: i1 > i2  is" <<boolalpha<< (i1 > i2) << endl;
    cout << "Less than or equal to: i1 <= i2 " <<boolalpha<< (i1 <= i2) << endl;
    cout << "Greater than or equal to: i1 >= i2 " <<boolalpha<< (i1 >= i2) << endl; 
    cout << "Equal to: i1 == i2 " <<boolalpha<< (i1 == i2) << endl;
    cout << "Not equal to: i1 != i2 " <<boolalpha<< (i1 != i2) << endl;

    
    return 0;
}