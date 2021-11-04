#include <iostream>

int main() {
  
  double weight;
  int planet;

  std::cout << "Please enter your weight on Earth in lbs:\n";
  std::cin >> weight;

  std::cout << "Please enter destination planet using a number:\n1 = Mercury\n2 = Venus\n3 = Mars\n4 = Jupiter\n5 = Saturn\n6 = Uranus\n7 = Neptune\n";
  std::cin >> planet;


  switch (planet) {
    case 1:
    std::cout << weight*0.38 << std::endl;
    break;
    case 2:
    std::cout << weight*0.91 << std::endl;
    break;
    case 3:
    std::cout << weight*0.38 << std::endl;
    break;
    case 4:
    std::cout << weight*2.34 << std::endl;
    break;
    case 5:
    std::cout << weight*1.06 << std::endl;
    break;
    case 6:
    std::cout << weight*0.92 << std::endl;
    break;
    case 7:
    std::cout << weight*1.19 << std::endl;
    break;
    
     }
  }
  
  
  