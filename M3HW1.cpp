/*
CSC 134
M3HW1 - Silver
Lydia Loffert
10/8/2025
*/

#include <iostream>
using namespace std;

// *** QUESTION 1 CHAT BOT ***

void ChatBot() { // chatbot brace start
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
        cout << "///  _   _ \\\\\\ \n";
        cout << " |-[-]--[-]-|\n";
        cout << "(|    (     |)\n";
        cout << "  \\    __  /\n";
        cout << "   \\______/\n\n";

        cout << "Huh? What did you say?\n\n";
    } 

} //chatbot brace end


// *** QUESTION 3 CHOOSE YOUR OWN ADVENTURE ***
// using booleans?
void CYOA() {
    cout << "PLACEHOLDER START";
    
    cin >> Choice1;

}


// *** MAIN ***
int main() { // main brace start
    cout << "Question 1: Chat Bot:\n\n";
    ChatBot();

    cout << "Question 3: Choose Your Own Adventure:\n\n";
    CYOA();

    return 0;
} // main brace end
