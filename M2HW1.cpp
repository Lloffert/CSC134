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
    cout << "Question 2 \n" << endl;

    //  set up the variables
    double length, width, height; // size of crate
    double volume;
    double cost_to_make, charge_to_customer; // pricing 
    double profit;

    const double COST_PER_CUBIC_FOOT = 0.3; // relates to cost
    const double CHARGE_PER_CUBIC_FOOT = 0.52; // relates to charge

    // Get the crate info
    cout << "Welcome to the crate program. " << endl;
    cout << "Crate length: ";
    cin >> length;
    cout << "Crate width:  ";
    cin >> width;
    cout << "Crate Height: ";
    cin >> height;


    // Calculate the cost and prices
    volume = length * width * height;
    cost_to_make = volume * COST_PER_CUBIC_FOOT;
    charge_to_customer = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge_to_customer - cost_to_make;

    // Display the results
    cout << setprecision(2) << fixed; // Set 2 decimal places
    cout << endl;
    cout << "Your crate is " << volume << " cubic feet." << endl;
    cout << "Customer Price: $" << charge_to_customer << endl;
    cout << "Cost to build : $" << cost_to_make << endl;
    cout << "Profit        : $" << profit << endl;
}

void question3() {

}

int main() {
    // Call each question as its own function
    /*
    question1();
    cout << endl;

    question2();
    cout << endl;
    */
    question3();


    return 0; // no errors
}