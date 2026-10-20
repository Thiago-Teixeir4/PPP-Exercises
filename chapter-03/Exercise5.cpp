#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    // Modify the program above to ask the user to enter floating-point values and store them in double variables. Compare the outputs of the two programs for some inputs of your choice. Are the results the same? Should they be? What's the difference?

    cout << "Enter two floating-point values: ";
    double val1;
    double val2;
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

    // They aren't the same, if you put two integers and their quotient doesn't output an integer, it will omit what's after the decimals on Exercise4, in Exercise5, it will give you the exact ratio between them.
    // The output also changes if you enter a floating-point value, the program won't work, for example when I put val1 as 2.5 and val2 as 5.2, it registered val1 as 2 and val2 as 0, creating an error in the ratio (you can't divide anything by 0!)
}