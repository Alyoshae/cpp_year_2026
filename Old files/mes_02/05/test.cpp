#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> inventario = {{"Espada", 1}, {"Escudo", 1}};
    
    // .contains es de C++20. Si compila, tienes la versión correcta.
    if (inventario.contains("Espada")) {
        std::cout << "¡Listo para el combate! C++20 activo." << std::endl;
    }
    
    return 0;
}