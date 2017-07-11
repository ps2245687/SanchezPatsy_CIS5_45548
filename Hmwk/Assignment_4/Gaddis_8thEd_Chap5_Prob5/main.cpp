/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on July 10, 2017, 8:30 PM
 * Purpose: Displaying the projected membership rate increase per year of a
 *          country club currently charging $2,500 per year and will increase 
 *          4% each year for the next 6 years.
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
    int years;
    float membership,
          increase,
          newRate;
    
    //Initialize variables
    membership = 2500.0;
    years = 6;
    increase = 0.04;
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout << "Country Club Membership Projected Fee Increase Per Year: \n\n";
    
    //Output the transformed data
    for ( years = 1; years <=6; years++ )
    {
        newRate = membership * ( 1 + years * increase);
        cout << "For year " << years << " the new projected rate is: $" << 
                newRate << "\n" << endl;
    }
    //Exit stage right!
    return 0;
}

