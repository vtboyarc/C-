//
//  main.cpp
//  ControlFlow
//
//  Created by Adam Carter on 6/27/19.2020
//  Copyright © 2019 Adam Carter. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    int num {};
    const int min {10};
    const int max {100};
    
    cout << "Enter a number between " << min << " and " << max << ":";
    cin >> num;
    
    if (num > min) {
        cout << "\n========= If statment 1 =======" << endl;
        cout << num << " is greater than " << min << endl;
        
        int diff{num - min};
        cout << num << " is " << diff << " greater than " << min << endl;
    }
    
    if (num < max) {
        cout << "\n========= If statment 2 =======" << endl;
        cout << num << " is less than " << max << endl;
        
        int diff = {max - num};
        cout << num << " is " << diff << " less than " << max << endl;
    }
    
    if (num >= min && num <= max) {
        cout << "\n========= If statment 3 =======" << endl;
        cout << num << " is in range " << endl;
        cout << " This means statements 1 and 2 must also display if this is hit" << endl;
    }
    
    if (num == min || num == max) {
        cout << "\n========= If statment 4 =======" << endl;
        cout << num << " is right on a boundary " << endl;
        cout << " This means all statements will display if this is hit" << endl;
    }
    
    cout << endl;
    return 0;
}
