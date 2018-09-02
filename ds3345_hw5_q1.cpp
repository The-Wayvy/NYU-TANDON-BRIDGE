//
//  ds3345_hw5_q1.cpp
//  ds3345_hw5_q1
//
//  Created by Damian Siniakowicz on 8/10/18.
//  Copyright © 2018 Damian Siniakowicz. All rights reserved.
//

/* note: this doesn't work if the multiplication table contains 4 digit numbers because then a tab isn't enough
 to keep the 4 digit number from running into the number in the same row but 1 column to the right.*/

#include <iostream>

using namespace std;

int main(){
    
    int n;
    
    cout << "Please enter a positive integer:" << endl;
    cin >> n;
    
    for (int row = 1; row <= n; row++){
        for (int col = 1; col <= n; col++){
            cout << row * col << "\t";
        }
        cout << "\n";
    }
    
    
    return 0;
}
