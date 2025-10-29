/*
CSC 134
Lydia Loffert
10/28/2025
M5LAB - A
Learn some prompting and familiarity with loops, arrays, and functions
*/

#include <iostream>
#include <string>
using namespace std;



int main() {
    // TODO: Put healing code into its own function
    int maxHP = 100;
    int hp    = 10;
    const int healing = 10;

    // characters to show the health bar
    string full = "❤️ "; // Full block

    // Empty portion (remaining):
    string empty = "🖤";

    cout << "Resting until healed." << endl;
    while (hp < maxHP) {
        hp += healing;
        cout << "HP: " << hp << "/" << maxHP << endl;
        
        for (int i=0 ; i < hp/10; i++) {
            cout << full;
        }
        for (int i=0; i < (100-hp)/10; i++) {
            cout << empty;
        }
        cout << " HP: " << hp << "/" << maxHP << endl;
    }
    cout << "Fully rested." << endl;

}
