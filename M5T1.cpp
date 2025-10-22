/*
CSC 134
M5T1 - Basic Functions
Lydia Loffert
10/22/2025

Purpose: Demo void and value-returning functions
*/

// Function declarations (Definitions are at the bottom)

#include <iostream>
using namespace std;

void say_hello(); // says hi

int get_the_answer(); // provides answer to everything

double double_a_number(); // num times two

int main() {
    // This program does nothing useful
    double my_num;
    int    another_num;

    cout << "Welcome!" << endl;
    cout << "Please enter a number (with or without decimal space)." << endl;
    cin >> my_num;
    my_num = my_num * 2;
    cout << "Double the number is: " << my_num << endl;
}