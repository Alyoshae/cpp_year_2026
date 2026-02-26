#include <iostream> 
#include <cmath> 

constexpr double pi{3.141592653589793238};

int main(){
    std::cout << "\n\nTabla de valores del primer cuadrante para seno.\n\n";
    std::cout << "seno de 30: " << std::sin(pi/6) << '\n';
    std::cout << "seno de 45: " << std::sin(pi/4) << '\n';
    std::cout << "seno de 60: " << std::sin(pi/3) << '\n';
    std::cout << "seno de 90: " << std::sin(pi/2) << '\n';
    return 0; 
}