/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on July 4, 2017, 11:07 PM
 * Purpose: Determining whether the month and day  is equal to the year the 
 *          user inputs. Depending on the outcome it will display if it is a 
 *          Magic Date or not.
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
    int month,
        day,
        year;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout << "Enter a month (number form): ";
    cin >> month;
    cout << "Enter a day (1-31): ";
    cin >> day;
    cout << "Enter a year (two number form): ";
    cin >> year;
    
    //Output the transformed data
    if ( month * day == year )
        cout << "The date is magic!" << endl;
    else
        cout << "The date is not magic." << endl;
    
    //Exit stage right!
    return 0;
}

