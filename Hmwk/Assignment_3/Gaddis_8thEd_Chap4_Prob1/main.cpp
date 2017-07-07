/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on July 4, 2017, 10:31 PM
 * Purpose:  Finding which number is smaller and which number 
 *           is greater that is inputed by the user.
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
    float number1,
    number2;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout << "Enter two numbers: ";
    
    cin >> number1 >> number2;
    
    //Output the transformed data
    if ( number1 > number2 )
        cout << "The larger number is: " << number1 << endl;
    else
        cout << "The larger number is: " << number2 << endl;
    
    //Exit stage right!
    return 0;
}

