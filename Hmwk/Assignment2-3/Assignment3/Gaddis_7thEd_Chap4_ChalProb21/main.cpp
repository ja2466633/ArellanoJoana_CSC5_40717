/* 
 * File:   main.cpp
 * Author: Joana Arellano
 * Created on January 14, 2015, 4:52 PM
 * Purpose: Write a program that is like a geometry calculator. it displays a 
 * menu and allow user to choose a option and carry out an equation. 
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins here
int main(int argc, char** argv) 
{
    int choice;
    do
    {
        cout<<endl
            <<"Choose one of the following. \n"
            <<"1. Calculate the Area of a Circle. \n"
            <<"2. Calculate the Area of a Rectangle. \n"
            <<"3. Calculate the Area of a Triangle. \n"
            <<"4. Quit. \n";
        cin>>choice;
        switch(choice)
        {
            case 1:
                //Declare variable 
                float radius, area;
                //Output prompt for input
                cout<<"Enter radius: \n";
                //Input radius
                cin>>radius;
                //Calculation of area
                cout<<setprecision(2)<<fixed<<showpoint;
                area=3.14159*(radius*radius);
                //Output result
                cout<<"The Area of circle is: "<<area<<endl;
                cout<<endl;
                break;
            case 2:
                //Declare variable
                float length;
                float width;
                float area1;
                //Output prompt for input
                cout<<"Enter Length \n";
                //Input length
                cin>>length;
                //Output prompt for input
                cout<<"Enter Width \n";
                //Input width
                cin>>width;
                //Calculation of area
                cout<<setprecision(2)<<fixed<<showpoint;
                area1=length*width;
                //Output result
                cout<<"The Area of Rectangle is: "<<area1<<endl;
                cout<<endl;
                break;
            case 3:  
                //Declare variable
                float base, height, area2;
                //Output Prompt for input
                cout<<"Enter the length of Triangle base: \n";
                //Input Base
                cin>>base;
                //Output prompt for input
                cout<<"Enter height of Triangle: \n";
                //Input height
                cin>>height;
                //Calculation of area
                cout<<setprecision(2)<<fixed<<showpoint;
                area2=(base*height)*.5;
                //Output result
                cout<<"Area of Triangle is: "<<area2<<endl;
                cout<<endl;
                break;
            case 4:
                cout<<"Good Bye! \n";
                cout<<endl;
                break;
            default:
                cout<<"Not a valid choice. \n"
                    <<"Choose again. \n";
        }
    }while (choice !=4);
    
    return 0;
}

