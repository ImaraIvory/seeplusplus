#include <iostream>
#include <cmath>


using namespace std;

int main()
{

    int age; // this declares the integer
    cout << "Enter your age: " << endl; // This will give the user a prompt
    cin >> age; // This will allow the user to enter the integer to be used as "age"

    cout << "You are " << age << " years old" << endl; // This will print out the string with the integer age that the user input into the program

    // age can be any type of variable. String makes it to where the user can input anything and get that same thing back. char will only print out the first character.

//    string name;
//    cout << "Enter your name: " << endl;
//    getline(cin, name);
//    cout << "Hello " << name << endl;

//    This program will not run because getline is not to be used with cin. Just pick one and use that.

    return 0;
}