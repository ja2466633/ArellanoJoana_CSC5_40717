/* 
 * File:   main.cpp
 * Author: Joana Arellano
 * Created on January 17, 2015, 8:35 AM
 * Purpose:Body Mass Index. Write a program that calculates and displays a
 *  person s body mass index (BMI). 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float bmi,hi,wi;//BMI, Height, Weight
    //Output prompt for input
    cout<<"This program will calculate and display a person body mass index(BMI)\n";
    cout<<"It will also determined if the person is overweight,underweight or \n";
    cout<<"sedentary."<<endl<<endl;
    cout<<"Please input your weight in pounds."<<endl;
    cin>>wi;//Input for weight
    cout<<"Please input your height in inches."<<endl;
    cin>>hi;//Input for height
    //Calculation 
    bmi=(wi*703)/(hi*hi); //Formula for BMI
    cout<<" Your Body Mass Index is "<<bmi<<endl<<endl;
    if(bmi>=18.5&&bmi<=25)//Sedentary weight
        cout<<" Your at a sedentary weight.\n";
    if(bmi<18.5)//Underweight
        cout<<" You are considered underweight. \n";
    if(bmi>25)//Overweight
        cout<<" You are considered overweight.\n";         
    //Exit Program 
    return 0;
}

