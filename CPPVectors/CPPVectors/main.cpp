//
//  main.cpp
//  CPPVectors
//
//  Created by Adam Carter on 6/13/19.
//  Copyright © 2019 Adam Carter. All rights reserved.
//

#include <iostream>
#include  <vector> // need to include this to use vectors 
using namespace std;

/*
 vectors: an array that can grow and shrink in size at execution time
 very efficient compared to arrays
 can provide bounds checking
 can use lots of functions such as sort, reverse, find, and more
 
 */
int main() {
    
    // says we want a vector with 5 char values
    vector <char> vowels (5);
    
    // int vectors will automatically be set to a value of zero until you specify otherwise
    //vector <int> test_scores (10);
    
    vector <int> test_scores {100, 98, 89};
    cout << "\nTest score using vector syntax" << endl;
    
    // using the vector .at method
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    
    // .size method shows the total number of items in the vector
    cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl;
    
    // ask for test scores, update the values with the user input in the test_scores vector
    cout << "\nEnter 3 test scores: ";
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);
    
    cout << "\nUpdated test scores: " << endl;
    
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    
    cout << "\nEnter a new score to add to the vector: " << endl;
    
    // initialize to zero for good practice
    int score_to_add {0};
    cin >> score_to_add;
    
    // puts the new value to the end of the vector
    test_scores.push_back(score_to_add);
    
    cout << "\nTest scores are now: " << endl;
    
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    
    cout << "\nThere are now " << test_scores.size() << " scores in the vector" << endl;
    
    // 2D vector, a vector of vectors
    vector<vector<int>> movie_ratings {
        {1,2,3,4}, //vector 1, with these values
        {1,2,4,4}, // vector 2, etc
        {1,3,4,5}
    };
    
    cout << "\nHere are the movie raings for reviewer #1 " << endl;
    // at(0) is getting the first vector, and the next at(0) is getting the first value in the vector
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;
    
    cout << "\nHere are the movie raings for reviewer #2 " << endl;
    cout << movie_ratings.at(1).at(0) << endl;
    cout << movie_ratings.at(1).at(1) << endl;
    cout << movie_ratings.at(1).at(2) << endl;
    cout << movie_ratings.at(1).at(3) << endl;
    
    
    
    return 0;
}
