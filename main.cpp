#include <iostream>
#include "arena.hpp"
using namespace std;

int main(){
    Arena arena = Arena(36,14);
    arena.printArena();
    Node node_1 = Node(1,0,0,1,1,0,0,0);
    Node node_2 = Node(2,5,0,1,0,1,0,0);
    Node node_3 = Node(3,10,0,1,0,0,1,0);



    // pertama, robot muter ke kiri, ke arah east.
    // right wall following sampai nemu line door di kanan
    // 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8
    // line door ketemu
    // explore room 1 (node 9)
    // keluar dari room 1
    // belok kanan ke arah west
    // ganti left wall following sampai nemu line door di kiri
    // 10 -> 11 -> 12 -> 13 
    // explore room 2 (node 14)
    // keluar dari room 2
    // belok kanan ke arah north
    // left wall following lagi
    // 13 -> 12 -> 11 -> 15 -> 1
}