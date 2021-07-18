#include "robot.hpp"
#include "node.hpp"

class Arena{
    public:
    Arena(int x, int y);
    ~Arena();
    void printArena();
    void exploremaze();

    private:
    Robot robot;
    int x;
    int y;
};

Arena::Arena(int x, int y){
    this->x = x;
    this->y = y;
}

Arena::~Arena(){}

void Arena::printArena(){
    cout << "Arena KRSRI" << endl; 
    cout << "__________________________________"<< endl;
    cout << "|  1           2               3  |" << endl;
    cout << "|     _______________________     |" << endl;
    cout << "|     |                     |     |" << endl;
    cout << "| 15  |         9           |     |" << endl;
    cout << "|     |______      ______   |     |" << endl;
    cout << "|                        \\  |  4  |" << endl;
    cout << "| 11    10      8         \\_|     |" << endl;
    cout << "|      __________      7    |     |" << endl;
    cout << "|     |          \\          |     |" << endl;
    cout << "| 12  |           \\               |" << endl;
    cout << "|                  \\              |" << endl;
    cout << "| 13       14       |  6       5  |" << endl;
    cout << "|___________________|_____________|" << endl;
}

void Arena::exploremaze(){
    
}


// *******************
// *                 *
// * *************** *
// * *             * *
// * *             * *
// * ******   ***  * *
// *             * * *
// * *******       * *
// * *      *        *
// * *       *       *
// *          *      *
// *******************