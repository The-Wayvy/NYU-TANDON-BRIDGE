//
//  ds3345_hw3_q5.cpp
//  ds3345_hw3_q5
//
//  Created by Damian Siniakowicz on 7/29/18.
//  Copyright © 2018 Damian Siniakowicz. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int inches;
    int pounds;
    double meters;
    double kilograms;
    double bmi;
    string weight_status;
    
    
    cout << "Please enter weight (in pounds): ";
    cin >> pounds;
    cout << "Please enter height (in inches): ";
    cin >> inches;
    
    meters = .0254 * inches;
    kilograms = .453592 * pounds;
    
    bmi = kilograms / (meters*meters);
    
    if (bmi < 18.5){
        weight_status = "Underweight";
    }
    else if (bmi < 25){
        weight_status = "Normal";
    }
    else if (bmi < 30){
        weight_status = "Overweight";
    }
    else {
        weight_status = "Obese";
    }
    
    cout << "The weight status is: " << weight_status << endl;
    
    return 0;
}
