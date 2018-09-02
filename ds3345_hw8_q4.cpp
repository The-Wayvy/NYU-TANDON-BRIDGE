//
//  ds3345_hw8_q4.cpp
//  ds3345_hw8_q4
//
//  Created by Damian Siniakowicz on 8/31/18.
//  Copyright © 2018 Damian Siniakowicz. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int constructPin(int decimal_pin, int mapping[]){ // constructs a randomized_pin from the real pin and cypher
    
    int next_digit;
    int remainder = decimal_pin;
    int i = 0;
    int pin = 0;
    
    while (i < 5){
        next_digit = remainder % 10;
        pin += mapping[next_digit] * (int)pow(10.0, i);
        remainder /= 10;
        i++;
    }
    
    return pin;
}

void constructMapping(int arr[]){ // constructs a mapping from decimals to 1, 2 and 3.
    
    srand(time(NULL));
    
    int i = 0;
    while (i < 10){
        arr[i] = (rand() % 3) + 1;
        i++;
    }
    
}

void printMapping(int mapping[]){
    
    int i = 0;
    while (i < 10){
        cout << mapping[i] << " ";
        i++;
    }
    
}

    const int PIN = 78901;

int main(){
    
    int cypher_pin;
    int mapping[10];
    int pin_entered;
    
    cout << "Please enter your PIN according to the following mapping:" << endl;
    cout << "PIN: 0 1 2 3 4 5 6 7 8 9" << endl << "NUM: ";
    constructMapping(mapping);
    printMapping(mapping);
    cout << endl;
    cypher_pin = constructPin(PIN, mapping);
    cin >> pin_entered;
    
    if (pin_entered == cypher_pin){
        cout << "Your PIN is correct" << endl;
    }
    else {
        cout << "Your PIN is not correct" << endl;
    }
    
    
    
    return 0;
}
