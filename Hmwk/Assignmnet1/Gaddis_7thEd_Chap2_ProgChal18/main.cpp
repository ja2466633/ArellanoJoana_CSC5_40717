/* 
 * File:   main.cpp
 * Author: Joana Arellano
 * Created on January 8, 2015, 7:53 AM
 * Purpose: 
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float CONVPCT=100;//Percent conversion

//Functions Prototypes

//Executions Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    short custSrv=12467;//Customers Surveyed
    char perEDrk=14;//Percentage Energy Drinkers
    char perCDrk=64;//Percentage Citrus Drinkers
    //Calculate customer number requested
    short custE=custSrv*perEDrk/CONVPCT;//Energy Drinkers
    short custC=custE*perCDrk/CONVPCT;//Citrus Drinkers
    //Output the results
    cout<<"Customers surveyed that are Energy Drinkers = ";
    cout<<custE<<endl;
    cout<<"Customers surveyed hat are Citrus Drinkers = ";
    cout<<custC<<endl;
    //Exit stage right
    
    return 0;
}
