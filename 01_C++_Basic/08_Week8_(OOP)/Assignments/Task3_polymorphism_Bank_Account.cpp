#include <iostream>
#include <string>
#include <vector>

using namespace std;
// Base class
class Account{
    protected:
        int accountNumber;
        string accountHolder;
        double balance;
    public:
    Account(int n,string h,double b): accountNumber(n),accountHolder(h),balance(b){}
    void setaccountNumber(int n)
    {
        accountNumber=n;
    }
    int getaccountNumber()
    {
        return accountNumber;
    }
    void setaccountHolder(string h)
    {
        accountHolder=h;
    }
    string getaccountHolder()
    {
        return accountHolder;
    }
    void getbalance(double b)
    {
        balance=b;
    }
    double setbalance()
    {
        return balance;
    }
    virtual void depoist(double amount)
    {
        balance += amount;
    }
    virtual void withdraw(double amount)
    {
        balance -= amount;
    }   
    virtual void display()
    {
        cout <<"Account Number: "<<accountNumber<<endl;
        cout <<"Account Holder: "<<accountHolder<<endl;
        cout <<"Balance: $"<<balance<<endl;
    }

};
//Derived class
class SavingAccount: public Account{
    private:
        double interestRate;
    public:   
    SavingAccount(int n,string h,double b,double i=0.0) : Account(n,h,b), interestRate(i) {}
    void setinterestRate(double i){
        interestRate=i;
    }
    double getinterestRate()
    {
        return interestRate;
    }
    void calculateInterset()
    {
        balance += balance * (interestRate / 100);
        cout<<"Interest calculated and added. New Balance: $"<<balance<<endl;
    }
    void display() override{
        Account::display();
    }
};
class CheckingAccount : public Account {
    private:
        double transaction_fee;
    public:
        CheckingAccount(int n, string h, double b, double fee = 0.0) : Account(n, h, b), transaction_fee(fee) {}

        void set_transaction_fee(double limit) {
            transaction_fee = limit;
        }
        double get_transaction_fee() {
            return transaction_fee;
        }
        void deduct_Transaction_fee() {
            if (balance >= transaction_fee) {
                balance -= transaction_fee;
                cout<<"Transaction fee deducted. New Balance: $"<<balance<<endl;
            } else {
                cout << "Insufficient balance to deduct transaction fee." << endl;
            }
        }
        void display() override {
            Account::display();
        }    
};
int main()
{
    vector<Account*> accounts;
    // Creating objects of derived classes
    accounts.push_back(new Account(100,"Ahmed",1000));
    accounts.push_back(new SavingAccount(101, "Ahmed", 1000.0)); // Account number, holder, balance, interest rate
    accounts.push_back(new CheckingAccount(201, "Mohamed", 1500.0));      // Account number, holder, balance
    
    accounts.at(0)->display();
    cout<<endl;
    
    accounts.at(1)->display();
    dynamic_cast<SavingAccount*>(accounts.at(1))->setinterestRate(0.25);
    dynamic_cast<SavingAccount*>(accounts.at(1))->calculateInterset();
    accounts.at(1)->display();
    cout<<endl;
    
    accounts.at(2)->display();
    dynamic_cast<CheckingAccount*>(accounts.at(2))->set_transaction_fee(202.0);
    dynamic_cast<CheckingAccount*>(accounts.at(2))->deduct_Transaction_fee();
    accounts.at(2)->display();
    cout<<endl;
    return 0;
}