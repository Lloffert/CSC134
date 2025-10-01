#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to display the game title
void displayTitle() {
    cout << "================================\n";
    cout << "         PLACEHOLDER\n";
    cout << "================================\n\n";
}

/*
// Function to display the game title
void displayTitle() {
    cout << "================================\n";
    cout << "    LOST ITEMS ADVENTURE\n";
    cout << "================================\n\n";
}

// Function to display current items in bag
void displayBag(bool hasWatch, bool hasKey, bool hasPhone, bool hasWallet, bool hasCoin) {
    cout << "\n--- YOUR BAG ---\n";
    
    if (hasWatch) {
        cout << "1. Watch\n";
    } else {
        cout << "1. Watch (LOST!)\n";
    }
    
    if (hasKey) {
        cout << "2. Key\n";
    } else {
        cout << "2. Key (LOST!)\n";
    }
    
    if (hasPhone) {
        cout << "3. Phone\n";
    } else {
        cout << "3. Phone (LOST!)\n";
    }
    
    if (hasWallet) {
        cout << "4. Wallet\n";
    } else {
        cout << "4. Wallet (LOST!)\n";
    }
    
    if (hasCoin) {
        cout << "5. Lucky Coin\n";
    } else {
        cout << "5. Lucky Coin (LOST!)\n";
    }
    
    cout << "----------------\n\n";
}

// Function to count how many items are left (L: I think this lets it know when there is nothing left so the game can end)
int countItems(bool hasWatch, bool hasKey, bool hasPhone, bool hasWallet, bool hasCoin) {
    int count = 0;
    
    if (hasWatch) {
        count = count + 1;
    }
    if (hasKey) {
        count = count + 1;
    }
    if (hasPhone) {
        count = count + 1;
    }
    if (hasWallet) {
        count = count + 1;
    }
    if (hasCoin) {
        count = count + 1;
    }
    
    return count;
}

// Function to simulate taking a step
void takeStep(int& steps, bool& hasWatch, bool& hasKey, bool& hasPhone, bool& hasWallet, bool& hasCoin) {
    cout << "You take a step forward...\n";
    steps = steps + 1;
    
    // 30% chance to drop an item
    int dropChance = rand() % 100 + 1;
    
    if (dropChance <= 30) {
        cout << "Oh no! Something fell out of your bag!\n";
        
        // Pick which item to drop (only if you still have it)
        int attempts = 0;
        bool itemDropped = false;
        
        while (!itemDropped && attempts < 20) {
            int whichItem = rand() % 5 + 1;
            
            switch (whichItem) {
                case 1:
                    if (hasWatch) {
                        hasWatch = false;
                        cout << "*** You lost your WATCH! ***\n";
                        itemDropped = true;
                    }
                    break;
                case 2:
                    if (hasKey) {
                        hasKey = false;
                        cout << "*** You lost your KEY! ***\n";
                        itemDropped = true;
                    }
                    break;
                case 3:
                    if (hasPhone) {
                        hasPhone = false;
                        cout << "*** You lost your PHONE! ***\n";
                        itemDropped = true;
                    }
                    break;
                case 4:
                    if (hasWallet) {
                        hasWallet = false;
                        cout << "*** You lost your WALLET! ***\n";
                        itemDropped = true;
                    }
                    break;
                case 5:
                    if (hasCoin) {
                        hasCoin = false;
                        cout << "*** You lost your LUCKY COIN! ***\n";
                        itemDropped = true;
                    }
                    break;
            }
            attempts = attempts + 1;
        }
    } else {
        cout << "Your bag is secure. Nothing fell out!\n";
    }
}

// Function to display the menu
int getMenuChoice() {
    int choice;
    
    cout << "\nWhat would you like to do?\n";
    cout << "1. Take a step\n";
    cout << "2. Check your bag\n";
    cout << "3. Quit game\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;
    cout << "\n";
    
    return choice;
}

int main() {
    // Seed the random number generator
    srand(time(0));
    
    // Track which items player has
    bool hasWatch = true;
    bool hasKey = true;
    bool hasPhone = true;
    bool hasWallet = true;
    bool hasCoin = true;
    
    int steps = 0;
    int choice;
    bool playing = true;
    
    displayTitle();
    cout << "You're walking home with 5 items in your bag.\n";
    cout << "Be careful! Items might fall out as you walk!\n";
    cout << "Try to keep as many items as possible!\n";
    
    // Main game loop
    while (playing) {
        int itemsLeft = countItems(hasWatch, hasKey, hasPhone, hasWallet, hasCoin);
        
        // Check if all items are lost
        if (itemsLeft == 0) {
            cout << "\n================================\n";
            cout << "GAME OVER! You lost all your items!\n";
            cout << "You took " << steps << " steps.\n";
            cout << "================================\n";
            playing = false;
        } else {
            choice = getMenuChoice();
            
            switch (choice) {
                case 1:
                    takeStep(steps, hasWatch, hasKey, hasPhone, hasWallet, hasCoin);
                    break;
                case 2:
                    displayBag(hasWatch, hasKey, hasPhone, hasWallet, hasCoin);
                    cout << "Items remaining: " << itemsLeft << "/5\n";
                    cout << "Steps taken: " << steps << "\n";
                    break;
                case 3:
                    playing = false;
                    cout << "Thanks for playing!\n";
                    cout << "\nFinal Results:\n";
                    cout << "Steps taken: " << steps << "\n";
                    cout << "Items saved: " << itemsLeft << "/5\n";
                    displayBag(hasWatch, hasKey, hasPhone, hasWallet, hasCoin);
                    break;
                default:
                    cout << "Invalid choice! Please enter 1, 2, or 3.\n";
            }
        }
    }
    
    return 0;
}
*/