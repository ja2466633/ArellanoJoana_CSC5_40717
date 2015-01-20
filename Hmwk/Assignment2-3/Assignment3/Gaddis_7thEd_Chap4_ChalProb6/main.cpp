/* 
 * File:   main.cpp
 * Author: Joana Arellano
 * Created on January 14, 2015, 2:53 PM
 * Purpose: Mass and Weight.Program that asks the user to enter an object a
 * mass, and then calculates and displays its weight. 
 */

//System Libraries 
#include <iostream>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes 

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables 
    float wi,newt,mass;//Weight, newton, mass
    //Outputting input
    cout<<" This program will calculate and display the weight of your object.\n";
    cout<<" by using mass to indicate the weight.\n\n"<<endl;
    cout<<" What is the objects mass."<<endl;
    cin>>mass;
    //Calculate
    wi=mass*9.8;
    //Results
    cout<<"The weight of your object is "<<wi<<" newton"<<endl;
    if (wi>1000)
        cout<<" Your object is more than 1000 newton, its two heavy!! ="<<wi<<endl;
    if (wi<10)
        cout<<" Your object is less than 10 newton,  its too light. ="<<wi<<endl;
    
    //Exit Program
    return 0;
}

