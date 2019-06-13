//
//  main.cpp
//  CPPArrays
//
//  Created by Adam Carter on 6/13/19.
//  Copyright © 2019 Adam Carter. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    // intitialzing an array with elements in it
    char vowels[] {'a', 'e', 'i', 'o', 'u'};
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    
    // you don't need to speciify the array size
    double hi_temps[] {90.1, 89.8, 77.5, 81.6};
    cout << "\nThe first high temp is: " << hi_temps[0] << endl;
    
    // changing an element in the array to a new value
    hi_temps[0] = 100.7;
    
    cout << "\nThe first high temp is now : " << hi_temps[0] << endl;
    return 0;
}
