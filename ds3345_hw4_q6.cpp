//
//  ds3345_hw4_q6.cpp
//  ds3345_hw4_q6
//
//  Created by Damian Siniakowicz on 8/6/18.
//  Copyright © 2018 Damian Siniakowicz. All rights reserved.
//

#include <iostream>

using namespace std;

int main(){
    
    int n;
    int evens;
    int odds;
    int number;
    int remainder;
    
    cout << "Input a positive integer: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++){ // loop over all the numbers
        number = i;
        evens = 0;
        odds = 0;
        while (number > 0){ // check each digit of the current number
            remainder = number % 10;
            if (remainder % 2 == 0){
                evens += 1;
            }
            else {
                odds += 1;
            }
            number /= 10;
        }
        if (evens > odds) {
            cout << i << endl;
        }
    }
    
    
    return 0;
}
