#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    /* 1:
     * This drill is to write a program that produces a simple form letter based on user input. begin by typing the code from 3.1 prompting a user to enter their first name and writing "Hello, first_name" where first_name is the name entered by the user. Then modify your code as follows: change the prompt to "Enter the name of the person you want to write to" and change the output yo "Dear first_name,". Don't forget the comma.
    */
    string first_name;
    cout << "Enter the name of the person you want to write to: " << endl;
    cin >> first_name;
    cout << "Dear " << first_name << "," << endl;

    /* 2:
     * Add an introductory line or two like "How are you? I am fine. I miss you." Be sure to ident the first line. Add a few more lines of your choosing - It's your letter
     */
    cout <<
            "How are you? it's been a while since we last saw each other and i just wanted to see how you're doing, i've been learning C++ just like you told me not to, but it's been very fun, i'm mostly using it to learn the principles of programming, but i'm getting the hang of the language"
            << endl;

    /* 3:
     * Now prompt the user for the name of another friend, and store it in friend_name. Add a line to your letter: "Have you seen friend_name lately?"
     */
    cout << "Enter another friend's name: " << endl;
    string friend_name;
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?" << endl;

    /* 4:
     * Declare a char variable called friend_sex and initialize its value to 0. Prompt the user to enter an m if the friend is male and an f if the friend is female. Assign the value entered to the variable friend_sex. Then use two if statements to write the following:
     *
     * If the friend is male, write "If you see friend_name, please ask him to call me."
     *
     * If the friend is female, write "If you see friend_name, please ask her to call me."
     */
    char friend_sex = '0';
    cout << "Enter 'm' if the friend's pronouns are he/him, 'f' if she/her or anything else for they/them: " << endl;
    cin >> friend_sex;

    if (friend_sex == 'm')
        cout << "If you see " << friend_name << " please ask him to call me." << endl;
    else if (friend_sex == 'f')
        cout << "If you see " << friend_name << " please ask her to call me." << endl;
    else {
        cout << "If you see " << friend_name << " please ask them to call me." << endl;
    }


    /* 5:
     * Prompt the user to enter the age of the recipient and assign it to an int variable age. Have your program write "I hear you just had a birthday and you are age years old." If age is 0 or less or 110 or more, call error("You are kidding!").
     */
    cout << "Enter recipient's age: " << endl;
    int recipient_age;
    cin >> recipient_age;
    while (recipient_age <= 0 || recipient_age >= 110) {
        cout << "You're kidding!" << endl;
        cin >> recipient_age;
    }
    cout << "I hear you just had your birthday and you are " << recipient_age << " years old!" << endl;

    /*
     * 6:
     * Add this to your letter:
     * If your friend is under 12, write "Next year you will be age+1."
     * If your friend is 17, write "Next year you will be able to vote"
     * If your friend is over 70, write "I hope you are enjoying retirement."
     *
     * Check your program to make sure it responds appropriately to each kind of value.
     */
    if (recipient_age < 12)
        cout << "Next year you will be " << recipient_age + 1 << "." << endl;
    if (recipient_age == 17)
        cout << "Next year you will be able to vote!" << endl;
    if (recipient_age > 70)
        cout << "I hope you are enjoying retirement." << endl;


    /*
     * Add "Yours sincerely" followed by two blank lines for a signature, followed by your name.
     */
    string user_name;
    cout << "Enter your name: " << endl;
    cin >> user_name;
    cout << "Yours sincerely, \n\n\n" << user_name << "." << endl;
}