#include <iostream>
using namespace std;

class BankAccount {
    static float annualInterestRate;
    float balance;

public:
    void calculateMonthlyInterest();
    BankAccount(float initialBalance);
    static void setInterestRate(float rate);
    void setBalance(float newBalance);
    void printBalance() const;
};

BankAccount::BankAccount(float initialBalance) {
    setBalance(initialBalance);
}

void BankAccount::calculateMonthlyInterest() {
    float interest = (balance * annualInterestRate) / 12;
    balance += interest;
}

void BankAccount::setBalance(float newBalance) {
    balance = newBalance;
}

void BankAccount::setInterestRate(float rate) {
    annualInterestRate = rate;
}

float BankAccount::annualInterestRate = 0;

void BankAccount::printBalance() const {
    cout << "The total balance after " << annualInterestRate << "% interest is RS: " << balance << endl;
}

int main() {
    BankAccount account1(3000.00), account2(2000.00);
    account1.setInterestRate(3);
    account1.calculateMonthlyInterest();
    account2.calculateMonthlyInterest();
    account1.printBalance();
    account2.printBalance();
    account1.setInterestRate(4);
    account1.calculateMonthlyInterest();
    account2.calculateMonthlyInterest();
    account1.printBalance();
    account2.printBalance();

    return 0;
}
