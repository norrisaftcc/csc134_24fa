#include <iostream>
#include <vector>
using namespace std;

const int RED = 1;   // live
const int BLACK = 0; // blank

int main() {
    // start with empty vector
    vector<int> chamber = {};

    chamber.push_back(RED);
    chamber.push_back(BLACK);
    chamber.push_back(RED);
    
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