/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on June 28, 2017, 09:37 PM
 * Purpose: Program to calculate the MPG of a car based on users input.
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
    double tank,
    miles,
    mpg;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout << "Enter the number of gallons the car tank can hold: ";
    cin >> tank;
    cout << "Enter the number of miles per tank of gas: ";
    cin >> miles;
    mpg = miles / tank;
    
    //Output the transformed data
    cout << "The car's MPG is : " << mpg << endl;
    
    //Exit stage right!
    return 0;
}

