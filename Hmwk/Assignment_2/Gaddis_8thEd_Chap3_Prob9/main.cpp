/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on June 29, 2017, 04:58 PM
 * Purpose: Calculating the amount of calories the user eats when eating 
 *          cookies. 30 cookies, 10 servings, 300 calories per serving.
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
    double cookies,
    calories;
    
    //Initialize variables
    
    //Input data
    
    /* Based on data provided : 30 (cookies) divided by 10 (servings) 
       equals 3 (cookies per serving). So that means that 3 cookies
     * (one serving) are 300 calories. Meaning that 300 (calories) divided
       by 3 (cookies) is equal to 100 (calories). 1 cookie is 100 calories*/
    
    //Map inputs to outputs or process the data
    cout << "Enter the amount of cookies you ate: ";
    cin >> cookies;
    
    calories = cookies * 100;
    
    //Output the transformed data
    cout << "You have eaten a total of: " << calories << " calories" << endl;
    
    //Exit stage right!
    return 0;
}

