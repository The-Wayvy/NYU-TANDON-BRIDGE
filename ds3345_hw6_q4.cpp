//
//  ds3345_hw6_q4.cpp
//  ds3345_hw6_q4
//
//  Created by Damian Siniakowicz on 8/20/18.
//  Copyright © 2018 Damian Siniakowicz. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

void printDivisors(int n){ // running time = 2 * sqrt(n)
    
    int square_root = int (ceil(pow(n, 0.5))); // i feel like there's an edge case here
    
    for (int i = 1; i <= square_root; i++){
        // check if it's a divisor, if so, print it
        if (n % i == 0){
            cout << i << " ";
        }
    }
    
    for (int i = square_root - 1; i > 0; i--){
        // check if it's a divisor, if so, print n divided by the divisor
        if (n % i == 0){
            cout << n / i << " ";
        }
    }
    
    
}

int main(){
    
    int n;
    
    cout << "Please enter a positive integer >= 2: ";
    
    cin >> n;
    
    printDivisors(n);
    
    return 0;
}

