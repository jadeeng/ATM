#include <iostream>

using namespace std;

int main() {
    string username = "Jane Doe";
    double balance = 200, deposit = 0.0, withdraw = 0.0;
    int pinNumber = 0000, response = 1, endProgram = 0;
    cout << "Welcome to the ATM Machine. Please create an account before proceeding. Enter your desired username.\n";
    cin >> username;
    cout << "Enter a four digit pin number that you'd like to access your account with.\n";
    cin >> pinNumber;

    cout << "What would you like to do? Type '1' to withdraw, '2' to deposit, '3' to check balance, and '4' to check information on your account.\n";
    cin >> response;
    while (endProgram == 0) {
        switch (response) {
        case 1:
            int withdraw;
            cout << "Please enter amount to withdraw: ";
            cin >> withdraw;
            if (withdraw > balance) {
                cout << "There are insuffient funds in your account\n";

            }
            else {
                balance = balance;
                balance = balance - withdraw;

                cout << "You have withdrawn " << withdraw << " and your new balance is " << balance << ".\n";

            }
            break;

        case 2:

            int deposit;
            cout << "Please enter amount to deposit: ";
            cin >> deposit;

            balance = balance;
            balance = deposit + balance;

            cout << "Thank you for depositing, new balance is: " << balance << "\n";


            break;

        case 3:
            balance = balance;
            cout << "Your bank balance is: " << balance << "\n";


            break;
        case 4:
            cout << "Your username is: " << username << " and your pin is " << pinNumber << ".\n";

        }cout << "Would you like to make another transaction? Type 0 to continue and 1 to stop.";
        cin >> endProgram;
        if (endProgram == 0) {
            cout << "What would you like to do? Type '1' to withdraw, '2' to deposit, '3' to check balance, and '4' to check information on your account.\n";
            cin >> response;
        }
    }


    return 0;

}

