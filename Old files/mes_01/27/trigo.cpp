#include <iostream>
#include <cmath>

int main() {
    std::cout << "Angulo\tSeno\tCoseno\n";
    
    for (int grados = 0; grados <= 360; grados += 30) {
        double rad = grados * M_PI / 180.0;
        std::cout << grados << "\t" 
                  << std::sin(rad) << "\t"
                  << std::cos(rad) << '\n';
    }
    
    return 0;
}