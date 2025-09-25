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
void waitRoom();
void gameOver();
void office();

// **Main**
int main()
{
    cout << "You wake up on the side of the road, unsure of how you got there. There's no cars in sight. It's an empty \n";
    cout << "street riddled with pot holes, one of which you are currently standing in. \n\n";

    street();

    return 0;
}
// _____LOCATION FUNCTIONS_____

// The street (starting place)
void street()
{
    cout << "Unsure of how to get home, you look to the horizon and see a lone merry-go-round off in the distance, and\n";
    cout << "far in the other direction is a cube-like house. \n\n";
    cout << "First of all you step out of the pothole, but after that where do you go? \n\n";

    //Player chooses action
    cout << "(Press 1 or 2:)\n";
    cout << "(1)The merry-go-round  (2)The house \n";

    int ChoiceSt;
    cin >> ChoiceSt;

    if (ChoiceSt == 1) // go to merry go round
    {
        cout << "\nYou make your way north towards the merry-go-round. \n\n";
        merry_go_round(); // take player to merry_go_round function

    }  
    else if (ChoiceSt == 2) // go to house
    {
        cout << "\nYou head towards the house. \n\n";
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
        cout << "PLACEHOLDER TEXT GOTO WAITING RM \n";
        waitRoom(); // take player to waitRoom function
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

// Waiting Room scene
void waitRoom()
{
    cout << "\nYou squirm out onto what looks to be the floor of a waiting room, which you don't remember seeing from the \n"; 
    cout << "outside of the building. In it's center is a large fountain, and sifting around in it is a woman, she seems\n";
    cout << "to be looking for something.\n\n";

    cout << "\"I'm sorry, I seem to be lost, do you know where this is?\" You ask her, but she barely looks up, \"I'm \n";
    cout << "waiting on my appointment- do you have a quarter? I wanna make a wish\"\n\n";

    cout << "\"I don't have any money\" You inform her. She continues her search, \"Well then how'd you get an appointment?\".\n\n"; 

    cout << "\"Lady I just came in through that dog door I don't know what to tell you\". She didn't either. You sit down\n";
    cout << "in one of the waiting room chairs and tuck your hands into your pockets, where you feel something metallic.\n";
    cout << "Okay apparently you do have a quarter.\n\n";
    cout << "Throw it into the fountain?\n";
    cout << "(Press 1 or 2:)\n\n";
    cout << "(1) Sure (2) Let's just leave her be\n";

    int choiceWRm;
    cin >> choiceWRm;

    if (choiceWRm == 1) // Throw coin
    {
       cout << "\nYou give the quarter a well aimed toss towards the fountain, which the woman notices and quickly positions\n"; 
       cout << "herself in its way in time for the quarter to hit her on the head. \"Ow!\" she yelps. You're not sure why she\n"; 
       cout << "did that. She picks up your coin and presents it back at you \"Look I just found one\", and proceeds to toss it\n";
       cout << "into its originally intended destination: the fountain.\n\n"; 

       cout << "\"Well to tell you the truth that was all I really wanted to do here, if you don't have an appointment just\n";
       cout << "take mine- See you around!\" She gets down on all fours and crawls away through the doggy door you came in\n";
       cout << "from, trailing water behind her from the fountain.\n\n";

       cout << "You don't really want her appointment, but when a woman's name is called and a door at the end of the waiting\n";
       cout << "room is opened, you wander in anyway.\n";
       office(); // take player to office scene
  
    }
    else if (choiceWRm == 2) // Don't throw coin
    {
        cout << "\nYou decide to hold onto your quarter and sit tight. You only have to wait for a moment before you hear your\n";
        cout << "being called on the intercom telling you to head into the office at the end of the waiting area. You obey,\n";
        cout << "not seeing anything better to do.\n\n";

        cout << "As you reach for the door handle however, it suddenly swings open and flattens you against the wall instantly.\n";
        cout << "It seems these doors open outward, and that someone very strong (or very angry) was on their way out.\n\n";
        gameOver(); // take player to game over screen
    }
    else 
    {
        cout << "Please choose 1 or 2! \n";
    }

}

// Office scene

void office()
{
    // It probably doesn't need to be its own function cause theres no choices/interaction, not sure
    cout << "\nInside waiting for you is a man holding up a newspaper large enough that you can't make out any part of his \n";
    cout << "body except the hands holding it up. \"Are you Mrs. Maxwell?\" he asks. \"I guess so sir\". \"Well here you are\n"; 
    cout << "then, I hope you enjoy the new property. Just take the way out behind me here and it'll be on your left in a\n";
    cout << "few miles\". He presents a pair of house keys and a property deed on the desk in front of you.\n\n";

    cout << "You take them both and exit through the office backdoor. It seems you never made it home but I guess you just \n";
    cout << "live here now. Its not so bad, Congratulations!\n";

}

// GAME OVER Screen
void gameOver()
{
    cout << "Sorry, Game over!";
}