#include <iostream>

int main(int args, char *cArgs[]) { // int main(void) will do the same thing.
    std::string answer;
    while (true) {
        std::cout << "Do you love me ? <yes/no>" << std::endl;
        std::cin >> answer;
        if (answer == "yes" || answer == "Yes" || answer == "YES") {
            std::cout << "Aww ! I love you, too !" << std::endl;
            return 0;
        }
        if (answer == "no" || answer == "No" || answer == "NO") {
            std::cout << "How rude !" << std::endl;
            return 0;
        }
        if (answer != "yes" && (answer != "no")) { 
            std::cout << "You maverick ! There's only two options though !" << std::endl;
        }
    }
}