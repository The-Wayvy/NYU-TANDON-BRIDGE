//
//  ds3345_hw8_q6.cpp
//  ds3345_hw8_q6
//
//  Created by Damian Siniakowicz on 8/31/18.
//  Copyright © 2018 Damian Siniakowicz. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

string getNextSubtstring(string str, int & start_index, int & end_index){
    
    string sub_string;
    
    end_index = str.find(' ', start_index);
    if (end_index != string::npos){
        sub_string = str.substr(start_index, end_index - start_index);
        start_index = end_index + 1;
    }
    else {
        sub_string = str.substr(start_index);
        start_index = str.length() + 1;
    }
    
    return sub_string;
}

bool isAllNumbers(string str){
    
    const string LETTERS = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i = 0;
    int len = str.length();
    
    while (i < len){
        if (LETTERS.find(str[i]) != string::npos){
            return false;
        }
        i++;
    }
    
    return true;
    
}

void replaceString(string & str, int len_substring, int start_index){
    
    int index = 0;
    
    while (index < len_substring){
        
        str[start_index - 2 - index] = 'x';
        index++;
        
    }
    
}


int main(){ // what if the last string is all numbers
    
    int start_index = 0;
    int end_index = 0;
    string next_substring;
    string user_text;
    
    cout << "Please enter a line of text: " << endl;
    getline(cin, user_text);
    
    while (end_index != string::npos){
        next_substring = getNextSubtstring(user_text, start_index, end_index);
        if (isAllNumbers(next_substring)){
            replaceString(user_text, next_substring.length(), start_index);
        }
    }
    
    cout << user_text << endl;
 
    return 0;
}
