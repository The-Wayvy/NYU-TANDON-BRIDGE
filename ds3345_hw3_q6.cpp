//
//  ds3345_hw3_q6.cpp
//  ds3345_hw3_q6
//
//  Created by Damian Siniakowicz on 7/29/18.
//  Copyright © 2018 Damian Siniakowicz. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string day_of_week;
    string start_time;
    int length;
    float cost;
    int hour;
    int minute;
    int colon_location;
    
    cout << "Enter the day of the week that the call was made on" << endl;
    cin >> day_of_week;
    cout << "Enter the time that the call started" << endl;
    cin >> start_time;
    cout << "Enter the length of the call" << endl;
    cin >> length;
    
    if (day_of_week == "Sa" || day_of_week == "Su"){
        cost = length  * .15;
        cout << "Your call cost $" << cost << endl;
        return 0;
    }
    
    // get location of first colon
    // convert the stuff before and after the colon into integers
    colon_location = start_time.find_first_of(':');
    hour = stoi(start_time.substr(0,colon_location));
    minute = stoi(start_time.substr(colon_location+1,string::npos));
    
    if (hour > 7 && (hour < 18 || (hour == 18 && minute == 0))){
        cost = length * .4;
        cout << "Your call cost $" << cost << endl;
    }
    else{
        cost = length * .25;
        cout << "Your call cost $" << cost << endl;
    }
    
    return 0;
}
