#include <iostream>
using namespace std;

// M6LAB1 
// norrisa
// 11/13

// constants
const int NUM_ROUNDS = 3;
const int RED = 1;   // live
const int BLACK = 0; // blank

int main() {
    // load the chamber
    int chamber[] = {RED, BLACK, RED};
    // cout << chamber << endl; // NOTE: this doesn't work!
    // use a range based loop to print all the rounds instead
    for (int round: chamber) {
        if (round == RED) {
            cout << "RED ";
        }
        if (round == BLACK) {
            cout << "BLACK ";
        }
    }
    cout << endl;


}