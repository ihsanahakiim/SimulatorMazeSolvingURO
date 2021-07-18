#include "node.hpp"

class Robot{
    public:
        Robot();
        Robot(string name);
        ~Robot();
        string getName();
        void setFront(string arah);
        
    private:
    Node location;
    string name;
    int jumlahKaki;
    bool status;
    string front_side;
};

Robot::Robot() {
    this->name = "Mechamaru";
}

Robot::~Robot() {}

string Robot::getName(){
    return this->name;
}

void Robot::setFront(string arah){
    this->front_side = arah;
}