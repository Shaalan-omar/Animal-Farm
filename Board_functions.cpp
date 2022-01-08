//
//  Board_functions.cpp
//  Animal Farm
//
//  Created by Omar shaalan on 2/13/20.
//  Copyright © 2020 Omar shaalan. All rights reserved.
//

#include <stdio.h>
#include "Board.hpp"
using namespace std;

//Getter for the cell
char board::getBoardCell(int r, int c)
{
    char x = *(*(arr + r)+c);
    return x;
}
//Initializig the board itself
board::board(int c1r, int c1c, int c2r, int c2c, int sz)
{
    boardsize=sz;
    //Dynamic array with the board size so it only takes the required memory for the board size
    arr = new char*[boardsize];
    for (int i=0;i<boardsize; i++)
    {
        *(arr+i)= new char [boardsize];
    }
    
    for(int j=0; j<boardsize; j++)
    {
        for(int z=0; z<boardsize;z++ )
        {
            *(*(arr+j)+z)= '-';
        }
    }
    //Setting the position of the 2 cats
    *(*(arr+c1r)+c1c)= 'C' ;
    *(*(arr+c2r)+c2c)= 'C';
    
    *(*(arr+boardsize-(boardsize/2))+boardsize-1)='B';
}
