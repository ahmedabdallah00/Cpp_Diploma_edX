#include <iostream>
#include <string>  

using namespace std;

class Account {
private:
    string name;
    int balance;
    static int account_count;
public:
    Account() {
        name = "";
        balance = 0;
        account_count++;
    }
    Account(string name, int balance) {
        this->name = name;
        balance>0? this->balance = balance: this->balance = 0;
        account_count++;
    }
    Account(const Account &account) {
        name = account.name;
        balance = account.balance;
    }  
    void setName(string name1) {
        name = name1;
    }
    void setBalance(int balance1) {
        balance1>0? balance = balance1: balance = 0;
    }
    string getName() const{
        return name;
    }
    int getBalance() const{
        return balance;
    }  
    
    static int getAccountCount() {
        return account_count;
    }
    void print_number_of_objects()
    {
        cout << "Number of objects created: " << account_count << endl;
    }
    ~Account() {
        cout<< this->name <<": Account destroyed"<<endl;
        account_count--;
    }

};
int Account::account_count = 0;

int main() {
    Account account1("Ahmed", 1000);
    Account account2("Ahmed", 1000);
    Account account3("Ahmed", 1000);
    Account *account4= new Account("Ahmed", 1000);
    Account *account5= new Account("Ahmed", 1000);

    cout << account1.getName() << " " << account1.getBalance() << endl;
    account3.print_number_of_objects();
    delete account4;
    account3.print_number_of_objects();
    
    return 0;
}