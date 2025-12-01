/*
CSC 134
M7T1 - Restaurant Rating
Lydia Loffert
12/1/2025
// Use Restaurant class to store user ratings
*/

#include <iostream>
using namespace std;


// Next time we'll put the class in a separate file
class Restaurant {
  private:
    string name;    // the name
    double rating;  // 0 to 5 stars

  public:
	// constructor 
	Restaurant(string n, double r) {
		name = n;
		rating = r;
        }
	}
	// getters and setters
    void setName(string n) {
        name = n; 
    }
    void setRating(double r) {
        // only valid ratings allowed
        if (r >=0 && r <=5) {
        rating = r; // o - 5 stars
    }
    string getName() const {
        return name;
    }
    double getRating() const {
        return rating;
    }
  
};

int main() {
    cout << "M7T1 - Restaurant Reviews" << endl;


    // if it were struct...
    // breakfast.name = "Biscuitville";
    // breakfast.rating = 3.5;

    Restaurant breakfast = new Restaurant("Biscuitville", 3.5);
    Restaurant lunch     = new Restaurant("Mi Casita", 4.0);

    // We'll use a new function, printInfo(), to display restaurant info
    breakfast.printInfo();
    lunch.printInfo();

    return 0;

}