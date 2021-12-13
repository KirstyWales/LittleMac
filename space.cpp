#include <iostream>

int main() {

    double weight;
    int planet;

    std::cout << "Please input Little Mac's weight in kg.\n";
    std::cin >> weight;
    std::cout << "Little Mac weighs: " << weight << ".\n";
    std::cout << "1. Mercury, 2. Venus, 3. Mars, 4. Jupiter, 5. Saturn, 6. Uranus, 7. Neptune";
    std::cout << "Which planet is Little Mac fighting on?\n";
    std::cin >> planet;
    
    switch(planet) {
      case 1:
        std::cout << "Little Mac's weight on Mercury is " << weight * 0.38 << "kg.\n";
        break;
      case 2:
        std::cout << "Little Mac's weight on Venus is " << weight * 0.91 << "kg.\n";
        break;
      case 3:
        std::cout << "Little Mac's weight on Mars is " << weight * 0.38 << "kg.\n";
        break;
      case 4:
        std::cout << "Little Mac's weight on Jupiter is " << weight * 2.34 << "kg.\n";
        break;
      case 5:
        std::cout << "Little Mac's weight on Saturn is " << weight * 1.06 << "kg.\n";
        break;
      case 6:
        std::cout << "Little Mac's weight on Uranus is " << weight * 0.92 << "kg.\n";
        break;
      case 7:
        std::cout << "Little Mac's weight on Neptune is " << weight * 1.19 << "kg.\n";
        break;
    }
  
  
}
