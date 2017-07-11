/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on July 10, 2017, 07:48 PM
 * Purpose: Assuming the ocean level is rising 1.5 millimeters per year this 
 *          program will show the number of millimeters the ocean will rise
 *          each year for the next 25 years.
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
    int year;
    float rising;
    
    //Initialize variables
    rising = 0.0;
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout << "Ocean Level Rising Totals for Each Year:\n\n";
    
    //Output the transformed data
    for ( year = 1; year <= 25; year++ )
    {
        rising += 1.5;
        cout << "Year " << year << " = " << rising << " millimeters.\n" << endl;
    }
    
    //Exit stage right!
    return 0;
}

