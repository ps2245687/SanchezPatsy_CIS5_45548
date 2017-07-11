/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on July 10, 2017, 08:09 PM
 * Purpose: Displaying the number of calories burned on a treadmill that burns
 *          3.6 calories per minute after running for 5, 10, 15, 20, 25, and 
 *          30 minutes.
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
    float calBurnt,
          calPerMin;
    int mins;
    
    //Initialize variables
    calPerMin = 3.6;
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout << "Calories Burned on Treadmill (3.6 calories/min):\n\n";
    
    //Output the transformed data
    for ( mins = 5; mins <= 30; mins += 5)
    {
        calBurnt = mins * calPerMin;
        cout << "With " << mins << "(minutes) you burned " << calBurnt << 
                "(calories).\n" << endl;
    }
    
    //Exit stage right!
    return 0;
}

