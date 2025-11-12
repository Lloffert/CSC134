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

void exercise1_healthRegen();
void exercise2_levelUpStats();
void exercise3_inventorySystem();

int main() {
    exercise1_healthRegen();
}

void exercise1_healthRegen() {

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

void exercise2_levelUpStats() {
    
}

