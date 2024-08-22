#include <iostream>
using namespace std;

class Bankaccount {
private:
    double bankbalance;

public:
    Bankaccount() {
        bankbalance = 0.0;
    }

public:
    Bankaccount(double bankbalance) {
        bankbalance = bankbalance;
    }

public:
    Bankaccount(const Bankaccount& account) {
        bankbalance = account.bankbalance;
    }

    double getbankbalance() {
        return bankbalance;
    }
    void deduct(double amount) {
        bankbalance -= amount;
    }
};

int main() {
    Bankaccount account1;
    cout << "Account balance is:" << account1.getbankbalance() << endl;

    Bankaccount account2(1000.0);
    cout << "Account balance is:" << account2.getbankbalance() << endl;

    Bankaccount account3 = account2;
    account3.deduct(200.0);
    cout << "Account balance is:" << account3.getbankbalance() << endl;

    cout << "Balance of Account 2 is:" << account2.getbankbalance() << endl;
    return 0;
}