
#include <iostream>
using namespace std;

// CSC 134
// M2LAB1 - Case Study
// norrisa
// 9/9/2024

int main() {
    // set up variables
    string name;
    int length;
    int width;
    int height; 
    int volume; // in cubic feet

    // the price related variables - all in $
    const double COST_PER_CU_FT = 0.23;
    const double PRICE_PER_CU_FT = 0.5;
    double cost;
    double customer_price;
    double profit;

    // say hi
    /*
    cout << "Hi, what's your name? ";
    cin >> name;
    cout << "Nice to meet you, " << name << endl;
    */

    // Ask user questions
    cout << "Let's get the crate dimensions (in feet)." << endl;
    cout << "What's the length? ";
    cin >> length;
    cout << "What's the width? ";
    cin >> width;
    cout << "Finally, what's the height? ";
    cin >> height;

    // Calculations
    volume = length * width * height; 
    // cost calculations
    cost            = volume * COST_PER_CU_FT;
    customer_price  = volume * PRICE_PER_CU_FT;
    profit = customer_price - cost;

    // Output
    cout << "Crate is: " << width << " x " << length << " x " << height << endl;
    cout << "Total volume is: " << volume << " cubic feet." << endl;
    // TODO: output the cost, the customer price, and the profit
    
}