/*
CSC 134
M1HW1
Lydia Loffert
8/29/2025
purpose: Talk about a favorite movie
*/

// magic words
#include <iostream>
using namespace std;

int main() {
    // start program
    // declare all variables ("whiteboards")
    string title = "The McPherson Tape";
    int rls_date = 1989;
    double budget = 6.5;

    // Write about movie
    cout << "\"" << title << "\"" ", also known as \"UFO Abduction\", is a " << rls_date << " sci-fi horror film about the" << endl;
    cout << "fictional Van Heese family's nightmarish encounter with extraterrestrials, all seen from the" << endl; 
    cout << "recovered VHS footage of the youngest son's camcorder." << endl;
    cout << endl;

    cout << "The movie was made on a microbudget of $" << budget << "K dollars and was only ever released on video." << endl;
    cout << "It's considered to be one of the few early films utilizing the \"found footage\" genre before" << endl;
    cout << "it was popularised by The Blair Witch Project a decade later." << endl;

    // end program
    return 0;

}