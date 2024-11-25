#include <iostream>
#include <vector>
using namespace std;

const int RED = 1;   // live
const int BLACK = 0; // blank

int main() {
    vector<int> chamber = {RED, BLACK, RED};
    
    for (int round : chamber) {
        if (round == RED) {
            cout << "RED ";
        }
        if (round == BLACK) {
            cout << "BLACK ";
        }
    }
    cout << endl;
    return 0;
}