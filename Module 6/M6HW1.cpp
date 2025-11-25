/*
CSC 134
M6HW1 - Silver
Lydia Loffert
11/24/2025
*/

#include <iostream>
using namespace std;

/*
NEEDS:
-----

* at least 3 rooms
* some dialogue + NPCs explaining point of game & how to play
* lock & key situation
* ending

*/

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

// Define constants for directions
enum Direction {
    NORTH = 0,
    EAST = 1,
    SOUTH = 2,
    WEST = 3,
    NUM_DIRECTIONS = 4
};

// Direction strings for output
const string DIRECTION_NAMES[NUM_DIRECTIONS] = {
    "north", "east", "south", "west"
};

// Define constants for rooms
enum Room {
    FOYER = 0,
    ARCHIVE = 1,
    LAB = 2,
    STAIRWELL = 3,
    POOL = 4,
    CELL = 5,
    NUM_ROOMS = 6,
};

int main() {
    // Room names array
    string roomNames[NUM_ROOMS] = {
        "Foyer",
        "Archive",
        "Laboratory",
        "Stairwell",
        "Swimming Pool",
        "Holding Cell",
    };
    
    // Room descriptions array
    string roomDescriptions[NUM_ROOMS] = {
        "A humble entryway to the building. Weathered concrete walls and floors to match.",
        "An enormous underground chamber lined wall to wall with steel file cabinets.",
        "An old yellowed laboratory, not much equipment here. Looks more like a dentists office.",
        "An creaky stairwell. Leads up and down.",
        "A large empty swimming pool grown over with algea. There's a sewer grate in its center leading below"
        "A holding room of some sort, plated with iron bars. The doors locked but it's not holding anyone anymore."
    };
    
    // Adjacency list using a 2D array
    // connections[from_room][direction] = to_room or -1 if no connection
    int connections[NUM_ROOMS][NUM_DIRECTIONS];
    
    // Initialize all connections to -1 (no connection)
    for (int i = 0; i < NUM_ROOMS; i++) {
        for (int j = 0; j < NUM_DIRECTIONS; j++) {
            connections[i][j] = -1;
        }
    }
    
    // Define the connections between rooms using the Room enum
    // Foyer connections
    connections[FOYER][NORTH] = -1;          // No connection north
    connections[FOYER][EAST] = CELL;         // Foyer -> East -> Holding Cell
    connections[FOYER][SOUTH] = -1;          // No connection south
    connections[FOYER][WEST] = STAIRWELL;    // Foyer -> West -> Stairwell
    
    // Archive connections
    connections[ARCHIVE][NORTH] = POOL;      // Archive -> North -> Swimming Pool
    connections[ARCHIVE][EAST] = -1;         // No connection east
    connections[ARCHIVE][SOUTH] = -1;        // No connection south
    connections[ARCHIVE][WEST] = -1;         // No connection west
    
    // Laboratory connections
    connections[LAB][NORTH] = -1;            // No connection north
    connections[LAB][EAST] = -1;             // No connection east
    connections[LAB][SOUTH] = STAIRWELL;     // Laboratory -> South -> Stairwell
    connections[LAB][WEST] = -1;             // No conncetion west
    
    // Stairwell connections
    connections[STAIRWELL][NORTH] = LAB;     // Stairwell -> noth -> Laboratory
    connections[STAIRWELL][EAST] = FOYER;    // Stairwell -> East -> Foyer
    connections[STAIRWELL][SOUTH] = POOL;    // Stairwell -> East -> Swimming Pool
    connections[STAIRWELL][WEST] = -1;       // No connection west
    
    // Pool connections
    connections[POOL][NORTH] = STAIRWELL;    // Swimming Pool -> North -> Stairwell
    connections[POOL][EAST] = -1;            // No connection east
    connections[POOL][SOUTH] = ARCHIVE;      // Swimming Pool -> south -> Archive
    connections[POOL][WEST] = -1;            // No connection west

    // Holding Cell connections
    connections[CELL][NORTH] = -1;           // No connection north
    connections[CELL][EAST] = -1;            // No connection east
    connections[CELL][SOUTH] = -1;           // No connection south
    connections[CELL][WEST] = FOYER;         // Holding Cell -> west -> Foyer
    
    // Game state
    int currentRoom = FOYER; // Start in the Foyer
    bool gameRunning = true;
    
    // Game loop
    while (gameRunning) {
        // Display current room information
        cout << "\nYou are in the " << roomNames[currentRoom] << endl;
        cout << roomDescriptions[currentRoom] << endl;
        
        // Show available exits
        cout << "Exits: ";
        bool hasExits = false;
        for (int dir = 0; dir < NUM_DIRECTIONS; dir++) {
            if (connections[currentRoom][dir] != -1) {
                cout << DIRECTION_NAMES[dir] << " ";
                hasExits = true;
            }
        }
        if (!hasExits) {
            cout << "none";
        }
        cout << endl;
        
        // Get player input
        string command;
        cout << "\nWhat would you like to do? ";
        cin >> command;
        
        // Process movement commands
        if (command == "north" || command == "n") {
            if (connections[currentRoom][NORTH] != -1) {
                currentRoom = connections[currentRoom][NORTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "east" || command == "e") {
            if (connections[currentRoom][EAST] != -1) {
                currentRoom = connections[currentRoom][EAST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "south" || command == "s") {
            if (connections[currentRoom][SOUTH] != -1) {
                currentRoom = connections[currentRoom][SOUTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "west" || command == "w") {
            if (connections[currentRoom][WEST] != -1) {
                currentRoom = connections[currentRoom][WEST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "quit" || command == "q") {
            gameRunning = false;
        } else {
            cout << "I don't understand that command." << endl;
        }
    }
    
    cout << "Thanks for playing!" << endl;
    return 0;
}

