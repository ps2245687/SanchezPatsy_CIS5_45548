/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on June 29, 2017, 03:22 PM
 * Purpose: Calculating the number of widgets on a pallet. The Yukon Widget
 *          Company manufactures widgets that weigh 12.5 lbs. 
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    double widget,
    emptyPallet,
    widgetPallet,
    numberOfWidgets;
    
    //Initialize variables
    widget = 9.2;
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout << "Enter empty pallet weight (pounds): ";
    cin >> emptyPallet;
    cout << "Enter pallet weight with widgets (pounds): ";
    cin >> widgetPallet;
    
    numberOfWidgets = ( widgetPallet - emptyPallet ) / widget;
    
    //Output the transformed data
    cout << "The number of widgets on the pallet is: " << numberOfWidgets 
            << endl;
    
    //Exit stage right!
    return 0;
}

