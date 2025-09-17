/*
CSC 134
M2HW1 - Silver
Lydia Loffert
9/15/2025
*/

#include <iostream>
using namespace std;
#include <iomanip>

void question1() {
    //  set up the variables
    string user_name; 
    double acc_balance, deposit_amnt, withdrawal_amnt; // Account information
    long int acc_num = 16485743680;

    cout << "Question 1 \n" << endl;

    // Get name from user
    cout << "Please enter your name: ";
    getline(cin, user_name);
    cout << endl;

    // Ask user for account information
    cout << "What is your starting account balance? $";
    cin >> acc_balance;


    cout << "Amount of deposit: $";
    cin >> deposit_amnt;

    cout << "Amount of withdrawal $";
    cin >> withdrawal_amnt;

    // Calculate final balance variable with input numbers
    double final_balance = (acc_balance + deposit_amnt) - withdrawal_amnt;

    // Print out resulting account information
    cout << setprecision(2) << fixed; // Set 2 decimal places 

    cout << "______________________________\n\n";
    cout << user_name << ": \n";
    cout << "Account number : " << acc_num << endl;
    cout << "Account balance: $" << final_balance << endl;
    
}

void question2() {
    cout << "Question 2" << endl;
}

int main() {
    // Call each question as its own function

    question1();
    question2();

    /*
    cout << "Example of printing out correct money values" << endl;
    double cost = 8.5; // $8.50
    // magic words for 2 decimal places

    cout << setprecision(2) << fixed; // requires "#include <iomanip>"
    cout << "The cost is: $" << cost << endl;
    */

    return 0; // no errors
}