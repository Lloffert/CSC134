/*
M4LAB1
Lydia Loffert
10/6/2025
Learning loop concepts
*/

#include <iostream>
using namespace std;

// DECLARE ALL FUNCTIONS
void exercise1_healthRegen();
void exercise2_levelUpStats();
void exercise3_inventorySystem();

int main() {
    cout << " __________________________\n\n";
    cout << "|     M4LAB1 C++ LOOPS     |\n";
    cout << " __________________________\n\n";
    cout << "1. Exercise 1: Health Regeneration" << endl;
    cout << "2. Exercise 2: Level Up Stats" << endl;
    cout << "3. Exercise 3: Inventory System" << endl;
    cout << "4. Run All Exercises" << endl;
    cout << "5. Exit\n\n";
    cout << "Choose an excercise: (1-5)" << endl;
    int choice;
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

    // "HEALTH REGENERATION" Make some type of stat increase until a buffering point where it stops
    void exercise1_healthRegen() {
        cout << "PLACEHOLDER (Health regen)";
    }

    // "LEVEL UP STATS" Make/Display how character stats increase. I dont get this one yet.
    void exercise2_levelUpStats() {
        cout << "PLACEHOLDER (level up stats)";
    }

    // "INVENTORY SYSTEM" Search for item in ARRAY (which is like a index/list?) and display it back in cout so player knows whats
    // in there and can choose by table of contents. It parses for the item in a loop until it finds it
    void exercise3_inventorySystem() {
        cout << "PLACEHOLDER (inventory system)";
    }
