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
void taxi();
void hatShop();
void gameOver();

// **Main**
int main()
{
    cout << "START PLACEHOLDER TEXT" << endl;

    street();

    return 0;
}
// _____LOCATION FUNCTIONS_____

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
        cout << "Please choose 1 or 2!\n";
    }

}

// Merry go round scene
void merry_go_round()
{
    cout << "MERRYGOROUND" << endl;
    cout << "CHOICE 1 or 2? ";

    int ChoiceMGR;
    cin >> ChoiceMGR;

    if (ChoiceMGR == 1) 
    {
        cout << "PLACEHOLDER TEXT GOTO TAXI \n";
        taxi(); // take player to taxi function

    }  
    else if (ChoiceMGR == 2) {
        cout << "PLACEHOLDER TEXT GOTO WHITE ROOM \n";
        white_room(); // take player to white_room function

    }  
    else {
        cout << "Please choose 1 or 2!\n";
    }
}

// White room scene
void white_room()
{
    cout << "WHITE ROOM" << endl;
    cout << "CHOICE 1 or 2? ";

    int choiceWr;
    cin >> choiceWr;

    if (choiceWr == 1)
    {
        cout << "PLACEHOLDER TEXT DEATH \n";
        gameOver(); // take player to game over screen
    }
    else if (choiceWr == 2)
    {
        cout << "PLACEHOLDER TEXT GOTO HAT SHOP \n";
        hatShop(); // take player to hat shop function
    }
    else{
        cout << "Please choose 1 or 2! \n";
    }
}

// Taxi scene
void taxi()
{
    cout << "TAXI" << endl;
    cout << "CHOICE 1 or 2? ";

    int choiceTaxi;
    cin >> choiceTaxi;

    if (choiceTaxi == 1)
    {
        cout << "PLACEHOLDER TAXI DEATH \n";
        gameOver(); // Take player to game over screen
    }
    else if (choiceTaxi == 2)
    {
        cout << "PLACEHOLDER GET HOME WIN"; // Finish the game
    }
    else
    {
        cout << "Please choose 1 or 2! \n";
    }
}

// Hat Shop scene
void hatShop()
{
    cout << "HAT SHOP" << endl;
    cout << "CHOICE 1 or 2? ";

    int choiceHat;
    cin >> choiceHat;

    if (choiceHat == 1)
    {
        cout << "PLACEHOLDER HAT DEATH \n";
        gameOver(); // take player to game over screen
    }
    else if (choiceHat == 2)
    {
        cout << "PLACEHOLDER WIN GO HOME SORTA \n";
    }
    else 
    {
        cout << "Please choose 1 or 2! \n";
    }

}

// GAME OVER Screen
void gameOver()
{
    cout << "Game over!";
}