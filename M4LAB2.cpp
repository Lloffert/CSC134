/*
CSC 134
M4LAB2 - Nested loops and Rectangles
Lydia Loffert
10/8/25
Task: Draw a rectangle
*/

#include <iostream>
using namespace std;

int main() {

    // Declare variables
    int length = 10;
    int height = 10;
    string tile = "🦍";

        // Example 1 : print horizontally
    for (int i=0; i<10; i++) {
        cout << tile;
    }
    cout << endl;

    // Example 2: Same thing with a while loop
    int count = 0;
    while (count < length) {
        cout << tile;
        count++; // count from 0 to just before length
    }
    cout << endl;

    // Example 3 : For loop, but printing in a column
    for (int i = 0; i < height; i++) {
        cout << tile << endl;
    }

    cout << endl << endl; // white space
    cout << "Draw a Rectangle" << endl;
    cout << "length? ";
    cin >> length;
    cout << "height? ";
    cin >> height;
    
    cout << endl << "Rectangle " << length << " x " << height << endl;
    // Outer loops prints [height]
    // Inner loops  prints [length]
    for (int i=0; i < height; i++) {
        // print the line
        for (int j=0; j < length; j++) {
            cout << tile;
        }
        cout << endl;
    }
    return 0; // no errors
}