/* 
 * File:   main.cpp
 * Author: Joana arellano
 * Created on January 8, 2015, 8:37 AM
 * Purpose: To code a program that inputs a character and outputs that inputed character in the pattern of a C.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes

//Execution begins here :)
int main(int argc, char** argv)
{
    //Declare variable
    char c;//Character
    //Prompt user for a character
    cout<<"This program will output a large compiled \"C\"\n";
    cout<<"with a character you input.\n";
    cout<<"Now input a letter, choose wisely \n";//my joke of the day 
    //Input Character
    cin>>c;
    cout<<endl<<endl;
    //Output large letter "C" that user entered.
    cout<<"   "<<"   "<<c<<c<<c<<c<<endl;
    cout<<"     "<<c<<"    "<<c<<endl;
    cout<<"    "<<c<<"      "<<c<<endl;
    cout<<"   "<<c<<endl;
    cout<<"   "<<c<<endl;
    cout<<"   "<<c<<endl;
    cout<<"    "<<c<<"      "<<c<<endl;
    cout<<"     "<<c<<"    "<<c<<endl;
    cout<<"      "<<c<<c<<c<<c<<endl;
    //Exit 
    return 0;
}

