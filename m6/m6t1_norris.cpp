
#include <iostream>
using namespace std;

// CSC 134
// M6T1 - Arrays
// norrisa
// 11/11/2024

// global constant
const int NUM_DAYS = 5;

// prototypes
void partOne();
void partTwo();

int main() {
    partOne();
    partTwo();
}

void partOne() {
    // set up variables
    // for each day monday through friday (NUM_DAYS):
    // - ask how many cars
    // - add them to the total
    // when done, report total and average

    double total = 0;
    int todays_count = 0;
    double average = 0; 
    for (int day = 1; day <= NUM_DAYS; day++) {
        cout << "Please enter the count for day " << day << " of " << NUM_DAYS << ": ";
        cin >> todays_count;
        total += todays_count;
    }
    // find average - double divided by an int will give a double (if both ints, would be an int)
    average = total / NUM_DAYS;
    cout << "For all " << NUM_DAYS << " days:" << endl;
    cout << "Total cars: " << total << endl;
    cout << "Average: " << average << endl; 
    

}

void partTwo() {
    // set up variables
    // for each day monday through friday (NUM_DAYS):
    // - ask how many cars
    // - add them to the total
    // when done, report total and average
    int cars[NUM_DAYS]; // array to hold all values
    double total = 0;
    int todays_count = 0;
    double average = 0; 
    for (int day = 1; day <= NUM_DAYS; day++) {
        cout << "Please enter the count for day " << day << " of " << NUM_DAYS << ": ";
        cin >> todays_count;
        cars[day] = todays_count; // add to array
        total += todays_count;
    }
    // find average - double divided by an int will give a double (if both ints, would be an int)
    average = total / NUM_DAYS;
    cout << "For all " << NUM_DAYS << " days:" << endl;
    // print each day's count
    for (int day = 1; day <= NUM_DAYS; day++) {
        cout << cars[day] << ",";
    }
    cout << endl;
    cout << "Total cars: " << total << endl;
    cout << "Average: " << average << endl; 
    

}