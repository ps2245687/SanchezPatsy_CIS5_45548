/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on June 26, 2017, 12:46 AM
 * Purpose: Calculating the distance a car can travel on one full tank of gas
 *          20 gallons both driven in town 23.5 mpg and on the highway 28.9 mpg.
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
    double numberOfGallons,
    averageMpgTown,
    averageMpgHighway,
    distanceTown,
    distanceHighway;
    
    //Initialize variables
    numberOfGallons = 20;
    averageMpgTown = 23.5;
    averageMpgHighway = 28.9;
    
    //Input data
    
    //Map inputs to outputs or process the data
    distanceTown = numberOfGallons * averageMpgTown;
    distanceHighway = numberOfGallons * averageMpgHighway;
    
    //Output the transformed data
    cout << "The Distance a 20 gallon car can travel with an in town MPG of "
            "23.5 is: " << distanceTown << " Miles." << endl;
    cout << "The Distance a 20 gallon car can travel with a highway MPG of "
            "28.9 is: " << distanceHighway << " Miles." << endl;
    
    //Exit stage right!
    return 0;
}

