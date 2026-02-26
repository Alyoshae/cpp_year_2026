#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string entrada = "P10.5";
    std::stringstream stream(entrada);

    char buffer;
    
    stream >> buffer; 

    if (buffer == 'P') {
        double valor;
        stream >> valor; // Leemos el número que sigue
        
        std::cout << "Comando detectado: POSICION\n";
        std::cout << "Valor extraido: " << valor << "\n";
    } 
    else {
        stream.putback(buffer);
        std::cout << "Comando desconocido, devolviendo al buffer...\n";
    }

    return 0;
}