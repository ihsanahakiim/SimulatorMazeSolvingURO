#include <iostream>
#include <string>
using namespace std;

class Node{
    public:
    Node();
    Node(int number, int x, int y, int north, int west, int south, int east, bool room_status);
    ~Node();
    int getNumber();        // nama node
    int getWest();          // wall sebelah barat
    int getEast();          // wall sebelah timur
    int getNorth();         // wall sebelah utara
    int getSouth();         // wall sebelah selatan
    bool getRoomStatus();   // di dalam ruangan atau tidak

    private:
    int number;
    int x, y;
    int north, west, south, east;
    bool room_status;
};

Node::Node(int number, int x, int y, int north, int west, int south, int east, bool room_status){
    this->number = number;
    this->x = x;
    this->y = y;
    this->north = north;
    this->west = west;
    this->south = south;
    this->east = east;
    this->room_status = room_status;
}

Node::~Node(){}

int Node::getNumber(){
    return this->number;
}

int Node::getWest(){
    return this->west;
}

int Node::getEast(){
    return this->east;
}

int Node::getNorth(){
    return this->north;
}

int Node::getSouth(){
    return this->south;
}

bool Node::getRoomStatus(){
    return this->room_status;
}