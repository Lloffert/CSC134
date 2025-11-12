/*
CSC 134
M5T2
Lydia Loffert & Mattea Isley
10/22/2025

NOTE: Mine probably looks different from Mattea's cause we started it but didn't finish it before she moved
*/


/*
This program will involve us using some simple functions, both void and value-returning, to solve this problem:

List the numbers from 1 to 10 along with the squares of those numbers. (Note this is similar to our times table 
problem from last module.)

Specifications:

a main() function

a square() function that takes an int, and returns the square of that int (value returning)

a printAnswerLine() function that prints one line of the answer (void)
*/


#include <iostream>
using namespace std;


// ---- I think i still overcomplicated it but passing the variables properly is still confusing me.
// ---- this works but I dont think i can do it cleaner until I really understand where things are
// ---- going and being held as theyre passed...

int square(int orig_num);
void printAnswerLine(int sqr_num, int orig_num);

int main() {
    int orig_num = 1;
    int sqr_num;

    while (orig_num <= 10) {
        sqr_num = square(orig_num);
        printAnswerLine(sqr_num, orig_num);
        orig_num++;
    }

}

int square(int orig_num) { // function that takes an int, and returns the square of that int (value returning)
    int sqr_num;
    sqr_num = orig_num * orig_num;
    return sqr_num;
}

void printAnswerLine(int sqr_num, int orig_num) { // function that prints one line of the answer (void)

    cout << "The number " << orig_num << " squared is: " << sqr_num << endl;

}
