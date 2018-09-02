//
//  ds3345_hw6_q1.cpp
//  ds3345_hw6_q1
//
//  Created by Damian Siniakowicz on 8/17/18.
//  Copyright © 2018 Damian Siniakowicz. All rights reserved.
//

#include <iostream>

using namespace std;

int fib(int n){
    
    if (n == 1 || n == 2){
        return 1;
    }
    else{
        return (fib(n-1) + fib(n-2));
    }
}

int main(){
    
    int n;
    int nth_term;
    
    cout << "Please enter a positive integer: ";
    cin >> n;
    
    nth_term = fib(n);
    
    cout << nth_term << endl;
    
    return 0;
}
