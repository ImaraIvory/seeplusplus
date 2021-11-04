#include <iostream>

using namespace std;

int main()
{
    cout << "My name is Heather" << endl;
    cout << "Hello" << endl;

//These two will print the same

    cout << "My name is Heather\n";
    cout << "Hello" << endl;

//This will also pring the same thing

    string phrase = "My name is Heather\nHello\n";
    cout << phrase;

//This will tell how many characters are in the string

    cout << phrase.length() << endl;
    cout << phrase[0] << endl;
    // index positions start at 0 then go through the whole numbers

    phrase[0] = 'm';
    cout << phrase[0] << endl;
    // changes the first position in the string then prints out the new character

    cout << phrase.find("name", 0) << endl;
    // Will tell at what index position "name" occurs. The 0 tells the find function which index position to start looking from, in this case, 0.

    cout << phrase.substr(3, 4) << endl;
    // starts at index position 3 and will grab 4 characters and prints just that. In this case, "name" will print from the original string.
    string phrasesub;
    // introduces the variable string to reference later
    phrasesub = phrase.substr(3, 4);
    // tells what the string variable is
    cout << phrasesub << endl;
    // prints the string variable

    return 0;
}
// \n means new line