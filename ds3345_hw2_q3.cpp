//
//  ds3345_hw2_q3.cpp
//  ds3345_hw2_q3
//
//  Created by Damian Siniakowicz on 7/24/18.
//  Copyright © 2018 Damian Siniakowicz. All rights reserved.
//

//#include <stdio.h>

#include <iostream>
using namespace std;

int main(){
    
    int john_days;
    int john_hours;
    int john_minutes;
    int bill_days;
    int bill_hours;
    int bill_minutes;
    
    int total_days;
    int total_hours;
    int total_minutes;
    
    cout << "Please enter the number of days John has worked: ";
    cin >> john_days;
    cout << "Please enter the number of hours John has worked: ";
    cin >> john_hours;
    cout << "Please enter the number of minutes John has worked: ";
    cin >> john_minutes;
    cout << endl << "Please enter the number of days Bill has worked: ";
    cin >> bill_days;
    cout << "Please enter the number of hours Bill has worked: ";
    cin >> bill_hours;
    cout << "Please enter the number of minutes Bill has worked: ";
    cin >> bill_minutes;
    
    total_days = john_days + bill_days;
    total_hours = john_hours + bill_hours;
    total_minutes = john_minutes + bill_minutes;
    
    total_hours += total_minutes / 60; // need to make sure that total_hours does not hit 24
    total_minutes %= 60;
    total_days += total_hours / 24;
    total_hours %= 24;
    
    // need 1 endl, not 2?
    cout << endl << "The total time both of them worked together is: " << total_days << " days, " << total_hours
    << " hours and " << total_minutes << " minutes." << endl;
    
    
    return 0;
}
