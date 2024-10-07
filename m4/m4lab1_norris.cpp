
#include <iostream>
using namespace std;

// CSC 134
// M4LAB1
// norrisa
// 10/7/2024

int main() {
    cout << "M4LAB1" << endl;
    string emoji = "👽";
    //cout << emoji << endl;
    // Print sideways (row)
    for (int i = 0; i < 5; i++) {
        cout << "👽" << " ";
    }
    cout << endl; // finish the row

    // print down (column)
    for (int j = 0; j < 5; j++) {
        cout << emoji << endl;
    }
    cout << "Full version: " << endl << endl;

    const int ROWS = 4;
    const int COLS = 6;
    // put both together, to fill in the rectangle
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << emoji << " ";
        }
        cout << endl;
    }
}