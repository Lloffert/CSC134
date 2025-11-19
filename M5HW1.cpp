/*
M5HW1 - Bronze
CSC 134
Lydia Loffert
11/3/2025
*/

#include <iostream>
#include <iomanip> // for setprecision
using namespace std;

void Question1();
void Question2();
void Question3();

int main() {

    Question1();
    Question2();
    Question3();

    return 0;
}   

void Question1() {

    // Question 1: 
    // *Calculate average rainfall for three months,        
    // *asks user for the name of each month                $    
    // *ask amount of rain (in inches) that fell each month $
    // *display average (rounded to 2 decimal points)    

    cout << "QUESTION 1\n";
    cout << "----------\n\n";

    // rain variables
    string month1;
    string month2;
    string month3;
    double rainfall1;
    double rainfall2;
    double rainfall3;
    double rainAvg;

    // Get rainfall info from user
    cout << "Enter month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << " (in inches): ";
    cin >> rainfall1;

    cout << "\nEnter month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << " (in inches): ";
    cin >> rainfall2;

    cout << "\nEnter month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << " (in inches): ";
    cin >> rainfall3;

    
    // Calculate rainfall average restricted to 2 decimal points
    rainAvg = (rainfall1 + rainfall2 + rainfall3) / 3.0;
    cout << "\nThe average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << setprecision(3) << rainAvg << " inches.\n\n";

}

void Question2() {
/*
Write a program that calculates the volume of a three dimensional hypperrectangle.  
Ask the user to enter width, length, and height for the block. These values should be of type 
double. Calculate the volume of the block. 
Input Validation: no side can be zero or less. 
*/ 
    cout << "QUESTION 2\n";
    cout << "----------\n\n";

    // declare variables
    double width;
    double length;
    double height;
    double volume;

    // Get dimensions from user
    cout << "Enter rectangle width: ";
    cin >> width;
    if (width <= 0) {
        cout << "No side can be zero or less, please enter a valid dimension\n\n";
        Question2();
    }

    cout << "Enter rectangle length: ";
    cin >> length;
    if (length <= 0) {
        cout << "No side can be zero or less, please enter a valid dimension\n\n";
        Question2();
    }

    cout << "Enter rectangle height: ";
    cin >> height;
    if (height <= 0) {
        cout << "No side can be zero or less, please enter a valid dimension\n\n";
        Question2();
    }

    // calculate volume
    volume = length * width * height;
    cout << "The volume of the rectangle is: " << volume << " inches\n\n";

}

void Question3() {
    /*
    Write a program that asks the user to enter a number within the range of 1 through 10. Use either 
    if statements, or a switch statement, to display the Roman numeral version of that number.
    Input Validation: Do not accept a number less than 1 or greater than 10. 

    Sample Run
    Enter a number (1 - 10): 7↵
    The Roman numeral version of 7 us VII.↵
    */

    int userNum;

    cout << "Enter a number (1 - 10): ";
    cin >> userNum;

    // Switch to print corresponding roman numeral

    switch(userNum) {
        case 1:
            cout << "The Roman numeral version of " << userNum << " is I.\n\n";
            break;
        case 2:
            cout << "The Roman numeral version of " << userNum << " is II.\n\n";
            break;
        case 3:
            cout << "The Roman numeral version of " << userNum << " is III.\n\n";
            break;
        case 4:
            cout << "The Roman numeral version of " << userNum << " is IV.\n\n";
            break;
        case 5:
            cout << "The Roman numeral version of " << userNum << " is V.\n\n";
            break;
        case 6:
            cout << "The Roman numeral version of " << userNum << " is VI.\n\n";
            break;
        case 7:
            cout << "The Roman numeral version of " << userNum << " is VII.\n\n";
            break;
        case 8:
            cout << "The Roman numeral version of " << userNum << " is VIII.\n\n";
            break;
        case 9:
            cout << "The Roman numeral version of " << userNum << " is IX.\n\n";
            break;   
        case 10:
            cout << "The Roman numeral version of " << userNum << " is X.\n\n";
            break;
        
    }

}







