#include <iostream>
#include "peta.hpp"

using namespace std;

int main (){
    char** arena;
    arena = BuatPeta(20);
    Node node1(5, 2, false, false, true, false, true, false);
    PrintPeta(arena, 20, node1);
    return 0;
}