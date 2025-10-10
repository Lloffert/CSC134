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

        cout << "Stuck in the Bathroom Simulator: \n\n";
        cout << "You're in a bathroom stall at the airport, and you're completely out of toilet paper.\n";
        cout << "Looking at the gaps between the stalls, it doesn't look like there's anyone to your \n";
        cout << "left, and on your right there's somebody in there but he's got no shoes on. What now?\n\n";


        cout << "(Type 1 or 2:)\n";
        cout << "(1) Peek over empty stall to see if there's paper (2) Ask the barefoot guy ";
        int Choice1;
        cin >> Choice1;

        if (Choice1 == 1) {
            cout << "\nYou stand up on the toilet to peek over the stall and Agh! There was somebody in\n"; // GAME OVER  
            cout << "there! He yelps and clobbers you over the head faster than you can apologize, and \n";
            cout << "I guess you die in there, from humiliation or head injury.\n\n";  
            cout << "** GAME OVER **\n\n";          
        }
        else if (Choice1 == 2) {
            cout << "\nYou hesitantly knock on the right-hand stall and ask for some toilet paper.\n\n";
            cout << "\"Yeah sure I got some\" he says, and from the left stall that you thought was empty\n";
            cout << "someone else says \"I got toilet paper\". Holy smokes there was somebody in there,\n";
            cout << "you're glad you didn't peek over!";
            Branch_2(); // GOTO BRANCH 2
        }
        else {
            cout << "PLEASE CHOOSE 1 OR 2!";
        }
    } // branch1 end

    void Branch_2()
    { // branch2 start


        cout << " Who's toilet paper do you choose?\n\n";
        cout << "(Type 1 or 2:)\n";
        cout << "(1) Normal guy (2) Barefoot guy ";
        int Choice2;
        cin >> Choice2;

        if (Choice2 == 1) { // BEAT THE GAME
            cout << "\nYou ask the man on the left for his paper and he passes it over. All three of you\n"; 
            cout << "flush and exit at the same time and make no eye contact as you wash your hands and\n";
            cout << "leave for your flight.\n\n";
            cout << "Good job getting out of there, you won!\n\n";
        }
        else if (Choice2 == 2) { // GAME OVER
            cout << "\nThe barefoot man passes something over and you hear both of the men flush and exit\n"; 
            cout << "the bathroom. Wait a minute he just gave you a crumpled up receipt! What are you\n";
            cout << "supposed to do with this?!\n\n";
            cout << "Sorry, looks like you're stuck in here until the next person comes in, hopefully you\n";
            cout << "don't miss your flight...\n\n";
            cout << "** GAME OVER **\n\n";
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
