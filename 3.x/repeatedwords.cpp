#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    /*string previous = " ";
    string current;
    while (cin >> current) {
        if (previous == current)
            cout << "Repeated word: " << current << endl;
        previous = current;
    }*/

    // now using composite assignment operators (chapter 3.6.1)

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
}