/*
M3T2 - Craps Part 1
CSC 134
Lydia Loffert
9/22/2025
Beginning of craps game
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// DECLARE Helper functions (todo)
int roll();

// main
int main() {
/*
    int num = roll();
    cout << num << endl;

    - roll 2d6 (2-12)
    - branch based on win, lose, or point
    */
    int roll1 = 3;
    int roll2 = 5;
    int point;          // roll if it doesn't win/lose

    // Blatantly cheat
    cout << "Enter two dice (press ENTER between) ";
    cin >> roll1;
    cin >> roll2;
    int sum = roll1+roll2;

    // win on 7 or 11
    if( (sum == 7) || (sum == 11) ) {
        cout << "Seven or Eleven -- You win!" << endl;
    }

    // lose on 2, 3, 12
    else if ( (sum == 2) || (sum == 3) || (sum == 12 ) ) {
        cout << "2, 3, 12 -- Sorry you lose." << endl;
    }

    else {
        // set the point
        point = sum;
        cout << "Rolled a point." << endl;
        cout << "Your point is: " << point << endl;
    }

    return 0;
}
// DEFINE Helper functions
int roll() {
    // rolls a six sided die
    // TODO
    return 6;
}