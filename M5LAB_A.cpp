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
    int hp    = 30;
    const int healing = 10;

    cout << "Resting until healed." << endl;
    while (hp < maxHP) {
        hp += healing;
        cout << "HP: " << hp << "/" << maxHP << endl;
        
    }
    cout << "Fully rested." << endl;

}
