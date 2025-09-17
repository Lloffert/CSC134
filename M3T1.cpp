/*
CSCS 134
M3T1 - Area of rectangles
Simple comparison
Lydia Loffert
9/17/2025
*/

#include <iostream>
using namespace std;

int main() {
    
    // Get info on the two rectangles
    double length1, length2, width1, width2;
    double area1, area2;

    cout << "Enter the length and width of the two rectangles. \n\n";
    cout << "First rectangle:" << endl;
    cout << "Length: ";
    cin >> length1;
    cout << "Width:  ";
    cin >> width1;
    cout << endl;
    
    cout << "Second rectangle:" << endl;
    cout << "Length: ";
    cin >> length2;
    cout << "Width:  ";
    cin >> width2;
    cout << endl;

    // Calculate the area
    area1 = length1 * width1;
    area2 = length2 * width2;

    // Print the output
    cout << "The first rectangle has an area of:   " << area1 << endl;
    cout << "The second rectangle has an area of:  " << area2 << endl;
    cout << endl;

    // Compare the two rectangles
    if (area1 > area2) {
        cout << "The first rectangle is larger." << endl;
    }

    if (area2 > area1) {
        cout << "The second rectangle is larger." << endl;
    }

    if (area2 == area1) {
        cout << "The rectangles have the same area." << endl;
    }

    return 0;
}