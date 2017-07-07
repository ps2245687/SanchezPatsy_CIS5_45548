/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 14, 2017, 11:32 AM
 * Purpose:  Calculating the sum of two numbers, 50 & 100.
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
        int num1, 
        num2, 
        total;
    
    //Initialize variables
        num1 = 50;
        num2 = 100;
               
    //Input data
    
    //Map inputs to outputs or process the data
        total = num1 + num2;
    
    //Output the transformed data
        cout << "The sum of " << num1 << " and " << num2 << " is " << total 
        << endl;
    //Exit stage right!
    return 0;
}

