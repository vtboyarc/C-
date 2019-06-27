//
//  main.cpp
//  FizzBuzz
//
//  Created by Adam Carter on 6/27/19.
//  Copyright © 2019 Adam Carter. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int num {};
    
    cout << "Enter a number: " << endl;
    cin >> num;
    
    if (num % 3 == 0 && num % 5 == 0) {
        cout << "FizzBuzz" << endl;
    }
    if (num % 3 == 0 && num % 5 != 0) {
        cout << "Fizz" << endl;
    }
    if (num % 5 == 0 && num % 3 != 0) {
        cout << "Buzz" << endl;
    } if (num % 5 != 0 && num % 3 != 0) {
        cout << num << " Is not divisible by 3 or 5" << endl;
    }
    
    return 0;
}
