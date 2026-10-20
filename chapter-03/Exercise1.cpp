#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
int main () {
    // If you haven't done so already, do the Try This exercises from this chapter

    // Page 65: Get the "name and age" example to run. Then, modify it to write out the age in months: read the input in years and multiply (using the * operator) by 12. Read the age into a double to allow for children who can be very proud of being 5.5 years old rather than just 5.
    // cout << "Please enter your first name and age" << endl;
    // string first_name = "???";
    // double age = -1;
    // cin >> first_name >> age;
    // cout << "Hello, " << first_name << " (age in months: "<< age*12 << ")." << endl;

    // Page 68: Get this little program to run. Then, modify it to read an int rather than a double. Note that sqrt() is not defined for an int so assign n to a double and take sqrt() of that. Also "exercise some other operations. Note that for ints / is integer division and % is remainder (modulo), so that 5/2 is 2 (and not 2.5) and 5%2 is 1. The definitions of integer *, /, and % guarantee that for two positives ints a and b we have a/b * b + a%b == a.
    cout << "Please enter a integer value: ";
    int number; cin >> number;
    cout << "Number == " << number << endl
        << "Number + 1 == " << number + 1 << endl
        << "Three times number == " << number * 3 << endl
        << "Two times number == " << number * 2 << endl
        << "Number squared == " << number * number << endl
        << "Half of number == " << number / 2 << endl
        << "Square root of number == " << sqrt(static_cast<double>(number)) << endl;

    // Page 72: non-coding exercise

    // Page 73: Get the "repeated word detection program" to run. Test it with the sentence "She she laughed He He He because what he did did not look very very good good". How many repeated words were there? Why? What is the definition of word used here? What is the definition of repeated word? (For example, is "She she" a repetition?)

    int number_of_words = 0;
    string previous = " ";
    string current;

    while (cin >> current) {
        ++number_of_words;
        if (previous == current)
            cout << "Word number: " << number_of_words
                    << " repeated: " << current << endl;
        previous = current;
    }

    // Page 75: Compile the "Goodbye, cruel world!" program and examine the error messages. Did the compiler find all the errors? What did it suggest as the problems? Did the compiler get confused and diagnose more than four errors? Remove the errors one by on, starting with the lexically first, and see how the error messages change (and improve).

    /*int Main() {
    String s = "Goodbye, cruel world! ";
    cOut << S << '\n';
    }*/

    /* Errors:
     * main() function using 'M' instead of 'm'
     * string using 'S' instead of 's'
     * cout using 'O' instead of 'o'
     * using 'S' as output while 'S' variable was never defined (only 's' variable)
    */
        string s = "Goodbye, cruel world! ";
        cout << s << '\n';

    // Page 81: Run this program with a variety of inputs. Try small values (e.g., 2 and 3); try large values (larger than 127, larger than 1000); try negative values; try 56; try 89; try 128; try non-integer values (e.g., 56.9 and 56.2). In addition to showing how conversions from double to it and conversions from int to char are done on your machine, this program shows you what character (if any) your machine will print for a given integer value.

    // Safe conversions example:
    char c = 'x';
    int i1 = c;
    int i2 = 'x';
    char c2 = i1;

    cout << c << ' ' << i1 << ' ' << c2 << endl;
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
    int a = 20000;
    char c3 = a;
    int b = c3;
    if (a != b)
        cout << "oops!: " << a << " != " << b << endl;
    else
        cout << "Wow, we have large characters" << endl;

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