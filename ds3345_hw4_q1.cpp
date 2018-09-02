//
//  ds3345_hw4_q1.cpp
//  ds3345_hw4_q1
//
//  Created by Damian Siniakowicz on 8/5/18.
//  Copyright © 2018 Damian Siniakowicz. All rights reserved.
//

#include <iostream>

using namespace std;

int main(){
    
    int n;
    int j;
    int i = 1;
    const int MULTIPLY_BY_THIS = 2;
    
    cout << "Section A" << endl;
    
    cout << "Please enter a positive integer: ";
    
    cin >> n;
    
    while(i <= n){
        cout << i * MULTIPLY_BY_THIS << endl;
        i += 1;
    }
    
    cout << "Section B" << endl;
    
    cout << "Please enter a positive integer: ";
    
    cin >> n;
    
    for (j = 1; j <= n; j++){
        cout << j * MULTIPLY_BY_THIS << endl;
    }
    
    return 0;
}
