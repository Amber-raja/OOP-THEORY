#include <iostream>
#include <string>
#include <vector>
using namespace std;

class bankAccount
{
protected:
    int accountNumber;
    int balance;

public:
    bankAccount(int acc = 0, int b = 0)
    {
        accountNumber = acc;
        balance = b;
    }
    void setAccountNumber(int acc)
    {
        accountNumber = acc;
    }
    int retrieveAccountNumber()
    {
        return accountNumber;
    }
    void setBalance(double b)
    {
        balance = b;
    }
    double retrieveBalance()
    {
        return balance;
    }

    void deposit(double amount)
    {
        balance += amount;
    }
    void withdraw(double amount)
    {
        balance -= amount;
    }
    void printAccountInfo()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

class checkingAccount : public bankAccount
{
    double interestRate;
    double minimumBalance;
    double serviceCharges;

public:
    checkingAccount(double interestRate1 = 0.0, double minimumBalance1 = 0.0, double serviceCharges1 = 0.0)
    {
        interestRate = interestRate1;
        minimumBalance = minimumBalance1;
        serviceCharges = serviceCharges1;
    }
    void setInterestRate(double interestRate1)
    {
        interestRate = interestRate1;
    }
    double retrieveInterestRate()
    {
        return interestRate;
    }
    void setMinimumBalance(double minimumBalance1)
    {
        minimumBalance = minimumBalance1;
    }

    double retrieveMinimumBalance()
    {
        return minimumBalance;
    }

    void setServiceCharges(double serviceCharges1)
    {
        serviceCharges = serviceCharges1;
    }

    double retrieveServiceCharges()
    {
        return serviceCharges;
    }

    void postInterest()
    {
        double interest = retrieveBalance() * interestRate;
        deposit(interest);
    }
    bool verifyBalance()
    {
        if (retrieveBalance() < minimumBalance)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void writeCheck(double amount)
    {
        withdraw(amount);
    }
    void withdraw(double amount)
    {
        if (verifyBalance())
        {
            amount += serviceCharges;
        }
        bankAccount::withdraw(amount);
    }

    void printAccountInfo()
    {
        bankAccount::printAccountInfo();
        cout << "Interest Rate :  " << interestRate << endl;
        cout << "Minimum Balance  :  " << minimumBalance << endl;
        cout << "Service Charges :  " << serviceCharges << endl;
    }
};

class savingsAccount : public bankAccount
{
    double interestRate;

public:
    savingsAccount(double interestRate1 = 0.0)
    {
        interestRate = interestRate1;
    }
    void setInterestRate(double interestRate1)
    {
        interestRate = interestRate1;
    }
    double retrieveInterestRate()
    {
        return interestRate;
    }
    void postInterest()
    {
        double interest = retrieveBalance() * interestRate;
        deposit(interest);
    }
    void withdraw(double amount)
    {
        bankAccount::withdraw(amount);
    }
    void printAccountInfo()
    {
        bankAccount::printAccountInfo();
        cout << "Interest Rate: " << interestRate << endl;
    }
};

int main()
{

    checkingAccount c1(0.55, 6000, 50);
    c1.setAccountNumber(765449);
    c1.setBalance(6755);
    c1.printAccountInfo();
    c1.postInterest();
    c1.printAccountInfo();
    c1.writeCheck(500);
    c1.printAccountInfo();
    c1.withdraw(200);
    c1.printAccountInfo();

    savingsAccount s1(0.55);
    s1.setAccountNumber(77633);
    s1.setBalance(5000);
    s1.printAccountInfo();
    s1.postInterest();
    s1.printAccountInfo();
    s1.withdraw(500);
    s1.printAccountInfo();

    return 0;
}