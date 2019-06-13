#include <iostream>

// don't have to do std::cout, can just do cout, std::endl, etc
using namespace std;

// all C++ programs need a main method. Unlike Java, don't need to have it in a class
int main() {
    
    int favNumber;
    
    //inserting something into this, hence <<
    cout << "Enter your fav number between 1 and 100: ";
    
    // extracting something from this (user input), hence >>
    // puts the input into the favNumber variable
    cin >> favNumber;
    
    // for concatinating, << is essentially like + in Java
    //endl moves to next line
    cout << "Amazing, " << favNumber << " is my favorite number too! " << endl;
    
    // the method is an int, so if everything works, should return 0
    return 0;
}

