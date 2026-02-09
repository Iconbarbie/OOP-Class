#include <iostream>
using namespace std;


class AccountHolder {
protected:
    string name;

public:
    AccountHolder(string n = "") {
        name = n;
    }

    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }
};


class BankAccount : public AccountHolder {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(string n, int accNo, double bal)
        : AccountHolder(n) {
        accountNumber = accNo;
        balance = bal;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    double getBalance() {
        return balance;
    }
};
// for this class

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(string n, int accNo, double bal, double rate)
        : BankAccount(n, accNo, bal) {
        interestRate = rate;
    }

    double getInterestRate() {
        return interestRate;
    }
};


int main() {
    SavingsAccount sa("Barbara Happiness", 030022, 5000.0, 5.0);

    cout << "Account Holder Name: " << sa.getName() << endl;
    cout << "Account Number: "<< sa.getAccountNumber() << endl;
    cout << "Balance: " << sa.getBalance() << endl;
    cout << "Interest Rate: "  << sa.getInterestRate() <<"%"<< endl;

    return 0;
}