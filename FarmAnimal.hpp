//
//  Main game.hpp
//  Animal Farm
//
//  Created by Omar shaalan on 2/6/20.
//  Copyright © 2020 Omar shaalan. All rights reserved.
//

#ifndef Main_game_hpp
#define Main_game_hpp

#include <stdio.h>
#include<iostream>
using namespace std;

class FarmAnimal //A class for the object that represnts the animal character in the game itself
{
private:
    //We define the position of the animal using coordinates on the board game
    int rowPosition;
    int columnPosition;
    string name; //name of the animal
public:
    FarmAnimal(); //Default constructor for intialization of the position at cordinates (0,0)
    FarmAnimal(int, int, string); // Overloaded constructor for adjusting the position to the sent position
    int getrowPosition( ); //The ROW getter
    int getcolumnPosition(); // The COLUMN getter
    bool movement(char c, int boardsize); // A function that moves the animal and checks if the animal is within the border of the game board or out
    //Setters
    void setRowPosition(int );
    void setColumnPosition(int );
    void setName(string );
    //The player can only play 4 movements for each animal and he either wins, drown, gets eaten by one of the 2 cats or starve to death inside the game the function below checks what is the final fate of the animal after the 4 movements
    string whatHappened( int , int , int , int, int, string);
};
#endif /* Main_game_hpp */




