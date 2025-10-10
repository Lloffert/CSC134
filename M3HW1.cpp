/*
CSC 134
M3HW1 - Silver
Lydia Loffert
10/8/2025
*/

#include <iostream>
using namespace std;

void pause() // second attempt at a pause feature to wait for user input before continuing
// This doesnt seem much better but I dont have to clear the cin every time like before
{
    string waitbox = "WAIT";

    while (waitbox == "WAIT") {
        cout << "\nType any letter to continue: \n";
        cin >> waitbox;
    }
    waitbox == "WAIT";
}

// *** QUESTION 1 CHAT BOT ***

void ChatBot() { // chatbot start
    string hatAnswer;
    cout << "   &&&&&&&&\n";
    cout << "&&&&&&&&&&&&&&\n";
    cout << "///        \\\\\\ \n";
    cout << " |-[.]--[.]-|\n";
    cout << "(|    (     |)\n";
    cout << "  \\    __  /\n";
    cout << "   \\______/\n\n";

    cout << "Hey man, do you like my new hat?\n"; // Ask user yes or no question
    cin >> hatAnswer;
    cout << endl;

    if (hatAnswer == "yes") { // user answers yes
        cout << "   &&&&&&&&\n";
        cout << "&&&&&&&&&&&&&&\n";
        cout << "///        \\\\\\ \n";
        cout << " |-[^]--[^]-|\n";
        cout << "(|    (     |)\n";
        cout << "  \\   ___< /\n";
        cout << "   \\______/\n\n";

        cout << "Gee thanks!\n\n";
    }
    else if (hatAnswer == "no") { // user answers no
        cout << "   &&&&&&&&\n";
        cout << "&&&&&&&&&&&&&&\n";
        cout << "/// \\    / \\\\\\ \n";
        cout << " |-[*]--[*]-|\n";
        cout << "(|    (     |)\n";
        cout << "  \\  ____  /\n";
        cout << "   \\______/\n\n";

        cout << "What?! Why not?! \n\n";
    }
    else { // users answer is unclear (typed nether yes or no)
        cout << "   &&&&&&&&\n";
        cout << "&&&&&&&&&&&&&&\n";
        cout << "/// _    _ \\\\\\ \n";
        cout << " |-[-]--[-]-|\n";
        cout << "(|    (     |)\n";
        cout << "  \\    __  /\n";
        cout << "   \\______/\n\n";

        cout << "Huh? What did you say?\n\n";
    } 

} // chatbot end


// *** QUESTION 3 CHOOSE YOUR OWN ADVENTURE ***

// *Note abt the function structure: If I define Branch2 first then Branch1 and call Branch1 in main to start it, it works
// without having to declare both at the top, but it looks really disorganized, not sure whats best practice so I declared
// them here ⬇ for readability. idk

    void Branch_1();
    void Branch_2();

    void Branch_1() 
    { // branch1 start

        cout << "\nPLACEHOLDER START\n\n";
        cout << "Type 1 or 2:\n";
        int Choice1;
        cin >> Choice1;

        if (Choice1 == 1) {
            cout << "\nPLACEHOLDER LOSE\n"; // GAME OVER              
        }
        else if (Choice1 == 2) {
            cout << "\nPLACEHOLDER NEXT\n\n";
            Branch_2(); // GOTO BRANCH 2
        }
        else {
            cout << "PLEASE CHOOSE 1 OR 2!";
        }
    } // branch1 end

    void Branch_2()
    { // branch2 start

        pause();
        cout << "PLACEHOLDER START\n\n";
        cout << "Type 1 or 2:\n";
        int Choice2;
        cin >> Choice2;

        if (Choice2 == 1) {
            cout << "PLACEHOLDER WIN"; // BEAT THE GAME
        }
        else if (Choice2 == 2) {
            cout << "PLACEHOLDER LOSE"; // GAME OVER
        }
        else {
            cout << "PLEASE CHOOSE 1 OR 2";
        }
    } // branch2 end


// *** MAIN ***
int main() { // main start
    cout << "=========================\n";
    cout << "  Question 1: Chat Bot:\n";
    cout << "=========================\n\n";
    ChatBot();

    pause();

    cout << "\n======================================\n";
    cout << "Question 3: Choose Your Own Adventure:\n";
    cout << "======================================\n\n";
    Branch_1();

    return 0;

} // main end
