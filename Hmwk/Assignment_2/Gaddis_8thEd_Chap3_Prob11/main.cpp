/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on June 29, 2017, 07:34 PM
 * Purpose: Calculating the monthly costs/expenses to operate an automobile
 *          based on the users input. Inputting loan payment, insurance, gas, 
 *          oil, tires, and maintenance. Also calculate costs/expenses annually.
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
    double loan,
    insurance,
    gas,
    oil,
    tires,
    maintenance,
    monthlyTotal,
    annualTotal,
    year;
    
    //Initialize variables
    year = 12; /*months*/;
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout << "Enter monthly loan payment: $";
    cin >> loan;
    cout << "Enter monthly insurance payment: $";
    cin >> insurance;
    cout << "Enter monthly gas cost: $";
    cin >> gas;
    cout << "Enter monthly oil cost: $";
    cin >> oil;
    cout << "Enter monthly tire cost: $";
    cin >> tires;
    cout << "Enter monthly maintenance cost: $";
    cin >> maintenance;
    
    monthlyTotal = loan + insurance + gas + oil + tires + maintenance;
    annualTotal = monthlyTotal * year;
    
    //Output the transformed data
    cout << setprecision (2) << fixed;
    cout << "The total monthly cost/expenses to operate your automobile is: $"
            << monthlyTotal << endl;
    cout << "The total annual cost/expenses to operate your automobile is: $"
            << annualTotal << endl;
    
    //Exit stage right!
    return 0;
}

