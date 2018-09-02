//
//  ds3345_hw8_q2.cpp
//  ds3345_hw8_q2
//
//  Created by Damian Siniakowicz on 8/31/18.
//  Copyright © 2018 Damian Siniakowicz. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str){
    
    int length = str.length();
    int half_length = length / 2;
    
    for (int i = 0; i < half_length; i ++){
        if (str[i] != str[length - i - 1]){
            return false;
        }
    }
    return true;
}


int main(){
    
    string word;
    
    cout << "Please enter a word: ";
    
    cin >> word;
    
    if (isPalindrome(word)){
        cout << word << " is a palindrome" << endl;
    }
    else {
        cout << word << " is not a palindrome" << endl;
    }
    
    return 0;
}

