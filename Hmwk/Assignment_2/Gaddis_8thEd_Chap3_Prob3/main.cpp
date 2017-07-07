/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on June 28, 2017, 11:05 PM
 * Purpose: Calculating the average of of the users 5 inputed test scores.
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
    double test1,
    test2,
    test3,
    test4,
    test5,
    average;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout << "Enter test score 1: ";
    cin >> test1;
    cout << "Enter test score 2: ";
    cin >> test2;
    cout << "Enter test score 3: ";
    cin >> test3;
    cout << "Enter test score 4: ";
    cin >> test4;
    cout << "Enter test score 5: ";
    cin >> test5;
    
    average = ( test1 + test2 + test3 + test4 + test5 ) / 5;
    
    //Output the transformed data
    cout << setprecision(1) << fixed;
    cout << "The average is: " << average << endl;
    
    //Exit stage right!
    return 0;
}

