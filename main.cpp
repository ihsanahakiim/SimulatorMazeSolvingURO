#include <iostream>
#include "arena.hpp"
#include "objek.hpp"

using namespace std;

int main (){
    //char** arena;
    //arena = BuatPeta(20);
    //Node node1(5, 2, false, false, true, false, true, false);
    //Node node2(17, 7, false, false, true, false, true, false);
    //PrintPeta(arena, 20, node1);
    //PrintPeta(arena, 20, node2);
    //Bikin objek robot pake pointer
    Robot* robot = new Robot("south",  "east", "west"); //alokasi memori pointer
    cout << robot->getFront() << endl;
    cout << robot->getRight() << endl;
    cout << robot->getLeft() << endl;
    robot->BelokKanan(*robot);
    robot->BelokKanan(*robot);
    cout << robot->getFront() << endl;
    cout << robot->getRight() << endl;
    cout << robot->getLeft() << endl;
    return 0;
}