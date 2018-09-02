//
//  ds3345_hw8_q5.cpp
//  ds3345_hw8_q5
//
//  Created by Damian Siniakowicz on 8/31/18.
//  Copyright © 2018 Damian Siniakowicz. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string first_name, middle_name, last_name;
    
    cout << "Please enter your first name, your middle name or initial, and your last name: " << endl;
    cin >> first_name >> middle_name >> last_name;
    if (middle_name[middle_name.length() - 1] != '.'){
        middle_name += ".";
    }
    cout << last_name << ", " << first_name << " " << middle_name << endl;
    
    return 0;
}
