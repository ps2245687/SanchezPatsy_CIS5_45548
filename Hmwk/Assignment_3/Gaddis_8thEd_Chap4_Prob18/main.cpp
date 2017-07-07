/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on July 5, 2017, 10:27 PM
 * Purpose: Calculating the number of calories and fat grams in foods. Should 
 *          display the % of calories that come from fat and if it is less than 
 *          30% of total calories of the food then it should state that the 
 *          food is low in fat. Calories and fat grams cannot be less than 0. 
 *          The number of calories from fat cannot be greater than the total 
 *          number of calories and display an error message if it happens.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float calories,
    fatgrams,
    fatcalories,
    lowfat;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout << "Fat Gram Calculator.\n";
    cout << "\nEnter number of calories in the food: ";
    cin >> calories;
    
    //Output the transformed data
    if ( calories < 0 )
    {
        cout << "\nCalories cannot be less than 0.\n";
    }
    cout << "Enter number of fat grams in the food: ";
    cin >> fatgrams;
    if ( fatgrams < 0 || fatgrams > calories )
    {
        cout << "\nFatgrams cannot be less than 0 or greater than the calories."
                "\n";
    }
    
    fatcalories = fatgrams*9;
    lowfat = fatcalories/calories;
    
    cout << "\nCalories from fat: " << lowfat * 100 << "%\n";
    if ( lowfat < 0.30 )
        cout << "This food is low in fat.\n";
    
    
    //Exit stage right!
    return 0;
}

