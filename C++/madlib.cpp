#include <iostream>
#include <cmath>
#include <string> //getline does not work without this. At least not on VScode

using namespace std;

int main()
{
    string color, PluralNoun, Celebrity;
    cout << "Enter a color:" << endl; 
    getline(cin, color);
    cout << "Enter a PluralNoun:" << endl;
    getline(cin, PluralNoun);
    cout << "Enter a Celebrity:" << endl;
    getline(cin, Celebrity);

    cout << "Roses are " << color << endl;
    cout << PluralNoun << " are blue" << endl;
    cout << "I love " << Celebrity << endl;

    return 0;
}