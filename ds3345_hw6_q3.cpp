//
//  ds3345_hw6_q3.cpp
//  ds3345_hw6_q3
//
//  Created by Damian Siniakowicz on 8/19/18.
//  Copyright © 2018 Damian Siniakowicz. All rights reserved.
//

#include <iostream>

using namespace std;

double factorial(int n){
    
    double partial = 1;
    
    for (int i = 1; i <= n; i++){
        
        partial *= i;
        
    }
    
    return partial;
    
}

double eApprox(int n){
    
    // what's my running time?
    // n^2?
    /*
     loop from 1 to n
     call factorial each time... why not just keep track of the value of the factorial up to that point
     */
    
    if (n == 1){
        return 1;
    }
    
    double factorial = 1;
    double sum = 1;
    
    for (int i = 1; i < n; i++){
        factorial *= i;
        sum += 1 / factorial;
    }
    
    return sum;
}

int main(){
    
    cout.precision(30);
    
    for (int n = 1; n <= 15; n++){
        cout << "n = " << n << '\t' << eApprox(n) << endl;
    }
    
    return 0;
}
