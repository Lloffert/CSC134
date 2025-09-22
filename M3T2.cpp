/*
M3T2 - Craps Part 1
CSC 134
Lydia Loffert
9/22/2025
Beginning of craps game
*/

#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

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
    int roll1;
    int roll2;
    int point;          // roll if it doesn't win/lose
    // Seed RNG before roll
    srand(time(0));


   // Roll the dice
    roll1 = roll();
    roll2 = roll();
    int sum = roll1+roll2;
    cout << "ROLL: " << sum << endl;

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
    int my_roll = (rand() % 6) + 1; // 1-6
    return my_roll;

}