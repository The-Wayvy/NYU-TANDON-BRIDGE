//
//  ds3345_hw8_q1.cpp
//  ds3345_hw8_q1
//
//  Created by Damian Siniakowicz on 8/31/18.
//  Copyright © 2018 Damian Siniakowicz. All rights reserved.
//

#include <iostream>

using namespace std;

int minInArray(int arr[], int arrSize){
    
    int min_val = INT_MAX;
    
    for (int i = 0; i < arrSize; i++){
        
        int cur_val = arr[i];
        if (cur_val < min_val){
            
            min_val = cur_val;
        }
    }
    return min_val;
}

void printOccurrences(int arr[], int val){
    
    for (int i = 0; i < 20; i++){
        if (arr[i] == val){
            cout << i << " ";
        }
    }
}

int main(){
    
    int arr [20];
    int i = 0;
    int min;
    
    cout << "Please enter 20 integers separated by a space: " << endl;
    
    while (i < 20){
        cin >> arr[i];
        i++;
    }
    
    min = minInArray(arr, 20);
    
    cout << "The minimum value is " << min << ", and it is located in the following indices: ";
    
    printOccurrences(arr, min);
    
    cout << endl;
    
    return 0;
}
