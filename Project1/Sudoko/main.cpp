/* 
 * File:   main.cpp
 * Author: Joana Arellano
 * Created on January 26, 2015, 10:50 AM
 * Purpose: Created a Sudoku game for the user to play.
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <fstream> //File I/O
#include <cmath>
using namespace std;
//User Libraries
//Global Constant
//Function Prototype
//Execution Begin
int main(int argc, char** argv) 
{
    //File I/O open
    using namespace std;
    ifstream in_stream;
    ofstream out_stream;
    in_stream.open("SudokoGame.dat");
    out_stream.open("SudoGCnt.dat");
    //Declare Variables
    char instNed;
    //Output game rules and instructions.
    cout<<"This game is Sudoku! Do you need instructions? Enter Y for Yes or N";
    cout<<" for no.\n";
    cin>>instNed;
    if(instNed=='Y'||instNed=='y'){
        cout<<"Sudoko is a logic-based number-placement game.The objective is ";
        cout<<"to fill a 9X9 grid with digits so that each column,each row \n";
        cout<<"and each of the nine 3×3 sub-grids that compose the grid ";
        cout<<"contains all of the digits from 1 to 9 without any number being";
        cout<<" repeated."<<endl;
    } else(instNed=='N'||instNed=='n');{
        cout<<"You are ready to begin"<<endl;}
    //File I/O close
    in_stream.close( );
    out_stream.close( );
    
    return 0;
}