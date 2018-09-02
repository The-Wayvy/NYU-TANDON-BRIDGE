//
//  ds3345_hw7_q2.cpp
//  ds3345_hw7_q2
//
//  Created by Damian Siniakowicz on 8/24/18.
//  Copyright © 2018 Damian Siniakowicz. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

void analyzeDivisors(int num, int & outCountDivs, int & outSumDivs){ // assumes the int >= 2
    
    int complementary_divisor;
    int root = int(round(pow(num,0.5))); // get the root rounded to the nearest integer
    outCountDivs = 1; // the integer 1 is a divisor
    outSumDivs = 1; // the integer 1 is a divisor
    
    for (int i = 2; i <= root; i++){
        if (num % i == 0){
            outCountDivs += 1;
            outSumDivs += i;
            complementary_divisor = num / i;
            if (i != complementary_divisor){
                outCountDivs += 1;
                outSumDivs += complementary_divisor;
            }
        }
    }
}

bool isPerfect(int num){ // does the number equal the sum of its proper divisors?
    
    
    int number_of_divisors;
    int sum_of_divisors;
    
    analyzeDivisors(num, number_of_divisors, sum_of_divisors);
    
    if (sum_of_divisors == num){
        return true;
    }
    else {
        return false;
    }
}




int main(){ // problem is that we're printing each amicable pair twice. just check if it's greater than i.
    
    // big O of 3 * M
    // for each number between 2 and n we have
    // one call to check for perfection
    // one call to check for potential amicable numbers
    // and possibly a third call to test the potential amicable number

    int num;
    int number_of_divisors;
    int sum_of_divisors;
    int amicable_number_of_divisors; // number of divisors the potential amicable number has
    int amicable_sum_of_divisors; // sum of the divisors of the potential amicable number
    
    cout << "Please enter a positive integer greater than 1: ";
    cin >> num;
    cout << '\n';
    
    for (int i = 2; i <= num; i++){ // a number can't be both perfect and amicable
        if (isPerfect(i)){
            cout << i << " is perfect" << endl;
        }
        
        else {
            analyzeDivisors(i, number_of_divisors, sum_of_divisors);
            if (sum_of_divisors > 1 && sum_of_divisors < num + 1 && sum_of_divisors > i){
                analyzeDivisors(sum_of_divisors, amicable_number_of_divisors, amicable_sum_of_divisors);
                if (amicable_sum_of_divisors == i){
                    cout << i << " and " << sum_of_divisors << " are amicable numbers" << endl;
                }
            }
        }
    }
    
    return 0;
}
