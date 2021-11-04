#include <iostream>

int main() {
    
    double ph;

    std::cout << "Enter ph:\n";

    std::cin >> ph;

    if (ph > 7){
      std::cout << "Basic\n";
    }
    else if (ph < 7){
      std::cout << "Acidic\n";
    }
   else if (ph == 7){
     std::cout << "Neutral\n";
   } 

    return 0;
}