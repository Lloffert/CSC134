/*
CSC 134
M6LAB1
Lydia Loffert
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>
#include <ctime>
using namespace std;

// ============================================================================
// GLOBAL VARIABLES - Accessible to all functions
// ============================================================================
// The staple gun's cartridges ('C' = Clippy, 'S' = Staple)
vector<char> stapleGun;

// Player scores
int playerScore = 3;
int opponentScore = 3;

// Game state
string currentPlayer = "Player";
bool gameOver = false;

// ============================================================================
// FUNCTION PROTOTYPES
// ============================================================================
void setupGame();
void load_stapleGun(int clippyCount, int stapleCount);
void shuffle_stapleGun();
void displayGameState();
void display_stapleGun(bool showContents);
char fireShot();
void playerTurn();
void opponentTurn();
void checkGameOver();

// ============================================================================
// MAIN GAME LOOP
// ============================================================================
int main() {
    srand(time(0));  // Seed random number generator
    
    cout << "╔═══════════════════════════════════════════╗" << endl;
    cout << "║              STAPLE ROULETTE:             ║" << endl;
    cout << "║  (Crappy but non-lethal Russian Roulette) ║" << endl;
    cout << "╚═══════════════════════════════════════════╝" << endl;
    cout << "\nRules:" << endl;
    cout << "📎 Harmless Clippy = He'll bounce right off you he's a pacifist (you get another turn!)" << endl;
    cout << "💥 Staple hit! = (lose a point!)" << endl;
    cout << "First to 0 points loses!\n" << endl;
    
    setupGame();
    
    // Main game loop
    while (!gameOver) {
        if (currentPlayer == "Player") {
            playerTurn();
        } else {
            opponentTurn();
        }
        
        checkGameOver();
        
        // If staple gun is empty, reload for next round
        if (stapleGun.empty() && !gameOver) {
            cout << "\n[...] Staple gun is empty! Reloading for next round..." << endl;
            cout << "Press Enter to continue...";
            cin.ignore();
            cin.get();
            setupGame();
        }
    }
    
    // Game over
    cout << "\n╔════════════════════════════════════════╗" << endl;
    cout << "║            GAME OVER!                  ║" << endl;
    cout << "╚════════════════════════════════════════╝" << endl;
    
    if (playerScore <= 0) {
        cout << "🚑 You're Out! Opponent wins!" << endl;
    } else {
        cout << "🎉 You win! Opponent loses!" << endl;
    }
    
    return 0;
}

// ============================================================================
// GAME SETUP FUNCTIONS
// ============================================================================

void setupGame() {
    // Clear any existing cartridges
    stapleGun.clear();
    
    // Load the staple gun with random cartridges
    int clippyCount = 2 + rand() % 3;  // 2-4 clippy cartridges
    int stapleCount = 2 + rand() % 2;  // 2-3 staple cartridges
    
    load_stapleGun(clippyCount, stapleCount);
    shuffle_stapleGun();
    
    cout << "\n🔫 Staple gun loaded!" << endl;
    display_stapleGun(false);  // Show counts but not order
}

void load_stapleGun(int clippyCount, int stapleCount) {
    // Add staple cartridges
    for (int i = 0; i < clippyCount; i++) {
        stapleGun.push_back('C');
    }
    
    // Add staple cartridges
    for (int i = 0; i < stapleCount; i++) {
        stapleGun.push_back('S');
    }
}

void shuffle_stapleGun() {
    // Shuffle the cartridges so players don't know the order
    random_shuffle(stapleGun.begin(), stapleGun.end());
}

// ============================================================================
// DISPLAY FUNCTIONS
// ============================================================================

void displayGameState() {
    cout << "\n┌─────────────────────────────────────────┐" << endl;
    cout << "│  Player: " << playerScore << " points   Opponent: " << opponentScore << " points  │" << endl;
    cout << "└─────────────────────────────────────────┘" << endl;
}

void display_stapleGun(bool showContents) {
    int clippyCount = 0;
    int stapleCount = 0;
    
    // Count each type using a range-based for loop
    for (char cartridge : stapleGun) {
        if (cartridge == 'C') clippyCount++;
        else stapleCount++;
    }
    
    cout << "Staple gun contents: ";
    cout << "📎 " << clippyCount << " Clippys, ";
    cout << "💥 " << stapleCount << " Staples";
    cout << " (" << stapleGun.size() << " total)" << endl;
    
    // For debugging/demonstration - show actual order
    if (showContents) {
        cout << "Actual order: ";
        for (char cartridge : stapleGun) {
            cout << (cartridge == 'C' ? "📎" : "💥") << " ";
        }
        cout << endl;
    }
}

// ============================================================================
// CORE GAME MECHANICS
// ============================================================================

char fireShot() {
    // Fire the next cartridge (remove from front of vector)
    // This is why we use a vector - easy to remove from front!
    
    if (stapleGun.empty()) {
        return 'E';  // Empty!
    }
    
    // Get the first cartridge
    char cartridge = stapleGun.front();
    
    // Remove it from the staple gun
    stapleGun.erase(stapleGun.begin());
    
    return cartridge;
}

// ============================================================================
// TURN LOGIC
// ============================================================================

void playerTurn() {
    displayGameState();
    display_stapleGun(false);
    
    cout << "\n>>> YOUR TURN <<<" << endl;
    cout << "Fire at: [1] Yourself  [2] Opponent" << endl;
    cout << "Choice: ";
    
    int choice;
    cin >> choice;
    
    // Input validation
    while (choice != 1 && choice != 2) {
        cout << "Invalid choice. Enter 1 or 2: ";
        cin >> choice;
    }
    
    cout << "\n *CHA-CHUNK!!* ";
    char result = fireShot();
    
    if (result == 'C') {
        cout << "📎 Clippy! " << endl;
        if (choice == 1) {
            cout << "Clippy bounces right off! You get another turn!" << endl;
            // Player keeps their turn (currentPlayer stays "Player")
        } else {
            cout << "Opponent is annoyed but unharmed." << endl;
            currentPlayer = "Opponent";  // Switch turns
        }
    } else if (result == 'S') {
        cout << "💥 Stapled!!" << endl;
        if (choice == 1) {
            cout << "You got stapled! -1 point!" << endl;
            playerScore--;
        } else {
            cout << "Opponent got stapled! -1 point!" << endl;
            opponentScore--;
        }
        currentPlayer = "Opponent";  // Switch turns after staple
    }
}

void opponentTurn() {
    displayGameState();
    display_stapleGun(false);
    
    cout << "\n>>> OPPONENT'S TURN <<<" << endl;
    cout << "Press Enter to see opponent's choice...";
    cin.ignore();
    cin.get();
    
    // Simple AI: 50/50 chance to fire at self or player
    int choice = 1 + rand() % 2;
    
    if (choice == 1) {
        cout << "Opponent fires at themselves!" << endl;
    } else {
        cout << "Opponent fires at you!" << endl;
    }
    
    cout << "\n *CHA-CHUNK!* ";
    char result = fireShot();
    
    if (result == 'C') {
        cout << "📎 Clippy!" << endl;
        if (choice == 1) {
            cout << "Opponent is annoyed but unharmed!" << endl;
            // Opponent keeps their turn
        } else {
            cout << "Clippy bounces right off!" << endl;
            currentPlayer = "Player";  // Switch turns
        }
    } else if (result == 'S') {
        cout << "💥 Stapled!" << endl;
        if (choice == 1) {
            cout << "Opponent got stapled! -1 point!" << endl;
            opponentScore--;
        } else {
            cout << "You got stapled! -1 point!" << endl;
            playerScore--;
        }
        currentPlayer = "Player";  // Switch turns after staple
    }
}

void checkGameOver() {
    if (playerScore <= 0 || opponentScore <= 0) {
        gameOver = true;
    }
}