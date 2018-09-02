//
//  ds3345_hw6_q2.cpp
//  ds3345_hw6_q2
//
//  Created by Damian Siniakowicz on 8/17/18.
//  Copyright © 2018 Damian Siniakowicz. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void printShiftedTriangle(int n, int m, char symbol){
    
    int triangle_length;
    int padding_length;
    int max_triangle_length = n * 2 - 1;
    
    for (int i = 1; i <= n; i++){
        triangle_length = i * 2 - 1;
        padding_length = (max_triangle_length - triangle_length) / 2;
        cout << string(m, ' ') << string(padding_length, ' ') << string(triangle_length, symbol) << endl;
    }
}

void printPineTree(int n, char symbol){
    
    // size of the largest triangle base will be 2 * n + 1
    // call printShiftedTriangle n times, use a loop from 1 to n
    // each time call it with (n+1, max_length of any triangle base - max_length of this triangle base)
    
    int tri_base_len;
    int max_tri_base_len = n * 2 + 1;
    int padding_length;
    
    for (int i = 1; i <= n; i++){
        tri_base_len = (i+1) * 2 - 1;
        padding_length = (max_tri_base_len - tri_base_len) / 2;
        printShiftedTriangle(i+1, padding_length, symbol);
    }
    
}

int main(){
    
    printShiftedTriangle(3, 4, '+');
    
    printPineTree(3, '#');
    
    return 0;
}
