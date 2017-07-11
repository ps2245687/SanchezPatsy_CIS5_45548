/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on July 10, 2017, 11:05 PM
 * Purpose: Predicting the size of a population of organisms. User must input
 *          the starting number of organisms (no less than 2), the average 
 *          daily population increase (as a positive percentage), and number of
 *          days they will multiply (no less than 1). A loop should display the 
 *          size of the population for each day. 
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
    int days,
        organisms;
    float sizeOfPop,
          increase,
          dailyPop;
    
    //Initialize variables
    days = 0;
    sizeOfPop = 0.0f;
    increase = 0.0f;
    dailyPop = 0.0f;
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout << "Population size predictor: \n\n";
    
    cout << "Enter starting number of organisms: ";
    
    cin >> sizeOfPop;
    
    //Output the transformed data
    while ( sizeOfPop < 2 )
    {
        cout << "Starting Population must be greater than 2! Enter again: ";
        cin >> sizeOfPop;
    }
    
    cout << "Enter number of days they will multiply: ";
    cin >> days;
    
    while ( days < 1 )
    {
        cout << "Number of days must be greater than 1! Enter again: ";
        cin >> days;
    }
    
    cout << "Enter average daily population increase (percentage): ";
    cin >> increase;
    
    while ( increase < 0 )
    {
        cout << "Average increase must be greater than 0! Enter again: ";
        cin >> increase;
    }
    
    for ( int organisms = 1; organisms <= days; organisms++ )
    {
      dailyPop = ( ( increase / 100 ) * sizeOfPop ) + sizeOfPop;
      cout << "\nThe population for day " << organisms << " is " << dailyPop 
              << endl;
      
      sizeOfPop = dailyPop;
    }
    //Exit stage right!
    return 0;
}

