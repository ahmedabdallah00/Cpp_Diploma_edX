#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>

using namespace std;
// Base class
class Vector{
    private:
        vector<int> vec;
    public:
        Vector() {}
        Vector(int size) {
            vec.resize(size);
        }
        
        Vector(const Vector &other) {
            vec = other.vec;
        }
        ~Vector() {}
        void setValue(int index, int value) {
            if (index >= 0 && index < vec.size()) {
                vec[index] = value;
            }
        }
        int getValue(int index) {
            if (index >= 0 && index < vec.size()) {
                return vec[index];
            }
            return -1; // or throw an exception
        }
        void display_reverse() {
            cout << "Vector in reverse order: ";
            for (int i = vec.size() - 1; i >= 0; --i) {
                cout << vec[i] << " ";
            }
        }
        void display() {
            cout << "Vector: ";
            for (int i = 0; i < vec.size(); ++i) {
                cout << vec[i] << " ";
            }
        }
};
int main(){
    Vector v1 (5); // Create a vector of size 5};
    int number;
    cout<<"Please entre -1 If you want to print the vector in reverse order"<<endl;
    cout<<"Please entre 0 If you want to print the vector in normal order"<<endl;
    if(number == -1){
        v1.display_reverse();
    }else if(number == 0){
        v1.display();
    }else{
        cout<<"Please entre a valid number"<<endl;
    }
    return 0;
}