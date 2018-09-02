//
//  ds3345_hw3_q3.cpp
//  ds3345_hw3_q3
//
//  Created by Damian Siniakowicz on 7/28/18.
//  Copyright © 2018 Damian Siniakowicz. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    double a;
    double b;
    double c;
    double discriminant;
    double first_solution;
    double second_solution;
    
    cout << "Please enter value of a: ";
    cin >> a;
    cout << "Please enter value of b: ";
    cin >> b;
    cout << "Please enter value of c: ";
    cin >> c;
    
    if (a == 0 && b == 0){
        if (c == 0){
            cout << "This equation has an infinite number of solutions";
        }
        else {
            cout << "This equation has no solutions";
        }
    }
    
    else {
        discriminant = b * b - 4 * a * c;
        if (discriminant > 0){
            if (a != 0){
                first_solution = (-b + sqrt(discriminant)) / (2 * a);
                second_solution = (-b - sqrt(discriminant)) / (2 * a);
                cout << "This equation has two real solutions x=" << first_solution << ", x=" << second_solution;
            }
            else {
                cout << "This equation has two real solutions";
            }
        }
        else if (discriminant == 0){
            if (a != 0){
                first_solution = - b / (2 * a);
                cout << "This equation has one real solution x=" << first_solution;
            }
            else {
                cout << "This equation has one real solution";
            }
        }
        else {
            cout << "This equation has no real solutions";
        }
    }
    cout << endl;
    return 0;
}

