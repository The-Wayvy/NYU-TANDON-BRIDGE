//
//  ds3345_hw4_q3.cpp
//  ds3345_hw4_q3
//
//  Created by Damian Siniakowicz on 8/5/18.
//  Copyright © 2018 Damian Siniakowicz. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    
    int decimal_number;
    int remainder;
    string binary_string;
    const int BASE = 2;
    int current_power = 0; // the current power of 2 that we're working with.
    
    cout << "Enter the decimal number:" << endl;
    cin >> decimal_number;
    remainder = decimal_number;
    
    // first find the smallest power that is larger than the number
    while( (int) (pow(BASE, current_power)) <= decimal_number ){
        current_power += 1;
    }
    
    binary_string = "1";
    current_power -= 1; // to get the largest power that isn't larger than the number
    remainder %= (int) pow(BASE, current_power);
    current_power -= 1; // now we have the next power that potentially fits in our number
    
    // now find the next largest power that fits into the number, and next, and the next...
    while(current_power > -1){
        if ( (int) (pow(BASE, current_power)) <= remainder ) {
            remainder %= (int) (pow(BASE, current_power));
            binary_string += "1";
        }
        else {
            binary_string += "0";
        }
        current_power -= 1;
    }
    
    cout << "The binary representation of " << decimal_number << " is " << binary_string << endl;
    
    return 0;
}


