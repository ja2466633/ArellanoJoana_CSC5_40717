/* 
 * File:   main.cpp
 * Author: Joana Arellano
 * Created on January 17, 2015, 4:15 PM
 * Purpose: To write a program that asks for the length and width of two 
 * rectangles and output which rectangle has the larger area.
 */
//System Libraries
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution begins here 
int main(int argc, char** argv)
{
    //Declare variables
    float rect1L, rect2L;//Lengths of rectangles
    float rect1W, rect2W;//Widths of rectangles
    float rect1A, rect2A;//Areas of rectangles
    //Output prompt for input.
    cout<<"This program will take the length and width of 2 rectangles and";
    cout<<" calculate which of the two rectangles has a larger area."<<endl;
    cout<<"Please enter the length and width of the first rectangle in that";
    cout<<" order: "<<endl;
    //Input of L and W of first Rect.
    cin>>rect1L>>rect1W;
    //Output prompt for input of 2nd rect.
    cout<<"Please enter the length and width of the second rectangle in that";
    cout<<" order: "<<endl;
    //Input of L and W of second rect
    cin>>rect2L>>rect2W;
    //Calculation
    rect1A=rect1L*rect1W;
    rect2A=rect2L*rect2W;
    if (rect1A>rect2A)
    {
        cout<<"Rectangle 1 has a greater area than Rectangle 2. "<<endl;
        cout<<endl;
    }
    if (rect1A<rect2A)
    {
        cout<<"Rectangle 1 has a smaller area than Rectangle 2. "<<endl;
        cout<<endl;
    }
    if (rect1A==rect2A)
    {
        cout<<"Rectangle 1 and Rectangle 2 have same area. "<<endl;
        cout<<endl;
    }
    return 0;
}

