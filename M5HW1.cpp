/*
M5HW1 - Silver
CSC 134
Lydia Loffert
11/3/2025
*/

#include <iostream>
#include <iomanip> // for setprecision
using namespace std;

int main() {

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
    cin >> rainfall1;

    cout << "\nEnter month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << " (in inches): ";
    cin >> rainfall1;

    
    // Calculate rainfall avergae restricted to 2 decimal points
    rainAvg = (rainfall1 + rainfall2 + rainfall3) / 3;
    cout << "\nThe average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << setprecision(2) << rainAvg << " inches.\n\n";

}





