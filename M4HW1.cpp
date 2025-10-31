/*
CSC 134
M4HW1 - Silver
Lydia Loffert
10/31/2025
Multiplication table (using loops)
*/

#include <iostream>
using namespace  std;

int main() {
    // ONLY need to do the 5 times table (so 5 x 1-12)
    // in a WHILE loop
    // 5 doesn't techincally have to chnage or be in a variable but I want to do silver so put it in a variable so i can change it easier
    // num1 doesnt need to change (5) but num2 WILL. a while loop will go until a condition changes
    // so it needs to go until num2 becomes 12
    // OK..............

    
    // ---------------
    // *** BRONZE ***
    // ---------------
    /*
    int num1 = 5;
    int num2 = 1;
    int answer;

    while (num2 <= 12) {

        cout << num1 << " times " << num2 << " is ";
        answer = num1 * num2;
        num2++;
        cout << answer << endl;
    }
    */

    // ---------------
    // *** SILVER ***
    // ---------------

    int num1;
    int num2 = 1;
    int answer;
    cout << "Enter a number from 1 to 12: ";
    cin >> num1;
    cout << endl;

    while (num2 <= 12) {

        cout << num1 << " times " << num2 << " is ";
        answer = num1 * num2;
        num2++;
        cout << answer << endl;
    }   
}

