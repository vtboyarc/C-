//
//  main.cpp
//  CarpetCleaningCPP
//
//  Created by Adam Carter on 6/12/19.
//  Copyright © 2019 Adam Carter. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    cout << "Hello and welcome to the carpet cleaning service" << endl;
    cout << "\nHow many rooms would you like cleaned? ";
    
    int numRooms {0};
    cin >> numRooms;
    
    // make it final
    const double pricePerRoom {30.0};
    const double salesTax {0.06};
    const int estimateExpirationDate {30};
    
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of rooms: " << numRooms << endl;
    cout << "Price per room is: $" << pricePerRoom << endl;
    cout << "Cost: $" << pricePerRoom * numRooms << endl;
    cout << "Tax: $" << pricePerRoom * numRooms * salesTax << endl;
    cout << "=======================================" << endl;
    cout << "Total estimate: $" << (pricePerRoom * numRooms) + (pricePerRoom * numRooms * salesTax) << endl;
    cout << "This estimate is valid for " << estimateExpirationDate << " days" << endl;
    
    cout << endl;
    return 0;
}

