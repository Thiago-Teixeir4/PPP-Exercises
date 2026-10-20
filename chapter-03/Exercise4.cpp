#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    // Write a program that grants the user to enter two integer values. Store these values in int variables named val1 and val2. Write your program to determine the smallest, largest, sum, difference, product, and ratio of these values and report them to te user

    cout << "Enter two integer values: ";
    int val1;
    int val2;
    cin >> val1 >> val2;

    cout << "val1 = " << val1 << endl;
    cout << "val2 = " << val2 << endl;
    if (val1 < val2)
        cout << "smallest == " << val1 << endl
        << "largest == " << val2 << endl;
    else cout << "smallest == " << val2 << endl
        << "largest == " << val1 << endl;

    cout << "sum == " << val1 + val2 << endl
    << "difference == " << val1 - val2 << endl
    << "product == " << val1 * val2 << endl
    << "Ratio == " << val1 / val2 << endl
    << endl;
}