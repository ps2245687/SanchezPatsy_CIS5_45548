/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on June 23, 2017, 10:41 PM
 * Purpose:  Computing total Sale tax 6% from a $95 purchase
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
    double purchasePrice, 
    stateTax, 
    countyTax,
    purchaseWithState,
    purchaseWithCounty,
    totalSalesTax;
    
    //Initialize variables
    purchasePrice = 95.00;
    stateTax = 0.04;
    countyTax = 0.02;
    
    //Input data
    
    //Map inputs to outputs or process the data
    purchaseWithState = purchasePrice * stateTax;
    purchaseWithCounty = purchasePrice * countyTax;
    totalSalesTax = purchasePrice + purchaseWithState + purchaseWithCounty;
   
    //Output the transformed data
    cout << "The total sales tax from a purchase of $95 is $" << totalSalesTax
    << endl;
    //Exit stage right!
    return 0;
}

