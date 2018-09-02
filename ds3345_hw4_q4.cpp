//
//  ds3345_hw4_q4.cpp
//  ds3345_hw4_q4
//
//  Created by Damian Siniakowicz on 8/5/18.
//  Copyright © 2018 Damian Siniakowicz. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    cout << "Section A" << endl;
    
    int length;
    int next_integer;
    double n_root;
    int current_product = 1;
    
    cout << "Please enter the length of the sequence: ";
    
    cin >> length;
    
    cout << "Please enter your sequence:" << endl;
    
    for(int i = 0; i < length; i++){
        cin >> next_integer;
        current_product *= next_integer;
    }
    
    n_root = pow(current_product, 1.0/length);
    
    cout << "The geometric mean is: " << n_root << endl;
    
    cout << "Section B" << endl;
    
    // reset variables
    next_integer = 1;
    length = -1; // because the first time around we're just multiplying current_product by 1 rather than reading a value
    current_product = 1;
    
    cout << "Please enter a non-empty sequence of positive integers, each one in a separate line." <<
    " End your sequence by typing -1:" << endl;
    
    while(next_integer != -1){
        current_product *= next_integer;
        length += 1;
        cin >> next_integer;
    }
    
    n_root = pow(current_product, 1.0/length);
    
    cout << "The geometric mean is: " << n_root << endl;
    
    return 0;
}
