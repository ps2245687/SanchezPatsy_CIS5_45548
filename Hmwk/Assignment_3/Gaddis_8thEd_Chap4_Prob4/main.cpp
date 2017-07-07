/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on July 4, 2017, 11:43 PM
 * Purpose: Finding the area of two rectangles that the user inputs and then 
 *          states which one of the rectangles has a greater area or if both
 *          rectangle areas are the same.
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
    float length1,
    length2,
    width1,
    width2,
    area1,
    area2;
    
    //Initialize variables
    
    //Input data
    cout << "Enter length of rectangle 1: ";
    cin >> length1;
    cout << "Enter width of rectangle 1: ";
    cin >> width1;
    cout << "\nEnter length of rectangle 2: ";
    cin >> length2;
    cout << "Enter width of rectangle 2: ";
    cin >> width2;
    
    //Map inputs to outputs or process the data
    area1 = length1 * width1;
    area2 = length2 * width2;
    
    //Output the transformed data
    if ( area1 > area2 )
        cout << "\nThe area of rectangle 1 is greater than the area of "
                "rectangle 2.\n";
    else if ( area2 > area1 )
        cout << "\nThe area of rectangle 2 is greater than the area of "
                "rectangle 1.\n";
    else if ( area1 == area2 )
        cout << "\nThe area of both rectangles are the same." << endl;
    
    //Exit stage right!
    return 0;
}

