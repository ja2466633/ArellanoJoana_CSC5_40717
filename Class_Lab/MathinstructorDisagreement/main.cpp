/* 
 * File:   main.cpp
 * Author: Joana Arellano
 * Created on January 7, 2015, 11:18 AM
 * Purpose: How easy computers can make mistakes
 */

//System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Executions begin here!
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    //declare 3 variables
    short a,b,c;
    //Prompt for a and b
    cout <<"Input 2 short values"<<endl;
    cin>>a>>b;
    //Sum the values
    c=a+b;
    //Output the results
    cout<<c<<" = "<<a<<" + "<<b<<endl;
    //Exit
    return 0;
}

