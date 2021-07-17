#ifndef OBJEK_H
#define OBJEK_H
#include <iostream>
#include <string>

using namespace std;

//Class robot
class Robot {
    private:
        string front_side;
        int x, y;
    public:
        Robot(string hadap);
        ~Robot();
        void setHadap(string hadap);
        string getHadap();
        void setLoc(int x, int y);
};

//Implementasi method kelas Robot
Robot::Robot(string hadap){
    this->front_side = hadap;
}
//dtor
Robot::~Robot(){
}

void Robot::setLoc(int x, int y){
    this->x = x;
    this->y = y;
}

void Robot::setHadap(string hadap) {
    this->front_side = hadap;
}

string Robot::getHadap() {
    return this->front_side;
}

//Class Node
class Node {
    private:
        int x, y;
        bool isLilinAround;
        bool isDollAround;
        bool east, west, north, south;
    public:
        Node(int x, int y, bool isLilinAround, bool isDollAround, bool north, bool east, bool south, bool west);
        ~Node();
        void setNode(int x, int y, bool isLilinAround, bool isDollAround, bool north, bool east, bool south, bool west);
        bool getLilinStatus();
        bool getDollStatus();
        int getX();
        int getY();
};

//Implementasi methode kelas Node
Node::Node(int x, int y, bool isLilinAround, bool isDollAround, bool north, bool east, bool south, bool west){
    this->x = x;
    this->y = y;
    this->isLilinAround = isLilinAround;
    this->isDollAround = isDollAround;
    this->north = north;
    this->east = east;
    this->south = south;
    this->west = west;
}

Node::~Node(){
}

void Node::setNode(int x, int y, bool isLilinAround, bool isDollAround, bool north, bool east, bool south, bool west) {
    this->x = x;
    this->y = y;
    this->isLilinAround = isLilinAround;
    this->isDollAround = isDollAround;
    this->north = north;
    this->east = east;
    this->south = south;
    this->west = west;
}

bool Node::getDollStatus() {
    return this->isDollAround;
}

bool Node::getLilinStatus() {
    return this->isLilinAround;
}

int Node::getX() {
    return this->x;
}

int Node::getY() {
    return this->y;
}
#endif