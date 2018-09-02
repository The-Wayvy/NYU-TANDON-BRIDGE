//
//  ds3345_hw3_q4.cpp
//  ds3345_hw3_q4
//
//  Created by Damian Siniakowicz on 7/29/18.
//  Copyright © 2018 Damian Siniakowicz. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
    
    const int FLOOR_ROUND = 1;
    const int CEILING_ROUND = 2;
    const int ROUND = 3;
    double number;
    int method;
    
    cout << "Please enter a Real number:" << endl;
    cin >> number;
    cout << "Choose your rounding method:" << endl << "1. Floor round" << endl << "2. Ceiling round" << endl <<
    "3. Round the the nearest whole number" << endl;
    cin >> method;
    
    switch(method){
            
        case FLOOR_ROUND:
            cout << floor(number);
            break;
            
        case CEILING_ROUND:
            cout << ceil(number);
            break;
        
        case ROUND:
            cout << round(number);
    }
    cout << endl;
    
    return 0;
}
