/*
CSC 134
M5LAB1
Lydia Loffert
11/5/2025
Uses "procedural programming"
*/

#include <iostream>
using namespace std;

// Function declarations
int  getPlayerChoice(int maxChoice); // let player choose options
void showChoices(string choice1, string choice2, string choice3);  // display the player choice menus
// Story choices
void game_start();
const int MAX = 3; // max possible choices per node
void merry_go_round();
void house(); // this was called "white_room" in the previous version, if error check if you accidentally called it that again
void taxi();
void waitRoom();
void office();
void gameOver();
void endCard();


// main()
int main() {
    /*
    int choice;
    int max = 3;
    showChoices("1","2","3");
    choice = getPlayerChoice(max);
    cout << "You chose: " << choice << endl;
    */
    // Start the game
    game_start();


    // ending
    return 0;
}

// Function definitions
/**
 * Get a valid choice from the player.
 * example: if maxChoice is 3, they can choose 1, 2, or 3.
 */
int getPlayerChoice(int maxChoice) {
    int choice;
    while (true) {
        cout << "\nYour choice: ";
        cin >> choice;
        // You can add extra validation if you want.

        // Validate range 
        if (choice >= 1 && choice <= maxChoice) {
            return choice; // same number they enter
        }

        cout << "Please choose between 1 and " << maxChoice << ".\n";
    }
}

void showChoices(string choice1, string choice2, string choice3) {
    // A quick menu. If a choice is empty ("") it's not shown
    // but there must always be at least one choice.
    // Example: showChoices("run","fight","hide");
    cout << "---- MAKE YOUR CHOICE ----" << endl;
    int num = 1;
    cout << num << ". " << choice1 << endl;
    num++;

    if (choice2 != "") {
        cout << num << ". " << choice2 << endl;
        num++;
    }

    if (choice3 != "") {
        cout << num << ". " << choice3 << endl;
        num++;
    }

}

//////////////////////////////////////////////////////////
// Story-related functions
// Each story choice leads to a new function
// with new text, and new choices.
//////////////////////////////////////////////////////////

// Game start
void game_start() {
    /* Every node of the story does this:
        - describe what's going on using the R"(message)" 
                cout method.
        - showChoices() with up to 3 strings included
        - getPlayerChoice() with the max set to up to 3
        - if statements to branch to other nodes

    */
   int choice;
   // R for Raw -- print every line as is until it ends
   cout << R"(You wake up on the side of the road, unsure of how you got there. There's no cars in sight. 
It's an empty street riddled with pot holes, one of which you are currently standing in. 
Unsure of how to get home, you look to the horizon and see a lone merry-go-round off in the 
distance, and far in the other direction is a small cube-like house.

First of all you step out of that pothole, but after that where do you go?
    
)";
    // show choices
    showChoices("The merry-go-round.",
                "The house",
                "PLACEHOLDER");
    // make choices
    choice = getPlayerChoice(MAX);
    // branch from here
    // in your program, call another story function!
    if (choice == 1) {
        cout << "You make your way north towards the merry-go-round.\n" << endl;
        merry_go_round(); //GOTO merry_go_round()
    }
    if (choice == 2) {
        cout << "You head towards the house.\n" << endl;
        house(); // GOTO house()
    }
    if (choice == 3) {
        cout << "PLACEHOLDER\n" << endl;
    }
}

void merry_go_round() {
    cout << R"(As you approach it you see it's a bit run down, and seems to be the only attraction here 
for miles. The only other person here is the attendant skulking by the ride, having a smoke. 
He regards you briefly but doesn't speak.

"Hello", You say, "I'm lost, could you tell me where I am?"

"Don't ask me, did you want to ride the merry-go-round?" He clearly doesn't seem to care 
much about your predicament. "It's only a quarter," he adds. "And it's not very fun." he 
adds again. As you're about to decline he cuts in a third time "-Also it's broken right now 
you can't ride it". He lets out a puff of smoke politely away from your face. "You can spin 
around in a circle here if you want though, and you can do it for free".

Well, wnat to humor him? 

)";

    showChoices("Spin around in a circle.",
                "PLACEHOLDER",
                "This guy's weird let's go back...");

    choice = getPlayerChoice(MAX);

    if (choice == 1) {
        cout << "You make your way north towards the merry-go-round.\n" << endl;
        merry_go_round(); //GOTO merry_go_round()
    }
    if (choice == 2) {
        cout << "You head towards the house.\n" << endl;
        house(); // GOTO house()
    }
    if (choice == 3) {
        cout << "PLACEHOLDER\n" << endl;
    }

}

void house() {
    cout << R"()";
}