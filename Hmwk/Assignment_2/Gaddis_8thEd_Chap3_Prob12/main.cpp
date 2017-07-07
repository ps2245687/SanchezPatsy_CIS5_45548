/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on June 29, 2017, 08:10 PM
 * Purpose: Converting Celsius to Fahrenheit. Formula is:
 *          F = (9/5) * C + 32
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
    double celsius,
    fahrenheit;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout << "Enter Celsius temperature: ";
    cin >> celsius;
    
    fahrenheit = (1.8 * celsius) + 32;
    
    //Output the transformed data
    cout << celsius << " Celsius = " << fahrenheit << " Fahrenheit" << endl;
    
    //Exit stage right!
    return 0;
}

