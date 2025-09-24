/*
M3LAB1
CSC 134
Lydia Loffert
9/24/2025
Making a prototype adventure game
*/

#include <iostream>
using namespace std;

// DECLARE ALL FUNCTIONS
// *locations/screens that will exist in the game*
void street();
void merry_go_round();
void white_room();
void gameOver();
void taxi();
void getHome();

// **Main**
int main()
{
    cout << "START PLACEHOLDER TEXT" << endl;

    street();

    return 0;
}
// LOCATION FUNCTIONS

// The street (starting place)
void street()
{
    cout << "STREET" << endl;
    cout << "CHOICE 1 or 2? ";

    int ChoiceSt;
    cin >> ChoiceSt;

    if (ChoiceSt == 1) 
    {
        cout << "PLACEHOLDER TEXT GOTO MERRYGOROUND \n";
        merry_go_round(); // take player to merry_go_round function

    }  
    else if (ChoiceSt == 2) {
        cout << "PLACEHOLDER TEXT GOTO WHITE ROOM \n";
        white_room(); // take player to white_room function

    }  
    else {
        cout << "Please choose 1 or 2!";
    }

}

// Merry go round scene
void merry_go_round()
{
    cout << "PLACEHOLDER MGR" << endl;
}

// White room scene
void white_room()
{
    cout << "PLACEHOLDER WHITE ROOM" << endl;
}
