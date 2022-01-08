//
//  FarmAnimal_Functions.cpp
//  Animal Farm
//
//  Created by Omar shaalan on 2/13/20.
//  Copyright © 2020 Omar shaalan. All rights reserved.
//

#include <stdio.h>
#include "FarmAnimal.hpp"
using namespace std;



    string FarmAnimal::whatHappened(int size, int C1C,int C2C, int C1R, int C2R, string n)
    {
        for (int j=0; j<4; j++)
        {
            if(movement(n[j] , size))
            {
                if ((rowPosition==C1R && columnPosition==C1C) || (columnPosition==C2C && rowPosition==C2R))
                
                    return " Eaten by the cat\n";
                
                else if ((columnPosition == size - 1) && (rowPosition == size/2))
                
                    return " Used the bridge to Escape, CONGRATULATIONS, you won\n";
                
            }
            else
                return " WASTED, the animal has drowned outside the island, please try again.\n";
        }
        return " The animal has starved to death as he was stuck inside the game. \n";
    }



    void FarmAnimal::setName(string n)
    {
        name=n;
    }
    void FarmAnimal::setRowPosition(int r)
    {
        rowPosition=r;
    }
    void FarmAnimal::setColumnPosition(int c)
    {
        columnPosition=c;
    }
    FarmAnimal::FarmAnimal()
    {
        rowPosition= 0;
        columnPosition=0;
    }
    FarmAnimal::FarmAnimal(int row, int column, string n)
    {
        rowPosition=row;
        columnPosition=column;
        name= n;
    }
    int FarmAnimal::getrowPosition()
    {
        return rowPosition;
    }
    int FarmAnimal::getcolumnPosition()
    {
        return columnPosition;
    }
    bool FarmAnimal::movement(char c, int boardsize)
    {
        if (c =='u' || c =='U')
        {
            rowPosition--;
        }
       else if (c=='d' || c=='D')
        {
            rowPosition++;
        }
        else if (c=='l' || c=='L')
        {
            columnPosition--;
        }
        else if (c=='r' || c=='R')
        {
            columnPosition++;
        }

        if (columnPosition<0 || columnPosition>=boardsize)
        {
            return false;
        }
        else if (rowPosition<0 || rowPosition>= boardsize)
        {
            return  false;
        }
        else
            return true;
        
    }
