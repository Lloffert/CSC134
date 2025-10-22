/*
CSC 134
M5T2
Lydia Loffert & Mattea Isley
10/22/2015
*/



// girl i dont know.

#include <iostream>
using namespace std;

// These needs to declared IN a function and passed to the others
double num;
double sqr_num;

double square() {
    // squares the number 
    sqr_num = num * num;
}

void printanswerline(){
    // prints line of numbers

    cout << num;
    square();
    cout << num;

}





int main()
{
 //calculations and printing 

    cout << "Numbers: " << endl;
    printanswerline();

    cout << "Squares: " << endl;






//output
    return 0; //no errors
    
    
    
}