/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on June 25, 2017, 11:17 PM
 * Purpose: Calculating the purchase price of 5 items plus tax
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
    double item1,
    item2,
    item3,
    item4,
    item5,
    subTotal,
    salesTax,
    taxTotal,
    grandTotal;
            
    //Initialize variables
    item1 = 15.95;
    item2 = 24.95;
    item3 = 6.95;
    item4 = 12.95;
    item5 = 3.95;
    salesTax = 0.07;
    
    //Input data
    
    //Map inputs to outputs or process the data
    subTotal = item1 + item2 + item3 + item4 + item5;
    taxTotal = subTotal * salesTax;
    grandTotal = subTotal + taxTotal;
    
    //Output the transformed data
    cout << "Item 1: $" << item1 << endl;
    cout << "Item 2: $" << item2 << endl;
    cout << "Item 3: $" << item3 << endl;
    cout << "Item 4: $" << item4 << endl;
    cout << "Item 5: $" << item5 << endl;
    cout << "Subtotal: $" << subTotal << endl;
    cout << "Sales Tax 7%: $" << taxTotal << endl;
    cout << "Grand Total: $" << grandTotal << endl;
    
    //Exit stage right!
    return 0;
}

