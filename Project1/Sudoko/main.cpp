/* 
 * File:   main.cpp
 * Author: Joana Arellano
 * Created on January 26, 2015, 10:50 AM
 * Purpose: Sudoku Solver.
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <fstream> //File I/O
#include <cmath>
int a[9][9];
using namespace std;
//User Libraries
//Global Constant
//Function Prototype
bool row(int i,int j, int n)
{
    for(int g=0;g<9;g++)
        if(a[i][g]== n)
            return 0;
    return 1;
}
bool column(int i,int j, int n)
{
    for(int g=0;g<9;g++)
        if(a[g][j]== n)
            return 0;
    return 1;
}
bool square(int i,int j, int n)
{
    int r=ceil((i+1)/3.);
    int c=ceil((j+1)/3.);
    for(int g=(r-1)*3;g<(r-1)*3+3;g++)
        for(int h=(c-1*3);h<(c-1)*3+3;h++)
            if(a[g][h]== n)
                return 0;
        return 1;
}

//Execution Begin
int main(int argc, char** argv) 
{   //Declare Variables for rules and instruction.
    char instNed;
    //Output game rules and instructions.
    cout<<"This game is Sudoku! Do you need instructions? Enter Y for Yes or N";
    cout<<" for no.\n";
    cin>>instNed;//Input choice.
    if(instNed=='Y'||instNed=='y'){
        cout<<"Sudoku is a logic-based number-placement game.The objective is ";
        cout<<"to fill a (9 X 9) grid with digits so that each column,each row \n";
        cout<<"and each of the nine (3 X 3) sub-grids that compose the grid ";
        cout<<"contains all of the digits from 1 to 9 without any number being";
        cout<<" repeated.\n";
    } else(instNed=='N'||instNed=='n');{
        cout<<"You are ready to begin \n";}
    
    //File I/O open
    using namespace std;
    ifstream in_stream;
    ofstream out_stream;
    in_stream.open("sudokuG.dat");
    //Fail test for files, Input and Output.
    if(in_stream.fail()){
        cout<<"input file open failed\n";
        exit(1);}
    out_stream.open("sudokuGC.dat");
    if(out_stream.fail()){
        cout<<"output file open failed \n";
        exit(1);}
    //Declare variable
    int unkwn=0,temp;
    bool b=1;
    for(int i=0;i<9;i++)
        for(int j=0;j<9;j++){
            in_stream>>a[i][j];
            if(!a[i][j])
                unkwn++;
        }
    //File I/O close
    in_stream.close( );
    out_stream.close( );
    while(unkwn && b)
    {
        b=0;
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++)
            {
                if(a[i][j])
                    continue;
                temp=0;
                for(int x=1;x<10;x++)
                    if( row(i,j,x)&& column(i,j,x) && square(i,j,x))
                    {
                        if(!temp)
                            temp=x;
                        else
                        {
                            temp=0;
                            break;
                        }
                    }
                if(temp)
                {
                a[i][j]=temp;
                b=1;
                unkwn--;
                }
            }
    }
    if(b=1)
        cout<<"Sudoku can not be solved. \n";
    else
        cout<<"Sudoku is solved. \n";
    cout<<"\n\n\n";
    for(int i=0;i<9;i++)
        for(int j=0;j<9;j++)
            cout<<a[i][j]<<" ";
    cout<<endl;
    return 0;
}
