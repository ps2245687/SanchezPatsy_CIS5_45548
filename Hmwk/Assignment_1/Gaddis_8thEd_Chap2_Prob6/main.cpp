/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on June 25, 2017, 10:36 PM
 * Purpose: Calculating the annual pay of an employee who earns $2,200 biweekly
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
    double payAmount,
    payPeriods,
    annualPay;
            
    //Initialize variables
    payAmount = 2200.0;
    payPeriods = 26;
    //Input data
    
    //Map inputs to outputs or process the data
    annualPay = payAmount * payPeriods;
            
    //Output the transformed data
    cout << "The annual pay of an employee who earns $2,200 biweekly is $" 
    << annualPay << endl;
    //Exit stage right!
    return 0;
}

