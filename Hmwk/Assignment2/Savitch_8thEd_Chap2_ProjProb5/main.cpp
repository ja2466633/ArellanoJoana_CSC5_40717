/* 
 * File:   main.cpp
 * Author: Joana Arellano
 * Created on January 15, 2015, 3:02 PM
 * Purpose: Create program that calculates a Discount installment loan.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes

//Execution Begins Here.
int main(int argc, char** argv)
{
    //Declare Variables
    float NdLnV, perItr, durPyM, intRLn, totlLnI, loanAmt, mnthPay;
    //Output prompt for input of amount consumer needs.
    cout<<"This program will calculate a consumer loan, specifically a ";
    cout<<"discount installment loan. "<<endl;
    cout<<"Please enter the amount you need : "<<endl;
    //Input needed loan amount. 
    cin>>NdLnV;
    //Output prompt for input of interest rate on loan.
    cout<<"Please enter interest rate. "<<"Starting from 1 to 100 percent. "<<endl;
    //Input of interest rate.
    cin>>perItr;
    //Output prompt for duration of loan payment.
    cout<<"Please enter the duration of loan payment, in months. "<<endl;
    //Input of payment duration. 
    cin>>durPyM;
    //Calculation 
    intRLn=NdLnV*(perItr/100);//Interest rate of loan
    totlLnI=intRLn*(durPyM/12);//Total Loan Interest
    loanAmt=NdLnV+totlLnI;//Amount of loan with all interest included
    //Output Prompt for needed loan amount
    cout<<"For the needed loan amount of: $"<<NdLnV;
    cout<<" their is a total interest of: $"<<totlLnI<<endl;
    cout<<"Making your loan a total of: $"<<loanAmt<<endl;
    //Calculation for monthly payment.
    cout<<setprecision(2)<<fixed<<showpoint;
    mnthPay=loanAmt/durPyM;
    //Output of monthly payment for total loan.
    cout<<"Your monthly payment would be: $"<<mnthPay<<endl;
    return 0;
}

