// CSC 134
// M5T1 - Basic Functions
// norris
// 10/28/24

#include <iostream>
using namespace std;

// function prototypes (short version)
void say_hello();
int give_the_answer();
int double_an_int(int number);

// main
int main() {
    cout << "Hello from main" << endl;
    say_hello();
    cout << "The magic number is: ";
    int number = give_the_answer();
    cout << number << endl;
    int twotimes = double_an_int(number);
    cout << "Double that is " << twotimes << endl;
    return 0;
}

// function definitions (full version)
void say_hello() {
    cout << "Hello from say_hello()" << endl;
}
int give_the_answer() {
    int answer = 42;
    return answer;
}
int double_an_int(int number) {
    int twotimes = number * 2;
    return twotimes;
}