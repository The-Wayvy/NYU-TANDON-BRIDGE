//
//  ds3345_hw3_q2.cpp
//  ds3345_hw3_q2
//
//  Created by Damian Siniakowicz on 7/28/18.
//  Copyright © 2018 Damian Siniakowicz. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string name;
    int graduation_year;
    int current_year;
    int difference;
    
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Please enter your graduation year: ";
    cin >> graduation_year;
    cout << "Please enter current year: ";
    cin >> current_year;
    
    difference = graduation_year - current_year;
    
    if (difference > 4){
        cout << name << ", you are not in college yet";
    }
    else{
        switch(difference){
            case 4: cout << name << ", you are a Freshman";
                    break;
            case 3: cout << name << ", you are a Sophomore";
                    break;
            case 2: cout << name << ", you are a Junior";
                    break;
            case 1: cout << name << ", you are a Senior";
                    break;
            default: cout << name << ", you Graduated";
        }
    }
    
    cout << endl;
    
    return 0;
}
