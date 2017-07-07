/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on June 29, 2017, 02:40 PM
 * Purpose: Calculating the average rainfall for three months based on the
 *          users input.
 */

//System Libraries
#include <iostream>//Input - Output Library
#include <iomanip>
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string month1,
            month2,
            month3;
    double rain1,
            rain2,
            rain3,
            average;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout << "Enter month name: ";
    cin >> month1;
    cout << "Enter rainfall (inches): ";
    cin >> rain1;
    cout << "Enter month name: ";
    cin >> month2;
    cout << "Enter rainfall (inches): ";
    cin >> rain2;
    cout << "Enter month name: ";
    cin >> month3;
    cout << "Enter rainfall (inches): ";
    cin >> rain3;
    
    average = ( rain1 + rain2 + rain3 ) / 3;
    
    //Output the transformed data
    cout << setprecision(2) << fixed;
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and "
            << month3 << " is: " << average << endl;
    //Exit stage right!
    return 0;
}

