/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on June 29, 2017, 09:39 PM
 * Purpose: Calculating the  percentage Gas Tax on a gallon of gas, and the
 *          percentage profit made from a gallon of gas given.
 */

//System Libraries
#include <iostream>//Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float gasTaxPercent,
            profitPercent,
            totalTax,
            gallonCost,
            exciseTax,
            salesTax,
            tradeTax,
            FedExciseTax,
            profitGallon,
            profitTotal,
            salesTotal;
    
    //Initialize variables
    exciseTax = 0.39;
    salesTax = .08;
    tradeTax = 0.10;
    FedExciseTax = 0.184;
    profitGallon = 0.07;
            
    //Input data
    
    //Map inputs to outputs or process the data
    cout << setprecision (2);
    cout << "Enter amount it cost you per gallon the last time you put gas in"
            "your car: $";
    cin >> gallonCost;
    
    salesTotal = gallonCost * salesTax;
    
    totalTax = gallonCost - (exciseTax + tradeTax + FedExciseTax + salesTotal);
    
    gasTaxPercent = (gallonCost - totalTax) / totalTax * 100;
    
    profitPercent = (gallonCost - profitGallon);
    
    profitTotal = (profitGallon / profitPercent)* 100;

    //Output the transformed data
    cout << "The percentage of Gas Tax on a gallon of gas is: " << 
            gasTaxPercent << "%" << endl;
    cout << "The percentage profit made from a gallon of gas is: " <<
            profitTotal << "%" << endl;
    
    //Exit stage right!
    return 0;
}

