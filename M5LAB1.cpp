/*
CSC 134
M5LAB1
Lydia Loffert
11/5/2025
Uses "procedural programming"
*/


#include <iostream>
using namespace std;

// Function Prototypes
// Any functions you make will need to
// be listed here, in this format, at the top.
// This is so the compiler knows to save
// room for them in the final program.

void main_menu();
void choice_right_door();
void choice_left_door();
void choice_wall();
// TODO: add more choices here

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.

    cout << R"(
__________________________________________________________________
      |     |      |   |                  |   |      |     |
      |   o | o    |   |                  |   |    o | o   |
      |_____|______|   |                  |   |______|_____|
     /              \  |                  |  /              \
    /                \ |                  | /                \ 
   /                  \|__________________|/                  \
  /                                                            \
 /                                                              \
/________________________________________________________________\
  )";
  cout << "Two doors stand before you..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the door on the left" << endl;
  cout << "2. Try the door on the right" << endl;
  cout << "3. Inspect the wall" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";

  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_left_door();      // -> GOTO Right door
  } else if (2 == choice) {
    choice_right_door();       // -> GOTO Left door
  } else if (3 == choice) {
    choice_wall();            // -> GOTO Wall
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; main_menu();      // -> back to main_menu (doesn't really make sense here cause thats the screen you're already on. but keep if it was bigger I guess)
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().

void choice_right_door() {
      cout << R"(
_____________________________________________________________
    |                                    _________      |                                
    |                   ____________    |____|____|     |                    
    |        ____      |___________||   |____|____|     |                                   
    |_______/___/|____/ /__/ /__/  //___________________|                                               
   /        |   |    /            //                     \            
  /                 /____________//                       \                
 /                 |____________|/                         \  
/___________________________________________________________\

  )";
  cout << "It's your bedroom. Not really what you're looking for though."

  cout << "Wanna play again?" << endl;
  cout << "1. Yes" << endl;
  cout << "2. No thanks..." << endl;

  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    main_menu();
  } else if (2 == choice) {
    cout << "OK Byeeee\n\n";
  }
   else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}

void choice_left_door() { 
      cout << R"(
_____________________________________________________________
    |                                    _________      |                                
    |                   ____________    |____|____|     |                    
    |        ____      |___________||   |____|____|     |                                   
    |_______/___/|____/ /__/ /__/  //___________________|                                               
   /        |   |    /            //                     \            
  /                 /____________//                       \                
 /                 |____________|/                         \  
/___________________________________________________________\

  )";
  cout << "It's your bedroom. Not really what you're looking for though."

  cout << "Wanna play again?" << endl;
  cout << "1. Yes" << endl;
  cout << "2. No thanks..." << endl;

  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    main_menu();
  } else if (2 == choice) {
    cout << "OK Byeeee\n\n";
  }
   else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }

}

void choice_wall() { cout << "TODO: Write something here" << endl; }
