#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
Claude's lost items game I think uses 3 major operations to work:
*A function to count the current items,
*A function to take a step
*A menu function to keep the gameplay loop looping
(Theres also an option to show the player what they have left but I think this doesn't affect gameplay, more for the player.)

*Stepping is the most complicated cause it is rolling dice sort of every time you do it, and flagging what falls (or in my
case what finger you lose).
*The counting, displaying and stepping actions also have to pass the boolean variables of each item/finger cause it carries 
over throughout the game.
*/

// Function to display the game title
void displayTitle() {
    cout << "================================\n";
    cout << "         PLACEHOLDER\n";
    cout << "================================\n\n";
}

// GIANT SPOT TO MESS WITH ACSII IN FUNCTIONS
/*
HAND ALTOGETHER:
    cout << "\n--- PLACEHOLDER ---\n";
    cout << "     _ _ _ _ \n";
    cout << "    | | | | |\n";
    cout << "_   | | | | |\n";
    cout << "\\ \\ | - - - |\n";
    cout << "\\          /\n";
    cout << " \\       /\n";
    cout <<    |     |\n\n";
*My hand is 7 lines... needs to vary 5 different ways each time

void displayHand(bool hasThumb, bool hasPointer, bool hasMiddle, bool hasRing, bool hasPinky) {

// Line 1
    cout << "     ";
    if (hasPointer) { cout << "_ "; } else { cout << "  ";}
    if (hasMiddle) { cout << "_ "; } else { cout << "  "; }
    if (hasRing) { cout << "_ "; } else { cout << "  "; }
    if (hasPinky) { cout << "_ \n"; } else { cout << "  \n"; }
 // Line 2   
}
// CLOSE
*/

// Function to display your hand *(This is the only code that's really mine, cause I wanted the ACSII to change w each finger)*
// Its a bit much... The only thing I could think of to make it draw dynamically was to generate line by line. there's
// probably a better way to do this.
void displayHand(bool hasThumb, bool hasPointer, bool hasMiddle, bool hasRing, bool hasPinky) {
/*
REFERENCE FOR FULL ASCII HAND:
    cout << "     _  _  _  _ \n";
    cout << "    | || || || |\n";
    cout << "_   | || || || |\n";
    cout << "\\ \\ |   - - -  |\n";
    cout << " \\             /\n";
    cout << "   \\          /\n";
    cout << "    |        |\n\n";
*/

// Line 1
    cout << "     ";
    if (hasPointer) { cout << "_  "; } else { cout << "   ";}
    if (hasMiddle) { cout << "_  "; } else { cout << "   "; }
    if (hasRing) { cout << "_  "; } else { cout << "   "; }
    if (hasPinky) { cout << "_  \n"; } else { cout << "  \n"; }
// Line 2
    cout << "    ";
    if (hasPointer) { cout << "| |"; } else { cout << "   ";}
    if (hasMiddle) { cout << "| |"; } else { cout << "   "; }
    if (hasRing) { cout << "| |"; } else { cout << "   "; }
    if (hasPinky) { cout << "| |\n"; } else { cout << "  \n"; }
// Line 3 (thumb begins on this line)
    if (hasThumb) { cout << "_   "; } else { cout << "    ";} 
    if (hasPointer) { cout << "| |"; } else { cout << " _ ";}
    if (hasMiddle) { cout << "| |"; } else { cout << " _ "; }
    if (hasRing) { cout << "| |"; } else { cout << " _ "; }
    if (hasPinky) { cout << "| |\n"; } else { cout << " _\n"; }
// Line 4
    if (hasThumb) { cout << "\\ \\ |"; } else { cout << "      |";} 

// rest is the same
    cout << "   - - -  |\n";
    cout << " \\             /\n";
    cout << "   \\          /\n";
    cout << "    |        |\n\n";
    cout << "----------------\n\n";
}

// Function to count how many items are left (L: I think this lets it know when there is nothing left so the game can end)
int countItems(bool hasThumb, bool hasPointer, bool hasMiddle, bool hasRing, bool hasPinky) {

    int count = 0; // count is loaded as zero but really starts at 5 because you have every finger/item at the beginning  
    /* ⬆️ *** Important note from claude *** is that this "int count = 0" happens EVERY time its called so it does a 
    recount every time, so no items are accidentally doubled if they haven't been lost yet. which sounds like something
     I would accidentally do in my code */
    
    // if hasThumb was false then it doesn't add one so count would be at 4, or 0 if all were false/lost
    if (hasThumb) {
        count = count + 1;
    }
    if (hasPointer) {
        count = count + 1;
    }
    if (hasMiddle) {
        count = count + 1;
    }
    if (hasRing) {
        count = count + 1;
    }
    if (hasPinky) {
        count = count + 1;
    }
    
    return count;
}

// Function to simulate taking a step
void takeStep(bool& hasThumb, bool& hasPointer, bool& hasMiddle, bool& hasRing, bool& hasPinky) {
    cout << "You take a step forward...\n";
    
    // Rolls for 30% chance to lose a finger
    int dropChance = rand() % 100 + 1;
    
    if (dropChance <= 30) {
        
        // Pick which finger is lost (only if you still have it)
        int attempts = 0;
        bool itemDropped = false;
        
        while (!itemDropped && attempts < 20) {
            int whichItem = rand() % 5 + 1;
            
            switch (whichItem) {
                case 1:
                    if (hasThumb) {
                        hasThumb = false;
                        cout << "YEOWCH! There goes your thumb\n";
                        itemDropped = true;
                    }
                    break;
                case 2:
                    if (hasPointer) {
                        hasPointer = false;
                        cout << "YEOWCH! There goes your pointer finger\n";
                        itemDropped = true;
                    }
                    break;
                case 3:
                    if (hasMiddle) {
                        hasMiddle = false;
                        cout << "YEOWCH! There goes your middle finger\n";
                        itemDropped = true;
                    }
                    break;
                case 4:
                    if (hasRing) {
                        hasRing = false;
                        cout << "YEOWCH! There goes your ring finger\n";
                        itemDropped = true;
                    }
                    break;
                case 5:
                    if (hasPinky) {
                        hasPinky = false;
                        cout << "YEOWCH! There goes your pinky finger\n";
                        itemDropped = true;
                    }
                    break;
            }
            attempts = attempts + 1;
        }
    } else {
        cout << "It just missed you- You're safe!\n";
    }
}

// Function to display the menu
int getMenuChoice() {
    int choice;
    
    cout << "\nWhat would you like to do?\n";
    cout << "1. Take a step\n";
    cout << "2. Check your hand\n";
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
    bool hasThumb = true;
    bool hasPointer = true;
    bool hasMiddle = true;
    bool hasRing = true;
    bool hasPinky = true;
    
    int choice;
    bool playing = true;
    
    displayTitle();
    cout << "PLACEHOLDER\n";

    
    // Main game loop
    while (playing) {
        int itemsLeft = countItems(hasThumb, hasPointer, hasMiddle, hasRing, hasPinky);
        
        // Check if all items are lost
        if (itemsLeft == 0) {
            cout << "\n================================\n";
            cout << "GAME OVER! You lost all your fingers!\n";
            cout << "================================\n";
            playing = false;
        } else {
            choice = getMenuChoice();
            
            switch (choice) {
                case 1:
                    takeStep(hasThumb, hasPointer, hasMiddle, hasRing, hasPinky);
                    break;
                case 2:
                    displayHand(hasThumb, hasPointer, hasMiddle, hasRing, hasPinky);
                    cout << "Items remaining: " << itemsLeft << "/5\n";
                    break;
                case 3:
                    playing = false;
                    cout << "Thanks for playing!\n";
                    cout << "\nFinal Results:\n";
                    cout << "Items saved: " << itemsLeft << "/5\n";
                    displayHand(hasThumb, hasPointer, hasMiddle, hasRing, hasPinky);
                    break;
                default:
                    cout << "Invalid choice! Please enter 1, 2, or 3.\n";
            }
        }
    }
    
    return 0;
}
