/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on June 25, 2017, 09:42 PM
 * Purpose:  To find the average of 28, 32, 37, 24, 33
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
    num3,
    num4,
    num5,
    sum,
    average;

    //Initialize variables
    num1 = 28;
    num2 = 32;
    num3 = 37;
    num4 = 24;
    num5 = 33;

    //Input data
    
    //Map inputs to outputs or process the data
    sum = num1 + num2 + num3 + num4 + num5;
    average = sum / 5;
            
    //Output the transformed data
    cout << "The Average of 28, 32, 37, 24, 33 is: " << average << endl;

    //Exit stage right!
    return 0;
}

