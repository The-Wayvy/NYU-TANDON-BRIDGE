//
//  ds3345_hw7_q1.cpp
//  ds3345_hw7_q1
//
//  Created by Damian Siniakowicz on 8/24/18.
//  Copyright © 2018 Damian Siniakowicz. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int printMonthCalender(int numOfDays, int startingDay){
    
    int lastDay;
    int startDayMinusOne = startingDay - 1;
    
    // need to print the header
    cout << "Mon" << "\t" << "Tue" << "\t" << "Wed" << "\t" << "Thr" << "\t" << "Fri" << "\t" << "Sat" << "\t" << "Sun" << endl;

    // need to take care of the first week, ie. skip the first startingDay - 1 slots
    
    cout << string(startDayMinusOne, '\t');
    
    // now build the calendar
    
    for (int day = 1; day <= numOfDays; day++){
        cout << day << '\t';
        if ((day + startDayMinusOne) % 7 == 0 && day != numOfDays){
            cout << '\n';
        }
    }

    // now calculate the last day of the month
    lastDay = (startDayMinusOne + numOfDays) % 7;
    if (lastDay == 0) {
        lastDay = 7;
    }
    return lastDay;
}

bool isLeapYear(int year){
    
    if (year % 4 == 0){
        if (year % 100 != 0){
            return true;
        }
        else if (year % 400 == 0){
            return true;
        }
        else {
            return false;
        }
    }
    return false;
}

int getFirstDay(int last_day){
    
    last_day += 1;
    last_day %= 7;
    if (last_day == 0){
        last_day = 7;
    }
    return last_day;
    
}

void printYearCalender(int year, int startingDay){
    
    const int JAN = 1;
    const int FEB = 2;
    const int MAR = 3;
    const int APR = 4;
    const int MAY = 5;
    const int JUN = 6;
    const int JUL = 7;
    const int AUG = 8;
    const int SEP = 9;
    const int OCT = 10;
    const int NOV = 11;
    const int DEC = 12;
    
    // just loop over the months and call printMonth calender 12 times
    
    for (int month = 1; month < 13; month++){
        switch(month){
            case JAN:
                cout << "January " << year << endl;
                startingDay = printMonthCalender(31, startingDay);
                startingDay = getFirstDay(startingDay);
                cout << "\n\n";
                break;
            case FEB: // need to check for leap year
                cout << "February " << year << endl;
                if (isLeapYear(year)){
                    startingDay = printMonthCalender(29, startingDay);
                    startingDay = getFirstDay(startingDay);
                }
                else {
                    startingDay = printMonthCalender(28, startingDay);
                    startingDay = getFirstDay(startingDay);
                }
                cout << "\n\n";
                break;
            case MAR:
                cout << "March " << year << endl;
                startingDay = printMonthCalender(31, startingDay); // this is the last day, we need the first.
                startingDay = getFirstDay(startingDay);
                cout << "\n\n";
                break;
            case APR:
                cout << "April " << year << endl;
                startingDay = printMonthCalender(30, startingDay);
                startingDay = getFirstDay(startingDay);
                cout << "\n\n";
                break;
            case MAY:
                cout << "May " << year << endl;
                startingDay = printMonthCalender(31, startingDay);
                startingDay = getFirstDay(startingDay);
                cout << "\n\n";
                break;
            case JUN:
                cout << "June " << year << endl;
                startingDay = printMonthCalender(30, startingDay);
                startingDay = getFirstDay(startingDay);
                cout << "\n\n";
                break;
            case JUL:
                cout << "July " << year << endl;
                startingDay = printMonthCalender(31, startingDay);
                startingDay = getFirstDay(startingDay);
                cout << "\n\n";
                break;
            case AUG:
                cout << "August " << year << endl;
                startingDay = printMonthCalender(31, startingDay);
                startingDay = getFirstDay(startingDay);
                cout << "\n\n";
                break;
            case SEP:
                cout << "September " << year << endl;
                startingDay = printMonthCalender(30, startingDay);
                startingDay = getFirstDay(startingDay);
                cout << "\n\n";
                break;
            case OCT:
                cout << "October " << year << endl;
                startingDay = printMonthCalender(31, startingDay);
                startingDay = getFirstDay(startingDay);
                cout << "\n\n";
                break;
            case NOV:
                cout << "November " << year << endl;
                startingDay = printMonthCalender(30, startingDay);
                startingDay = getFirstDay(startingDay);
                cout << "\n\n";
                break;
            case DEC:
                cout << "December " << year << endl;
                startingDay = printMonthCalender(31, startingDay);
                startingDay = getFirstDay(startingDay);
                cout << "\n\n";
                break;
        }
    }
}

int main(){
    
    int year;
    int startDay;
    
    cout << "Enter a year: ";
    cin >> year;
    cout << "Enter the first day of the month: ";
    cin >> startDay;
    cout << '\n';
    
    printYearCalender(year, startDay);
    
    return 0;
}

