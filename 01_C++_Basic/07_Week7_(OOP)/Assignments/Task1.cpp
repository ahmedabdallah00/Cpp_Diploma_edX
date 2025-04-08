#include <iostream>
#include <string>
#include <vector>


using namespace std;
// Base class
class BnakAccount {
    protected:
        string account_number;
        double balance;
        double interest_rate;
    public:
       void set_balance(double b) {
            balance = b;
        }
        void set_interest_rate(double r) {
            interest_rate = r;
        }
        void Deposit(double amount) {
            balance += amount;
        }
        void Withdraw(double amount) {
            if (balance >= amount) {
                balance -= amount;
            } else {
                cout << "Insufficient balance." << endl;
            }
        }
        void set_account_number(string number) {
            account_number = number;
        }
        double get_balance() {
            return balance;
        }
        double get_interest_rate() {
            return interest_rate;
        }
        string get_account_number() {
            return account_number;
        }
        void Display() {
            cout<< "My Bank Account Name: "<< account_number<<endl;
            cout << "My balance is: " << balance << endl;
            cout << "My interest rate is: " << interest_rate << endl;
        }    
};

class SavingAccount: public BnakAccount{
    private:
        double interest_rate;
    public:    
    void calculate_interest() {
        balance += balance * interest_rate / 100;
        cout << "Interest added. New balance: " << balance << endl;
    }
};

// Derived class
class CheckingAccount : public BnakAccount {
    private:
        double transaction_fee;
    public:
        void set_transaction_fee(double limit) {
            transaction_fee = limit;
        }
        double get_transaction_fee() {
            return transaction_fee;
        }
        double deduct_Transaction_fee() {
            if (balance >= transaction_fee) {
                balance -= transaction_fee;
            } else {
                cout << "Insufficient balance to deduct transaction fee." << endl;
            }
            return balance;
        }
        void Display() {
            cout<< "My Bank Account Name: "<< account_number<<endl;
            cout << "My balance is: " << balance << endl;
            cout << "My interest rate is: " << interest_rate << endl;
            cout << "My overdraft limit is: " << transaction_fee << endl;
        }    
};

int main() {
    BnakAccount savingAccount;
    savingAccount.set_account_number("1234567890");
    savingAccount.set_balance(1000);
    savingAccount.set_interest_rate(5);
    savingAccount.Display();

    SavingAccount savingAccountObj;
    savingAccountObj.set_account_number("0987654321");
    savingAccountObj.set_balance(1000);
    savingAccountObj.set_interest_rate(5);
    savingAccountObj.calculate_interest();
    savingAccountObj.Display();

    CheckingAccount checkingAccount;
    checkingAccount.set_account_number("1122334455");
    checkingAccount.set_balance(2000);
    checkingAccount.set_interest_rate(3);
    checkingAccount.set_transaction_fee(50);
    checkingAccount.Display();
    
    cout << "Balance after deducting transaction fee: " << checkingAccount.deduct_Transaction_fee() << endl;
    
    return 0;
}