/*
M3LAB2 - Letter Grades (changed to Game Mechanics Test)
CSC 134 
Lydia Loffert
9/29/2025
*/

#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

using namespace std;

// DECLARE the functions here
void letter_grader();
void combat();

int main()
{

    letter_grader();
    // combat;
    return 9;
}

// DEFINE the other functions here

void letter_grader() {
    // input a number grade
    // respond with a letter grade
    double num_grade;
    string letter_grade;
    cout << "Enter a number grade 0-100 ";
    cin >> num_grade;

    // Create the if statements
    letter_grade = "A";

    // Output the answer
    cout << "A number grade of " << num_grade << " is: " << letter_grade;
    cout << endl << endl;
    
}