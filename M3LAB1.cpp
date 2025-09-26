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
void office();
void gameOver();
void endCard();


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
    cout << "As you approach it you see it's a bit run down, and seems to be the only attraction here for miles. The only\n";
    cout << "other person here is the attendant skulking by the ride, having a smoke. He regards you briefly but doesn't\n";
    cout << "speak.\n\n";

    cout << "\"Hello\", You say, \"I'm lost, could you tell me where I am?\".\n\n";

    cout << "\"Don't ask me, did you want to ride the merry-go-round?\" He clearly doesn't seem to care much about your\n";
    cout << "predicament. \"It's only a quarter,\" he adds. \"And it's not very fun.\" he adds again. As you're about to\n";
    cout << "decline he cuts in a third time \"-Also it's broken right now you can't ride it\". He lets out a puff of smoke\n";
    cout << "politely away from your face \"You can spin around in a circle here if you want though, and you can do it for\n";
    cout << "free\".\n\n";

    cout << "Well, want to humor him?\n\n";
    cout << "(Press 1 or 2:)\n";
    cout << "(1) Spin around in a circle (2) This guy's weird let's go back...\n";

    int ChoiceMGR;
    cin >> ChoiceMGR;

    if (ChoiceMGR == 1) // spin in a circle
    {
        cout << "\nYou start spinning in a circle in front of the attendant, feeling slightly embarrassed but no more than you\n";
        cout << "did when you woke up here. But you start to spin too fast and make yourself sick. And then you throw up on the\n";
        cout << "ground in front of him.\n\n";

        cout << "\"Holy smokes!\" you hear him exclaim \"My keys!\" evidently not about the vomit. He bends over into your hunched\n";
        cout << "view and picks out a pair of car keys you seem to have thrown up. \"Hey man I've been looking everywhere for \n";
        cout << "these!\" He claps you on the back. \"Hey you said you were lost right? C'mon I'll give you a ride\".\n\n";

        taxi(); // take player to taxi function

    }  
    else if (ChoiceMGR == 2) // leave and go to house
    {
        cout << "\nYou hurry away from the attendant as fast as is possible without looking rude. Not seeing anywhere else to\n";
        cout << "go you make a U-turn towards the house you saw earlier across the street.\n\n";
        white_room(); // take player to white_room function

    }  
    else {
        cout << "Please choose 1 or 2!\n";
    }
}

// Taxi scene
void taxi()
{
    cout << "You find yourself being shuffled into the passenger seat of a Subaru Forester that was apparently parked\n";
    cout << "inconspicuously behind the merry-go-round. The man starts up the car with the disgusting keys and off you both go.\n\n";

    cout << "As you debate with yourself whether or not you should tell him your address or jump out the car, you see him remove\n";
    cout << "from his head what seems to be a rubbery human-faced mask, revealing beneath it a large gray bulbous head and even\n";
    cout << "larger black eyes. He glances over at you nonchalantly \"Whew, that thing's stuffy\".\n\n";

    cout << "Jump out the car? \n\n";
    cout << "(Press 1 or 2:)\n";
    cout << "(1) Yes (2) No\n";

    int choiceTaxi;
    cin >> choiceTaxi;

    if (choiceTaxi == 1) // Jump out car
    {
        cout << "\nOkay I mean you jumped out the car but it did kill you he was driving really fast. \n";
        gameOver(); // Take player to game over screen
    }
    else if (choiceTaxi == 2) // Stay in car
    {
        cout << "You stare in stunned silence at what is clearly an alien driving the car, who is currently struggling to light\n";
        cout << "another cigarette and steer the wheel at the same time. Unsure of what to say, you ask him why an alien would\n";
        cout << "be driving a car and not a flying saucer. \"It got repo'd.\" he tells you curtly. Now you just feel kind of bad\n";
        cout << "for him.\n\n"; 

        cout << "You never told him where you lived but apparently he already knows as the car has ground to a halt in front of\n";
        cout << "your apartment steps. \"Thanks again for the keys\" he tells you. \"You should really wash those.\" you say back,\n";
        cout << "but he just waves and drives off.\n\n";

        cout << "Which reminds you that you also don't have the keys to your apartment, but the landlord can let you in. Anyhow,\n";
        cout << "congratulations! You made it home!";
        endCard(); // Go to ending screen
    }
    else
    {
        cout << "Please choose 1 or 2! \n";
    }
}

// White room scene
void white_room()
{
    cout << "The house stands alone on a hill, with no real distinctive features except for a single door that's been\n"; 
    cout << "conveniently left open. You try knocking just in case but when no one answers on the third try you enter \n";
    cout << "the house.\n\n";

    cout << "Inside it is a plain room with white walls and white floors, and a single couch in the center. On the far\n"; 
    cout << "wall is a doggy door that seems too big for any dog and too inconvenient for any human.\n\n";

    cout << "You could sit down for a moment on the couch, or maybe try the doggy door.\n\n";
    cout << "(Press 1 or 2:)\n";
    cout << "(1) Sit on the couch (2) Try to fit through the door\n\n";

    int choiceWh;
    cin >> choiceWh;

    if (choiceWh == 1) // sit in chair
    {
        cout << "\nThe couch does look more comfortable than that concrete you were lying on earlier. You sit back into the\n";
        cout << "cushion, and it is in fact only slightly more comfortable than the concrete. And then suddenly even less\n";
        cout << "than that when the entire couch, and yourself, drops straight through the floor.\n\n";

        cout << "Apparently there was a giant hole there, which isn't really your fault but the home designers', or\n";
        cout << "whoever decided to move the couch precariously over the giant hole in the floor.\n\n";
        cout << "Also you did die from the fall.";

        gameOver(); // take player to game over screen
    }
    else if (choiceWh == 2) // go thru door
    {
        cout << "\nSeeing as no one's watching, you try to squeeze through the doggy door, and surprisingly enough you do.\n";
        waitRoom(); // take player to waitRoom function
    }
    else{
        cout << "Please choose 1 or 2! \n";
    }
}

// Waiting Room scene
void waitRoom()
{
    cout << "\nYou squirm out onto what looks to be the floor of a waiting room, which you don't remember seeing from the \n"; 
    cout << "outside of the building. In it's center is a large fountain, and sifting around in it is a woman, she seems\n";
    cout << "to be looking for something.\n\n";

    cout << "\"I'm sorry, I seem to be lost, do you know where this is?\" You ask, but she barely looks up, \"I'm \n";
    cout << "waiting on my appointment- do you have a quarter? I wanna make a wish\". You inform her you really don't have\n";
    cout << "any money. \"Well then how'd you get an appointment?\".\n\n"; 

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
        cout << "name being called on the intercom telling you to head into the office at the end of the waiting area. You\n";
        cout << "obey, not seeing anything better to do.\n\n";

        cout << "As you reach for the door handle however, it suddenly swings open and flattens you against the wall instantly.\n";
        cout << "It seems these doors open outward, and that someone very strong (or very angry) was on their way out.";
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
    endCard(); // Go to ending screen

}

// WIN Screen
void endCard()
{
    cout << "\n\n| You won! THE END |\n\n";
}

// GAME OVER Screen
void gameOver()
{
    cout << "\n\n| Sorry, Game over! |\n\n";
}