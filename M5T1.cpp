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

double double_a_number(double); // num times two

int main() {
    // This program does nothing useful
    double my_num;
    int    another_num;

    say_hello();
    cout << "Please enter a number (with or without decimal space)." << endl;
    cin >> my_num;

    //my_num = my_num * 2; (<-- old code)
    my_num = double_a_number(my_num); 
    cout << "Double the number is: " << my_num << endl;
    cout << "But the only answer you need is: ";
    cout << get_the_answer() << endl;
}

// Functions Definitions (the whole function!) go here

void say_hello() {

 // says hi
    cout << "Welcome!" << endl;
}

int get_the_answer() {

    // provides answer to everything
    return 42;
}

double double_a_number(double the_num) {
    // num times two
    double answer = the_num * 2;
    return answer;
}