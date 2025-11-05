/*
CSC 134
M5LAB1
Lydia Loffert
11/5/2025
Uses "procedural programming"
*/

#include <iostream>
using namespace std;

// Dunction declarations
int getPlayerChoice(int maxChoice); // let player choose options

// main()
int main() {
    int choice;
    int max = 3;
    cout << "TESTING: Choose 1, 2 , or 3." << endl;
    choice = getPlayerChoice(max);
    cout << "You chose: " << choice << endl;

    // ending
    return 0;
}

// Function definitions
/**
 * Get a valid choice from the player.
 *
 *
 */
int getPlayerChoice(int maxChoice) {
    int choice;
    while (true) {
        cout << "Your choice: ";
        cin >> choice; 

        // Validate range
        if (choice >= 1 && choice <= maxChoice) {
            return choice; // same number they enter
        }

        cout << "Please choose between 1 and " << maxChoice << ".\n";
    }
}