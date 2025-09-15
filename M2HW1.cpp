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
    cout << "Question 1" << endl;
    endl;
    // Get name from user
    cout << "Please enter your name:"
    cin << user_name;
}

void question2() {
    cout << "Question 2" << endl;
}

int main() {
    // Call each question as its own function

    question1();
    question2();

    cout << "Example of printing out correct money values" << endl;
    double cost = 8.5; // $8.50
    // magic words for 2 decimal places

    cout << setprecision(2) << fixed; // requires "#include <iomanip>"
    cout << "The cost is: $" << cost << endl;
    return 0; // no errors
}