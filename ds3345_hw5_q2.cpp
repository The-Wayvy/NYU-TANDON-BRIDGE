//
//  ds3345_hw5_q2.cpp
//  ds3345_hw5_q2
//
//  Created by Damian Siniakowicz on 8/10/18.
//  Copyright © 2018 Damian Siniakowicz. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    
    int guess;
    int the_number;
    int min = 1;
    int max = 100;
    int guesses = 5;
    
    srand(time(0));
    the_number = (rand() % 100) + 1;
    cout << "I thought of a random number between 1 and 100! Try to guess it." << endl;
    
    while (guesses > 0){
        cout << "Range: [" << min << ", " << max << "], Number of guesses left: " << guesses << endl;
        guesses -= 1;
        cout << "Your guess: ";
        cin >> guess;
        if (guess == the_number){
            cout << "Congrats! You guessed my number in " << 5 - guesses << " guesses." << endl;
            break;
        }
        else if (guess < the_number){
            if (guesses == 0){
                cout << "Out of guesses! My number is " << the_number << endl;
                break;
            }
            cout << "Wrong! My number is bigger.";
            min = guess + 1;
        }
        else{
            if (guesses == 0){
                cout << "Out of guesses! My number is " << the_number;
                break;
            }
            cout << "Wrong! My number is smaller.";
            max = guess - 1;
        }
    }
    
    return 0;
}
