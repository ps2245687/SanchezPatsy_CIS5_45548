/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on June 24, 2017, 11:04 PM
 * Purpose: Computing the tax 6.75% and tip 20% of a $88.67 restaurant bill
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    double mealCost, 
    tax,
    tip,
    mealAndTax,
    mealAndTip, 
    totalBill;
    
    //Initialize variables
    mealCost = 88.67, 
    tax = 0.0675,
    tip= 0.2,
            
    //Input data

    //Map inputs to outputs or process the data
    mealAndTax = mealCost * tax;
    mealAndTip = mealCost * tip;
    totalBill = mealCost + mealAndTax + mealAndTip;
    
    //Output the transformed data
    cout << "Meal Cost: $" << mealCost << endl;
    cout << "Tax 6.75%: $" << mealAndTax << endl;
    cout << "Tip 20%: $" << mealAndTip << endl;
    cout << "Total Bill: $" << totalBill << endl;
    
    //Exit stage right!
    return 0;
}

