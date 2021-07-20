#ifndef OBJEK_H
#define OBJEK_H
#include <iostream>
#include <string>

using namespace std;

//Class robot
class Robot {
    private:
        string front_side;
        string left, right;
        int x, y;
    public:
        Robot(string hadap, string left, string kanan);
        ~Robot();
        void setRobot(string hadap, string left, string right);
        string getFront();
        string getLeft();
        string getRight();
        void setLoc(int x, int y);
};

//Implementasi method kelas Robot
Robot::Robot(string hadap, string left, string right){
    this->front_side = hadap;
    this->left = left;
    this->right = right;
}
//dtor
Robot::~Robot(){
}

void Robot::setLoc(int x, int y){
    this->x = x;
    this->y = y;
}

void Robot::setRobot(string hadap, string left, string right) {
    this->front_side = hadap;
    this->left = left;
    this->right = right;
}

string Robot::getFront() {
    return this->front_side;
}

string Robot::getLeft() {
    return this->left;
}

string Robot::getRight() {
    return this->right;
}

//Class Node
class Node {
    private:
        int x, y;
        bool isLilinAround;
        bool isDollAround;
        int east, west, north, south;
        bool LineDoor;
    public:
        Node(int x, int y, bool isLilinAround, bool isDollAround, int north, int east, int south, int west);
        ~Node();
        void setNode(int x, int y, bool isLilinAround, bool isDollAround, int north, int east, int south, int west);
        bool getLilinStatus();
        bool getDollStatus();
        int getX();
        int getY();
};

//Implementasi methode kelas Node
Node::Node(int x, int y, bool isLilinAround, bool isDollAround, int north, int east, int south, int west){
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

void Node::setNode(int x, int y, bool isLilinAround, bool isDollAround, int north, int east, int south, int west) {
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