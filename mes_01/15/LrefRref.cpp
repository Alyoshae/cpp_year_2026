#include <iostream>

// Esta función SÍ funciona porque usa paso por REFERENCIA
void swapCorrecto(int& a, int& b) {  // Nota el & aquí
    int temp = a;
    a = b;
    b = temp;
    // Los cambios se hacen en las variables ORIGINALES
}

int main() {
    int x = 5;
    int y = 10;
    
    std::cout << "Antes: x = " << x << ", y = " << y << '\n';
    swapCorrecto(x, y);  // Pasamos x y y normalmente
    std::cout << "Después: x = " << x << ", y = " << y << '\n';
    
    // Resultado: x es ahora 10, y es ahora 5 (¡intercambiados!)
    return 0;
}