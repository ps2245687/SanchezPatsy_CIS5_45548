/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on July 05, 2017, 6:34 PM
 * Purpose:  Calculate and display a persons body mass index. The BMI formula
 *           is BMI=weight*703/height^2. BMI under 18.5 is underweight, over
 *           25 is overweight, and between 18.5-25 is optimal.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float weight,
    height,
    bmi;
    
    //Initialize variables
    
    //Input data
    cout << "Body Mass Index \n";
    cout << "Enter your weight (lbs): ";
    cin >> weight;
    cout << "Enter your height (inches): ";
    cin >> height;
    
    //Map inputs to outputs or process the data
    bmi = ( weight * 703 ) / ( height * height );
    
    //Output the transformed data
    if ( bmi < 18.5 )
        cout << "\nYou are underweight\n.";
    if ( bmi >= 18.5 && bmi  <= 25 )
        cout << "\nYou are in optimal weight.\n";
    if ( bmi > 25 )
        cout << "\nYou are overweight.\n";
    
    //Exit stage right!
    return 0;
}

