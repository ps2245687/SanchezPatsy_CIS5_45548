/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on June 29, 2017, 06:57 PM
 * Purpose: Calculating the amount of insurance a property owner should 
 *          purchase. It is recommended to buy at least 80% of the amount it
 *          would cost to replace the building.
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
    double costToReplace,
    minimumInsurance,
    recommendation; 
    
    //Initialize variables
    minimumInsurance = 0.8;
            
    //Input data
    
    //Map inputs to outputs or process the data
    cout << "Enter the cost it would take to replace your building: $";
    cin >> costToReplace;
    
    recommendation = costToReplace * minimumInsurance;
    
    //Output the transformed data
    cout << "The minimum insurance recommended that you should purchase for "
            "your building is: $" << recommendation << endl;
    
    //Exit stage right!
    return 0;
}

