//
//  Header.h
//  Animal Farm
//
//  Created by Omar shaalan on 2/13/20.
//  Copyright © 2020 Omar shaalan. All rights reserved.
//comments in the cpp file

#ifndef Header_h
#define Header_h
class board
{
private:
    int boardsize;
    char **arr;
public:
    board(int c1r, int  c1c, int  c2r, int  c2c, int sz);//Intializes the array to be boardSize*boardSize
    char getBoardCell(int, int);
    
};
#endif /* Header_h */

