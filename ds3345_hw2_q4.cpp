//
//  ds3345_hw2_q4.cpp
//  ds3345_hw2_q4
//
//  Created by Damian Siniakowicz on 7/24/18.
//  Copyright © 2018 Damian Siniakowicz. All rights reserved.
//

#include <iostream>

using namespace std;

int main(){
    
    cout << "Please enter two positive integers, separated by a space:" << endl;
    
    int first;
    int second;
    
    cin >> first >> second;
    
    cout << first << " + " << second << " = " << first+second << endl;
    cout << first << " - " << second << " = " << first-second << endl;
    cout << first << " * " << second << " = " << first*second << endl;
    cout << first << " / " << second << " = " << double(first)/second << endl;
    cout << first << " div " << second << " = " << first/second << endl;
    cout << first << " mod " << second << " = " << first%second << endl;
    
    return 0;
}
