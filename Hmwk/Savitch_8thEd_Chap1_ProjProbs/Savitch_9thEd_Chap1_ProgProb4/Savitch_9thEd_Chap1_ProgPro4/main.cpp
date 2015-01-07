/*
 * File:   main.cpp
 * Author:Joana Arellano
 * Created on January 6, 2015, 10:12 AM
 * Purpose: Solution to free fall problem
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float GRAVITY=32.174;// ft/sec^2

//Functions Prototypes

//Executions Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    unsigned int time;//(secs) 
    float dist;//distance (ft)
    //Prompt user for input
    cout<<"The program calculates free fall"<<endl;
    cout<<"Distance dropped in feet with an"<<endl;
    cout<<"Object starting at rest"<<endl;
    cout<<"Input the free-fall time to drop in seconds"<<endl;
    cout<<"The time input is an positive integer"<<endl;
    cin>>time;
    //Calculate the distance dropped
    dist=1.0f/2*GRAVITY*time*time;
    //dist=1/2.0f*GRAVITY*time*time;
    //dist=GRAVITY*time*time/2;
    //dist=0.5f*GRAVITY*time*time;
    //dist=5e-1f*GRAVITY*time*time;
    //Output the results
    cout<<"Distance dropped = "<<dist<<" (ft) "<<endl;
    //Exit stage right
    
    return 0;
}

