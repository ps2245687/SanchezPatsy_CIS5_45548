/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on June 26, 2017, 12:22 AM
 * Purpose: Calculating the MPG of a car that holds 15 gallons of gas and
 *          travels a total of 375 miles on the fuel
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
    double milesDriven,
    gallonsOfGasUsed,
    mpg;
    
    //Initialize variables
    milesDriven = 375;
    gallonsOfGasUsed = 15;
    
    //Input data
    
    //Map inputs to outputs or process the data
    mpg = milesDriven / gallonsOfGasUsed;
    
    //Output the transformed data
    cout << "The MPG of car that holds 15 gallons of gas and travels 375 miles"
            "before refueling is: " << mpg << " MPG" << endl;
    
    //Exit stage right!
    return 0;
}

