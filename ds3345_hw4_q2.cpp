//
//  ds3345_hw4_q2.cpp
//  ds3345_hw4_q2
//
//  Created by Damian Siniakowicz on 8/5/18.
//  Copyright © 2018 Damian Siniakowicz. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int decimal_number;
    int remainder;
    int number_of_next_letter;
    string roman_numerals;
    
    cout << "Enter decimal number:" << endl;
    cin >> decimal_number;
    
    remainder = decimal_number;
    
    //find the number of M's
    number_of_next_letter = remainder / 1000;
    roman_numerals = string(number_of_next_letter,'M');
    remainder %= 1000;
    
    // find the number of D's
    number_of_next_letter = remainder / 500;
    roman_numerals += string(number_of_next_letter,'D');
    remainder %= 500;
    
    // find the number of C's
    number_of_next_letter = remainder / 100;
    roman_numerals += string(number_of_next_letter,'C');
    remainder %= 100;

    // find the number of L's
    number_of_next_letter = remainder / 50;
    roman_numerals += string(number_of_next_letter,'L');
    remainder %= 50;

    // find the number of X's
    number_of_next_letter = remainder / 10;
    roman_numerals += string(number_of_next_letter,'X');
    remainder %= 10;
    
    // find the number of V's
    number_of_next_letter = remainder / 5;
    roman_numerals += string(number_of_next_letter,'V');
    remainder %= 5;
    
    // find the number of I's
    roman_numerals += string(remainder,'I');
    
    cout << decimal_number << " is " << roman_numerals << endl;
    
    return 0;
}

