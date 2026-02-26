#include <iostream>
#include <vector>

int main() {
    // Crear matriz 3x3
    std::vector<std::vector<int>> matriz(3, std::vector<int>(3));
    
    // Llenar la matriz
    int valor = 1;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            matriz[i][j] = valor++;
        }
    }
    
    // Mostrar la matriz
    std::cout << "Matriz 3x3:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << "\n";
    }
    
    return 0;
}