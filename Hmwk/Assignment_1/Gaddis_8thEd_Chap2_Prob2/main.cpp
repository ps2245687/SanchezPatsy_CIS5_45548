/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on June 23, 2017, 09:36 PM
 * Purpose: Sales prediction for the East Coast company with 58% of total sales
 *          from $8.6 million in sales. 
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
    double sales,
    percent,
    totalSales;
    
    //Initialize variables
    sales = 8600000;
    percent = 0.58;
            
    //Input data
    
    //Map inputs to outputs or process the data
     totalSales = sales * percent;
    
    //Output the transformed data
    cout << "The East Coast company will generate 58% or $" << totalSales << 
            " of total sales for the year if they reach $" << sales 
            << " in sales." << endl;

    //Exit stage right!
    return 0;
}

