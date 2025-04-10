#include <iostream>
#include <string>
#include <vector>
#include <memory>


using namespace std;
//class person
class Person{
    private:
       string name;
       int age;
    public:
       Person(string s,int a): name(s) ,age(a) {} 
       void Introduce()
       {
            cout<<"His Name : "<<name<<endl;
            cout<<"His Age : "<<age<<endl;
       }  
};

int main()
{
    //Raw Pointer
    Person* rawPtr = new Person("Alice", 30);
    rawPtr->Introduce();
    shared_ptr<Person> sharedPtr(rawPtr);
    unique_ptr<Person> uniquePtr(rawPtr); 
    //unique_ptr<Person> uniquePtr(rawPtr); // This will cause an error because rawPtr is already managed by sharedPtr
    sharedPtr->Introduce();
    sharedPtr.reset();
    uniquePtr.release(); 
    shared_ptr<Person> safeShared = make_shared<Person>("Bob", 25);
    weak_ptr<Person> weakPtr(safeShared);
    if(auto temp = weakPtr.lock()) {
        temp->Introduce();  // Valid access
    } else {
        cout << "Object already destroyed" << endl;
    }
    return 0;
}