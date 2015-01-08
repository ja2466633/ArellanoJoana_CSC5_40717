/* 
 * File:   main.cpp
 * Author: Joana Arellano
 * Created on January 8, 2015, 11:01 AM
 * Purpose:
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes

//Execution begins
int main(int argc, char** argv) 
{
    //Declare variables
    int qrtrs, dimes, nickls, penns; //Quarters, dimes, nickels, pennis.
    float tlchngd;//Total change in dollars and cents
    float tlchngc;//Total change in cents
  
    //Output Prompt for input of quarters.
    cout<<"This program count your change! Hope your pocket is full! \n";
    cout<<"Enter the number of quarters you have. \n";
    //Input of Quarter by user.
    cin>>qrtrs;
    //Output Prompt for Dimes.
    cout<<"Enter the number of dimes you have. \n";
    //Input number of Dimes. 
    cin>>dimes;
    //Output Prompt for Nickels.
    cout<<"Enter the number of nickels you have. \n";
    //Input number of Nickels.
    cin>>nickls;
    //Output Prompt for Pennis.
    cout<<"Enter the number of pennis you have. \n";
    //Input number of Pennis.
    cin>>penns;
    //Output Prompt of total in dollars and cents.
    cout<<"You have ";
    tlchngd = qrtrs*(.25)+dimes*(.10)+nickls*(.05)+penns*(.01);
    cout<<tlchngd;
    cout<<" dollars with cents in change \n";
    cout<<"or simply \n";
    tlchngc = qrtrs*25+dimes*10+nickls*5+penns*1;//Output of total in cents only.
    cout<<tlchngc;
    cout<<" cents in change\n";
    //Exit stage
    return 0;
}

