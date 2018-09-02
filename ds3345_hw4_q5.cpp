//
//  ds3345_hw4_q5.cpp
//  ds3345_hw4_q5
//
//  Created by Damian Siniakowicz on 8/6/18.
//  Copyright © 2018 Damian Siniakowicz. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
    
    int n;
    int line_size;
    int padding;
    int stars;
    
    cout << "Enter a positive integer" << endl;
    
    cin >> n;
    
    line_size = (2 * n) - 1;
    
    for (int i = n; i > 0; i--){
        stars = (i * 2) - 1;
        padding = (line_size - stars) / 2;
        cout << string(padding, ' ') << string(stars, '*') << string(padding, ' ') << endl;
    }
    
    for (int i = 1; i <= n; i++){
        stars = (i * 2) - 1;
        padding = (line_size - stars) / 2;
        cout << string(padding, ' ') << string(stars, '*') << string(padding, ' ') << endl;
    }
    
    return 0;
}
