#include <iostream>

class Vector3 {
    public:
    double x;
    double y;
    double z;
};

void mostrarVector(Vector3 v) {
    std::cout << "(" << v.x << ", " << v.y << ", " << v.z << ")" << '\n';
}

Vector3 sumarVectores(Vector3 a, Vector3 b) {
    Vector3 resultado;
    resultado.x = a.x + b.x;
    resultado.y = a.y + b.y;
    resultado.z = a.z + b.z;
    return resultado;
}

Vector3 restarVectores(Vector3 a, Vector3 b) {
    Vector3 resultado;
    resultado.x = a.x - b.x;
    resultado.y = a.y - b.y;
    resultado.z = a.z - b.z;
    return resultado;
}

Vector3 multiplicarEscalar(Vector3 v, double escalar) {
    Vector3 resultado;
    resultado.x = v.x * escalar;
    resultado.y = v.y * escalar;
    resultado.z = v.z * escalar;
    return resultado;
}

double productoEscalar(Vector3 a, Vector3 b) {
    return (a.x * b.x) + (a.y * b.y) + (a.z * b.z);
}

Vector3 productoCruz(Vector3 a, Vector3 b) {
    Vector3 resultado;
    resultado.x = (a.y * b.z) - (a.z * b.y);
    resultado.y = (a.z * b.x) - (a.x * b.z);
    resultado.z = (a.x * b.y) - (a.y * b.x);
    return resultado;
}

double magnitud(Vector3 v) {
    double sumaCuadrados = (v.x * v.x) + (v.y * v.y) + (v.z * v.z);
    double mag = 0.0;
    
    double estimacion = sumaCuadrados / 2.0;
    for (int i = 0; i < 10; i = i + 1) {
        estimacion = (estimacion + sumaCuadrados / estimacion) / 2.0;
    }
    mag = estimacion;
    
    return mag;
}

Vector3 normalizar(Vector3 v) {
    double mag = magnitud(v);
    Vector3 resultado;
    
    if (mag > 0.0) {
        resultado.x = v.x / mag;
        resultado.y = v.y / mag;
        resultado.z = v.z / mag;
    } else {
        resultado.x = 0.0;
        resultado.y = 0.0;
        resultado.z = 0.0;
    }
    
    return resultado;
}

int main() {
    Vector3 v1;
    v1.x = 3.0;
    v1.y = 4.0;
    v1.z = 0.0;
    
    Vector3 v2;
    v2.x = 1.0;
    v2.y = 2.0;
    v2.z = 2.0;
    
    std::cout << "Vector 1: ";
    mostrarVector(v1);
    
    std::cout << "Vector 2: ";
    mostrarVector(v2);
    std::cout << '\n';
    
    std::cout << "Suma: ";
    Vector3 suma = sumarVectores(v1, v2);
    mostrarVector(suma);
    
    std::cout << "Resta: ";
    Vector3 resta = restarVectores(v1, v2);
    mostrarVector(resta);
    std::cout << '\n';
    
    std::cout << "Vector 1 x 2.5: ";
    Vector3 escalar = multiplicarEscalar(v1, 2.5);
    mostrarVector(escalar);
    std::cout << '\n';
    
    double dotProduct = productoEscalar(v1, v2);
    std::cout << "Producto escalar: " << dotProduct << '\n';
    std::cout << '\n';
    
    std::cout << "Producto cruz: ";
    Vector3 cruz = productoCruz(v1, v2);
    mostrarVector(cruz);
    std::cout << '\n';
    
    double mag1 = magnitud(v1);
    std::cout << "Magnitud v1: " << mag1 << '\n';
    
    double mag2 = magnitud(v2);
    std::cout << "Magnitud v2: " << mag2 << '\n';
    std::cout << '\n';
    
    std::cout << "Vector 1 normalizado: ";
    Vector3 norm1 = normalizar(v1);
    mostrarVector(norm1);
    
    std::cout << "Magnitud del normalizado: " << magnitud(norm1) << '\n';
    
    return 0;
}