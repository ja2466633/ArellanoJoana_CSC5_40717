/* 
 * File:   main.cpp
 * Author: Joana Arellano
 * Created on January 12, 2015, 11:38 AM
 * Purpose: My car payment
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes

//Execution begins here.
int main(int argc, char** argv) 
{
    //Declare variables
    float intRte=0.0319f/12;   //http:www.capitalone.com
    float msrplus=4e4f;     //Loan amount for Buick Avenir
    char nPaymt=60;         //number of monthly payments
    
    //Calculate the monthly payments
    float temp=pow((1+intRte),nPaymt);
    float mPay=intRte*temp*msrplus/(temp-1);
    
    //Output the input for verification 
    cout<<"Interest per year in percent = "<<intRte*100*12<<endl;
    cout<<"Number of payments = "<<static_cast<int>(nPaymt)<<endl;
    cout<<"Loan Amount = "<<msrplus<<endl;
    //Output cay payment
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Avenir monthly car payment will cost = "<<mPay<<endl;
    return 0;
}

