#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    // Write a program in C++ that converts from miles to kilometers. Your program should have a reasonable prompt for the user to enter a number of miles.
    cout << "Enter number of miles to be converted to kilometers:" << endl;
    double miles;
    cin >> miles;
    double kilometers = miles * 1.609;
    cout << "Kilometers: " << kilometers << endl;

}