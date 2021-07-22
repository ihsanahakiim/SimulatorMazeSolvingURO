#include <iostream>
#ifndef COMPONENT.H
#define COMPONENT.H

using namespace std;

class component
{
public:
    int sensor;
};

component::component(/* args */)
{
}

component::~component()
{
}

typedef enum{
    off, on
} status; 

void SensorStat(){
    status one,two;
    status one = off;
    status two = on;
}

void Start(){
    sensor = two;
}
#endif