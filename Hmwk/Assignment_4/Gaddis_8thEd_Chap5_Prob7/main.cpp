/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on July 10, 2017, 09:23 PM
 * Purpose: Calculating how much a person would earn over a period of time if
 *          their salary is one penny the first day and two pennies the second
 *          day, and continues to double each day. User must input the number
 *          of days worked and the output should display the salary for each day 
 *          in dollar amount.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int days;
    float amount,
        dailyPay,
        total;
    
    //Initialize variables
    days = 1;
    amount = 0.0;
    dailyPay = 0.01;
    total = 0.0;
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout << "Salary Calculator of Pennies for Pay: \n\n";
    
    cout << "Enter the days worked (must be a positive number): ";
    
    cin >> amount;
    
    //Output the transformed data
    for ( days = 1; days <= amount; days++ )
    {
        cout << right << setw(5) << days << " Day(s) ";
        cout << left << fixed << showpoint << setprecision(2) << ":" 
                << "$" << dailyPay << endl;
        total += dailyPay;
        dailyPay *=2;
    }
    cout << "\n Total pay: $" << total << endl;
    //Exit stage right!
    return 0;
}

