#include <iostream>
#include <string>
using namespace std;

class BankAccount 
{
private:
    int accountNumber;
    double balance;
    string customerName, email, phoneNumber;

public:
    // Constructor for BanK Account
    BankAccount(int accNum, double bal, string name, string email, string phone)
        : accountNumber(accNum), balance(bal), customerName(name), email(email), phoneNumber(phone) {}

    // Getters & Setters
    int getAccountNumber() { return accountNumber; }
    void setAccountNumber(int accNum) { accountNumber = accNum; }

    double getBalance() { return balance; }
    void setBalance(double bal) { balance = bal; }

    string getCustomerName() { return customerName; }
    void setCustomerName(string name) { customerName = name; }

    string getEmail() { return email; }
    void setEmail(string mail) { email = mail; }

    string getPhoneNumber() { return phoneNumber; }
    void setPhoneNumber(string phone) { phoneNumber = phone; }

    // Deposit Function
    void depositFunds(double amount)
    {
        balance += amount;
        cout << "Deposit of $" << amount << " successful. New balance: $" << balance << endl;
    }
    
    // Withdraw Function
    void withdrawFunds(double amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful."<< endl;
            cout << "New balance: $" << balance << endl;
        }
        else
        {
            cout << "Insufficient funds. Withdrawal of $" << amount << " not allowed." << endl;
        }
    }
};

class VipCustomer {
private:
    string name;
    double creditLimit;
    string emailAddress;

public:
    // Constructors
    VipCustomer() : name("random"), creditLimit(0.0), emailAddress("random@random.com") {}

    VipCustomer(string n, double limit) : name(n), creditLimit(limit), emailAddress("random@random.com") {}

    VipCustomer(string n, double limit, string email) : name(n), creditLimit(limit), emailAddress(email) {}

    // Getters
    string getName() { return name; }
    double getCreditLimit() { return creditLimit; }
    string getEmailAddress() { return emailAddress; }
};

int main()
{
    BankAccount account(123456, 1000.0, "Muhammad Haris", "moharisofficial@gmail.com", "03256281425");

    cout << "Customer Name: " << account.getCustomerName() << endl;
    cout << "Customer Phone No: " << account.getPhoneNumber() << endl;
    cout << "Customer Email: " << account.getEmail() << "\n" << endl;

    cout << "Prior Balance: $" << account.getBalance() << endl;
    account.depositFunds(500.0);
    account.withdrawFunds(200.0);


    VipCustomer vip1("Muhammad Hammad", 5000.0);
    cout << "VIP Customer Name: " << vip1.getName() << endl;
    cout << "VIP Credit Limit: $" << vip1.getCreditLimit() << endl;
    cout << "VIP Email Address: " << vip1.getEmailAddress() << "\n" << endl;

    VipCustomer vip2("Muhammad Usama", 10000.0, "usama@gmail.com");

    cout << "VIP Customer Name: " << vip2.getName() << endl;
    cout << "VIP Credit Limit: $" << vip2.getCreditLimit() << endl;
    cout << "VIP Email Address: " << vip2.getEmailAddress() << "\n" << endl;

    return 0;
}
