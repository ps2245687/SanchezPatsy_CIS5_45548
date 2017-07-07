/* 
 * File:   main.cpp
 * Author: Patsy Sanchez Campos
 * Created on June 29, 2017, 08:40 PM
 * Purpose: Creating a word game asking the user for: name, age, city, college,
 *          profession, animal, pet name. Then display the input to display
 *          a story.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string name,
    city,
    college,
    profession,
    animal,
    petName;
    double age;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout << "Enter your name: ";
    getline (cin, name);
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore();
    cout << "Enter the name of a city: ";
    getline (cin, city);
    cout << "Enter the name of a college: ";
    getline (cin, college);
    cout << "Enter a profession: ";
    getline (cin, profession);
    cout << "Enter a type of animal: ";
    getline (cin, animal);
    cout << "Enter a pet's name: ";
    getline (cin, petName);
    
    //Output the transformed data
    cout << "\nWord Game" << endl;
    cout << "There once was a person named " << name << " who lived in " <<
            city << ".\nAt the age of " << age << ", " << name << " went to"
            " college at " << college << ". \n" << name << " graduated and went"
            " to work as a " << profession << ".\nThen, " << name << " adopted"
            " a(n) " << animal << " named " << petName << ".\nThey both "
            "lived happily ever after!" << endl;
    
    //Exit stage right!
    return 0;
}

