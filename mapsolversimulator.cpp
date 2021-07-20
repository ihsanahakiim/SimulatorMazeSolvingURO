#include <iostream>
#include <windows.h>
#include "component.h"
using namespace std;
const int Width = 30;
const int Height = 15;
const char wall = '|';
const char empty = ' ';
const char linedoor = '*';
COORD home; //gatau ini function library petanya gitu 

char Peta [Width][Height];

void PetanyaNgodingYak(){

    home.x = Height - 15;
    home.y = 5;

    // Pake yang adit ae :')
    for(int i = 0; i < MazeHeight; i++){
        for(int j = 0; j < MazeWidth; j++){

            if(i == 0 || i == Height - 1 || j == 0 || j == Width - 1){
                Maze[i][j] = wall;
            }
            else if(i == MazeExitCoords.Y && ii == MazeExitCoords.X){
                    Maze[i][j] = home;
            }
                       }
            else{
            Maze[i][j] = empty;
        }
    }
}

void FindWayHelp(){


        ///Masih mempelajari COORD tapi intinya mah ngeloop juga
        
}

int main(){

PetanyaNgodingYak();
FindWayHelp();

}
