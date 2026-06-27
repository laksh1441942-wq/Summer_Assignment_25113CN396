#include <iostream>
using namespace std;

int main() {
    int balance = 10000;
    int pin, option;
    int withdrawAmount, depositAmount;
    cout << "Enter your PIN: ";
    cin >> pin;

    if (pin == 1234) { 
        do {
            cout << "\nATM Menu:\n";
            cout << "1. Check Balance\n";
            cout << "2. Withdraw\n";
            cout << "3. Deposit\n";
            cout << "4. Exit\n";
            cout << "Choose an option: ";
            cin >> option;

            switch (option) {
                case 1:
                    cout << "Your balance is $" << balance << endl;
                    break;
                case 2:
                    cout << "Enter the amount to withdraw: ";
                    cin >> withdrawAmount;
                    if (withdrawAmount <= balance) {
                        balance -= withdrawAmount;
                        cout << "Withdrawal successful. Remaining balance: $" << balance << endl;
                    } else {
                        cout << "Insufficient funds!" << endl;
                    }
                    break;
                case 3:
                    cout << "Enter the amount to deposit: ";
                    cin >> depositAmount;
                    balance += depositAmount;
                    cout << "Deposit successful. New balance: $" << balance << endl;
                    break;
                case 4:
                    cout << "Thank you for using the ATM. Goodbye!" << endl;
                    break;
                default:
                    cout << "Invalid option. Please try again." << endl;
                    break;
            }
        } while (option != 4);
    } else {
        cout << "Incorrect PIN. Access denied." << endl;
    }

    return 0;
}   