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

    //MAIN MENU
    int choice;
    cout << "==================================" << endl;
    cout << " LAB 7: LOOP FUNDAMENTALS " << endl;
    cout << "==================================" << endl;
    cout << "1. Exercise 1: Health Regeneration" << endl;
    cout << "2. Exercise 2: Level Up Stats" << endl;
    cout << "3. Exercise 3: Inventory System" << endl;
    cout << "4. Run All Exercises" << endl;
    cout << "5. Exit" << endl;
    cout << "==================================" << endl;

    cout << "Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            exercise1_healthRegen();
            break;

        case 2:
            exercise2_levelUpStats();
            break;

        case 3:
            exercise3_inventorySystem();
            break;

        case 4:
            exercise1_healthRegen();
            cout << endl;
            exercise2_levelUpStats();
            cout << endl;
            exercise3_inventorySystem();
            break;

        case 5:
            cout << "Goodbye!" << endl;
            break;

        default:
        cout << "Invalid choice!" << endl;
    }
        return 0;
}


void exercise1_healthRegen() {

    cout << "EXCERCISE 1 HEALTH REGENERATION";
    cout << "-------------------------------";

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
    cout << "Fully rested.\n\n" << endl;    
}

void exercise2_levelUpStats() {
    cout << "\nEXERCISE 2: LEVEL UP STATS\n";
    cout << "--------------------------\n";

    // Base stats at level 0
    const int BASE_STR = 10;
    const int BASE_DEX = 8;
    const int BASE_INT = 12;

    // TODO: Display table header
    cout << "\nLevel |  STR  |  DEX  |   INT" << endl;
    cout << "------|-------|-------|-------" << endl;

    // TODO: Implement your for loop here
    for (int level = 1; level <= 10; level++)
    {
        int strength = 10 + (level * 2);
        int dexterity = 8 + (level * 3);
        int intelligence = 12 + (level * 1);

        cout << "   " << level << "  |  " << strength << "   |  " << dexterity << "   |   " << intelligence << endl;
    }

    // Level 10 stats:
    int finalStr = 10 + (10 * 2); // = 30
    int finalDex = 8 +  (10 * 3); // = 38
    int finalInt = 12 + (10 * 1); // = 22

    // Level 1 stats:
    int startStr = 10 + (1 * 2);  // = 12
    int startDex = 8 +  (1 * 3);  // = 11
    int startInt = 12 + (1 * 1);  // = 13

    // Growth:
    int strGrowth = finalStr - startStr;
    int dexGrowth = finalDex - startDex;
    int intGrowth = finalInt - startInt;
    cout << "Total Growth: STR +" << strGrowth << ", DEX +" << dexGrowth << ", INT +" << intGrowth << endl << endl;

}

void exercise3_inventorySystem() {

    cout << "\nEXERCISE 3: INVENTORY SYSTEM\n";
    cout << "----------------------------\n\n";

    string equipment[6] = 
    {
    "Flat Soda",
    "Rubber Band",
    "Safety Helmet",
    "Key Card",
    "Gross Lunch",
    "Old Shoe"
    };

    cout << "=== YOUR INVENTORY ===" << endl;
    for (int i = 0; i < 6; i++) {
        cout << (i + 1) << ". " << equipment[i] << endl;
        // ^^^^^^^
        // Add 1 so users see 1-6 instead of 0-5
    }

    string searchTerm;
    cout << "Enter item to search for: ";
    cin.ignore(); // Important! Clears leftover newline
    getline(cin, searchTerm);

    bool found = false;
    int position = -1;
    for (int i = 0; i < 6; i++) 
    {
        if (equipment[i] == searchTerm) 
        {
            found = true;
            position = i;
            break; // Stop looking once we find it
        }
    }

    if (found) {
        cout << "Found \"" << searchTerm << "\" in slot "
        << (position + 1) << "!" << endl;
        // ^^^^^^^^^^^^^
        // Add 1 to show users slot 1-6 instead of 0-5
    } 
    else {
        cout << "\"" << searchTerm << "\" not found in inventory." << endl;
    }
}

