#include <iostream>

int main() {
    double d1 = 10.5;
    double d2 = 20.7;
    double d3 = 30.3;
    double d4 = 40.1;
    
    double* ptrD1 = &d1;
    double* ptrD2 = &d2;
    double* ptrD3 = &d3;
    double* ptrD4 = &d4;
    
    std::cout << "Valores iniciales:\n";
    std::cout << "d1=" << d1 << " d2=" << d2 << " d3=" << d3 << " d4=" << d4 << '\n';
    
    *ptrD1 += *ptrD2;
    *ptrD3 -= *ptrD4;
    
    std::cout << "\nDespues de operaciones:\n";
    std::cout << "d1=" << d1 << " d3=" << d3 << '\n';
    
    double* ptrTemp = ptrD1;
    ptrD1 = ptrD4;
    ptrD4 = ptrTemp;
    
    std::cout << "\nDespues de intercambiar punteros:\n";
    std::cout << "*ptrD1=" << *ptrD1 << " *ptrD4=" << *ptrD4 << '\n';
    
    *ptrD1 = 100.0;
    *ptrD4 = 200.0;
    
    std::cout << "\nDespues de modificar:\n";
    std::cout << "d1=" << d1 << " d4=" << d4 << '\n';
    
    int datos[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int* ptrDatos = datos;
    
    std::cout << "\nArreglo completo:\n";
    for (int i = 0; i < 10; i++) {
        std::cout << *(ptrDatos + i) << " ";
    }
    std::cout << '\n';
    
    std::cout << "\nElementos pares del arreglo:\n";
    for (int i = 0; i < 10; i += 2) {
        std::cout << *(ptrDatos + i) << " ";
    }
    std::cout << '\n';
    
    std::cout << "\nElementos impares del arreglo:\n";
    for (int i = 1; i < 10; i += 2) {
        std::cout << *(ptrDatos + i) << " ";
    }
    std::cout << '\n';
    
    int* ptr = ptrDatos;
    int contador = 0;
    while (ptr < ptrDatos + 10) {
        *ptr = *ptr * 2;
        ptr++;
        contador++;
    }
    
    std::cout << "\nDespues de duplicar valores:\n";
    for (int i = 0; i < 10; i++) {
        std::cout << datos[i] << " ";
    }
    std::cout << '\n';
    std::cout << "Iteraciones: " << contador << '\n';
    
    int maximo = *ptrDatos;
    int minimo = *ptrDatos;
    
    for (int i = 1; i < 10; i++) {
        if (*(ptrDatos + i) > maximo) {
            maximo = *(ptrDatos + i);
        }
        if (*(ptrDatos + i) < minimo) {
            minimo = *(ptrDatos + i);
        }
    }
    
    std::cout << "\nMaximo: " << maximo << " Minimo: " << minimo << '\n';
    
    float matriz[4][4] = {
        {1.0f, 2.0f, 3.0f, 4.0f},
        {5.0f, 6.0f, 7.0f, 8.0f},
        {9.0f, 10.0f, 11.0f, 12.0f},
        {13.0f, 14.0f, 15.0f, 16.0f}
    };
    
    float* ptrMatriz = &matriz[0][0];
    
    std::cout << "\nMatriz original:\n";
    for (int i = 0; i < 16; i++) {
        std::cout << *(ptrMatriz + i) << " ";
        if ((i + 1) % 4 == 0) {
            std::cout << '\n';
        }
    }
    
    for (int i = 0; i < 16; i++) {
        *(ptrMatriz + i) += 10.0f;
    }
    
    std::cout << "\nMatriz despues de sumar 10:\n";
    for (int i = 0; i < 16; i++) {
        std::cout << *(ptrMatriz + i) << " ";
        if ((i + 1) % 4 == 0) {
            std::cout << '\n';
        }
    }
    
    std::cout << "\nDiagonal principal:\n";
    for (int i = 0; i < 4; i++) {
        std::cout << *(ptrMatriz + i * 4 + i) << " ";
    }
    std::cout << '\n';
    
    int valor = 42;
    int* p1 = &valor;
    int** p2 = &p1;
    int*** p3 = &p2;
    
    std::cout << "\nCadena de punteros:\n";
    std::cout << "valor=" << valor << '\n';
    std::cout << "*p1=" << *p1 << '\n';
    std::cout << "**p2=" << **p2 << '\n';
    std::cout << "***p3=" << ***p3 << '\n';
    
    ***p3 = 999;
    std::cout << "\nDespues de ***p3 = 999:\n";
    std::cout << "valor=" << valor << '\n';
    
    int* ptrArray[5];
    int v1 = 1, v2 = 2, v3 = 3, v4 = 4, v5 = 5;
    
    ptrArray[0] = &v1;
    ptrArray[1] = &v2;
    ptrArray[2] = &v3;
    ptrArray[3] = &v4;
    ptrArray[4] = &v5;
    
    std::cout << "\nArreglo de punteros:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "*ptrArray[" << i << "]=" << *ptrArray[i] << '\n';
    }
    
    for (int i = 0; i < 5; i++) {
        *ptrArray[i] = *ptrArray[i] * 10;
    }
    
    std::cout << "\nDespues de multiplicar por 10:\n";
    std::cout << "v1=" << v1 << " v2=" << v2 << " v3=" << v3 << " v4=" << v4 << " v5=" << v5 << '\n';
    
    return 0;
}