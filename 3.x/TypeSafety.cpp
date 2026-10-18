//
// Created by thiago on 12/10/2026.
//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    // Safe conversions example:
    /*char c = 'x';
    int i1 = c;
    int i2 = 'x';
    char c2 = i1;

    cout << c << ' ' << i1 << ' ' << c2 << endl;*/
    /*
     *  Following conversions are safe
     *  bool to char
     *  bool to int
     *  bool to double
     *  char to int
     *  char to double
     *  int to double (!)
     */


    // Unsafe conversions example:
    /*int a = 20000;
    char c3 = a;
    int b = c3;
    if (a != b)
        cout << "oops!: " << a << " != " << b << endl;
    else
        cout << "Wow, we have large characters" << endl;*/

    // This is a narrowing conversion, the value assigned to c3 (20000) is to big to fit in a char.

    // Testing code:

    double d = 0;
    while (cin >> d) {
        int i = d;
        char c = i;
        int i2 = c;
        cout << "d==" << d << endl
                << "i==" << i << endl
                << "i2==" << i2 << endl
                << "char(" << c << ")" << endl;
    }

    /*
     * Following conversions are unsafe:
     * double to int
     * double to char
     * double to bool
     * int to char
     * int to bool
     * char to bool
     */
}