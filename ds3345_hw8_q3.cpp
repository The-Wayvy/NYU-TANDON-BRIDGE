//
//  ds3345_hw8_q3.cpp
//  ds3345_hw8_q3
//
//  Created by Damian Siniakowicz on 8/31/18.
//  Copyright © 2018 Damian Siniakowicz. All rights reserved.
//

#include <iostream>

using namespace std;

// by default
// when you pass an array as an argument to a function
// the array is passed by reference
// so you don't need to use & in the function signature

void reverseArray(int arr[], int arrSize){
    
    int first_value;
    int second_index;
    int first_index = 0;
    int half_length = arrSize / 2;
    
    while (first_index < half_length){
        
        second_index = arrSize - first_index - 1;
        
        first_value = arr[first_index];
        arr[first_index] = arr[second_index];
        arr[second_index] = first_value;
        
        first_index++;
    }
}

void removeOdd(int arr[], int & arrSize){
    
    int last_even = -1;
    int index = 0;
    int original_array_size = arrSize;
    int value_to_shift;
    
    // we replace odds with 0's, then shift the 0's over to the right.
    
    while (index < original_array_size){
        
        if (arr[index] % 2 == 0){
            value_to_shift = arr[index];
            arr[index] = 0;
            last_even += 1;
            arr[last_even] = value_to_shift;
        }
        else {
            arr[index] = 0;
            arrSize -= 1;
        }
        index++;
    }
}

void splitParity(int arr[], int arrSize){

    int last_odd = -1;
    int index = 0;
    int value_to_shift;
    
    // we replace odds with 0's, then shift the 0's over to the right.
    
    while (index < arrSize){
        
        if (arr[index] % 2 == 1){
            value_to_shift = arr[index];
            last_odd += 1;
            arr[index] = arr[last_odd];
            arr[last_odd] = value_to_shift;
        }
        index++;
    }
}


void printArray(int arr[], int arrSize){
    
    int index = 0;
    
    while (index < arrSize){
        cout << arr[index] << " ";
        index++;
    }
    
    cout << endl;
    
}


int main(){ 
    return 0;
}
