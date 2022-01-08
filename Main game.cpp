//
//  Main game.cpp
//  Animal Farm
//
//  Created by Omar shaalan on 2/6/20.
//  Copyright © 2020 Omar shaalan. All rights reserved.
//
#include "FarmAnimal.hpp"
#include "Board.hpp"
#include <iostream>
#include <string.h>
#include<fstream>
using namespace std;



int main()
{
    //Declaring needed variables
    int r,c;
    string namee;
    int c1r=3;
    int c1c=5;
    int c2r=4;
    int c2c=1;
    int board_size,nofFarmAnimals;
    
    cout<<"Please enter the size of the board between 9 and 12 only below: \n";
    cin>> board_size;
    
    //a condition to ensure the size of the board is not exceeded
    if (board_size> 12 || board_size<9)
    {
        cout<<"Please enter the size of the board between 9 and 12\n";
        cin>>board_size;
    }
    /*else
        board_size=board_size;
    */
//Board is initialized
board b1 (c1r, c1c, c2r, c2c,board_size);
    
    
    cout<<"Enter the number of the animals in the game below\n";
    cin>>nofFarmAnimals;
    
    
     cout<<"enter the name" <<endl<<" then row position "<<endl<<" then column poistion each argument under the other"<<endl<<" to avoid any confusion\n";
    
    FarmAnimal *arr = new FarmAnimal [nofFarmAnimals]; //Creating positions for the all the animals in a dynamic way
        for(int i=0; i<nofFarmAnimals;i++)
            {
       
            cin>>namee;
            arr[i].setName(namee);
            cin>>r;
            arr[i].setRowPosition(r);
            cin >>c;
            arr[i].setColumnPosition(c);
            }
    //File handeling
    fstream myfile;
    myfile.open ("/Users/omarshaalan/Desktop/movements.txt"); //Movements are stored in a text file
    string *A = new string[nofFarmAnimals];
    
        for(int i=0; i<nofFarmAnimals; i++)
            {
            getline(myfile,A[i]);
              //*  for (int j=0; j<nofFarmAnimals; j++)
               // {
                cout<< "Animal "<< i+1 << arr[i].whatHappened(board_size, c1c, c2c, c1r, c2r, A[i]) ;
               // }
            
            }
    myfile.close();
    //End of file handeling
    
    

    return 0;
}




//Drafts
  
/*  for (int i=0; i<nofFarmAnimals; i++)
  {
      FarmAnimal x;
      cout<<"your output is "<<x.whatHappened(nofFarmAnimals, c1c, c2c, c1r, c2r, namee);
  }*/






/*char m;
   cout<<"Are these the movements you entered? if yes please enter them seperatly below: "<<endl;
   */
   
