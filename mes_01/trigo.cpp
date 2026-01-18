#include <iostream>
#include <cmath>

int main() {
    for (int y = 20; y >= 0; y--) {
        for (int x = 0; x < 80; x++) {
            double t = (x / 80.0) * 4 * M_PI;
            double sinValue = std::sin(t);
            int sinY = (int)((sinValue + 1.0) * 10);
            
            if (sinY == y) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << '\n';
    }
    
    return 0;
}