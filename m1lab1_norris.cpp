// CSC 134
// M1LAB - Apple Orchard
// norrisa
// 8/26/24
// version 2, now with input


#include <iostream>
#include <iomanip>  // for setprecision()
using namespace std;

int main() {
  // Set up our variables
  string  name;
  int     num_apples;
  double  price_per_apple;
  double  total_cost;

  // Get user input
  cout << "What is your name? ";
  cin >> name;
  cout << "How many apples in stock? ";
  cin >> num_apples;
  cout << "How much is one apple? ";
  cin >> price_per_apple;
  
  // Say hello
  cout << "------------------" << endl;
  cout << "Welcome to the ";
  cout << name << " orchard!" << endl; 

  // Calculate the total cost
  total_cost = num_apples * price_per_apple;

  // set all decimals to 2 places
  cout << fixed << setprecision(2);
  
  // Give the answers
  cout << "You have " << num_apples << " apples" << endl;
  cout << "Each apple costs $" << price_per_apple << endl;
  cout << "The total is: $" << total_cost << endl;

}
  
  

