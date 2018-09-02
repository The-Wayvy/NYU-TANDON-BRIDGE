//
//  ds3345_hw3_q1.cpp
//  ds3345_hw3_q1
//
//  Created by Damian Siniakowicz on 7/28/18.
//  Copyright © 2018 Damian Siniakowicz. All rights reserved.
//

#include <iostream>

using namespace std;

int main(){
    
    float first_item;
    float second_item;
    char club_card;
    float tax;
    
    float base_price;
    float discount_price;
    float total_price;
    
    cout << "Enter price of first item: ";
    cin >> first_item;
    cout << "Enter price of second item?: ";
    cin >> second_item;
    cout << "Does the customer have club card? [Y/N]: ";
    cin >> club_card;
    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin >> tax;
    
    base_price = first_item + second_item;
    
    if (first_item < second_item){
        first_item /= 2;
    }
    else{
        second_item /= 2;
    }
    
    discount_price = first_item + second_item; // you need to check if the discount is being applied, dummy
    discount_price *= .9;
    
    total_price = discount_price * (1 + tax/100);
    
    cout << "Base price: " << base_price << endl;
    cout << "Price after discounts: " << discount_price << endl;
    cout << "Total price: " << total_price << endl;
    
    
    return 0;
}
