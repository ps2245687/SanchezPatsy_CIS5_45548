/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on July 5, 2017, 7:09 PM
 * Purpose: Calculating / measuring an objects mass and weight using the 
 *          following formula: Weight = mass * 9.8. Display a message if the 
 *          object is too heavy or too light.
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
    float mass,
    weight;
    
    //Initialize variables
    
    //Input data
    cout << "Enter an objects mass (Kilograms): ";
    cin >> mass;
    
    //Map inputs to outputs or process the data
    weight = mass * 9.8;
    
    //Output the transformed data
    if ( weight > 1000 )
    {
        cout << "The mass is: " << weight << " newtons \n";
        cout << "The object's mass is too heavy. \n";
    }
    if ( weight < 10 )
    {
        cout << "The mass is: " << weight << " newtons \n";
        cout << "The object's mass is too light. \n";
    }
    if ( weight >=10 && weight <=1000 )
    {
        cout << "The mass is: " << weight << " newtons \n";
    }
    
    //Exit stage right!
    return 0;
}

