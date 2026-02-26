#include <iostream>

int main() {
    int x = 100;
    int y = 200;
    int z = 300;
    
    int* ptrX = &x;
    int* ptrY = &y;
    int* ptrZ = &z;
    
    std::cout << "Valores originales:\n";
    std::cout << "x = " << x << ", y = " << y << ", z = " << z << '\n';
    std::cout << "Direcciones:\n";
    std::cout << "&x = " << &x << ", &y = " << &y << ", &z = " << &z << '\n';
    
    *ptrX = *ptrY + *ptrZ;
    std::cout << "\nDespues de *ptrX = *ptrY + *ptrZ:\n";
    std::cout << "x = " << x << '\n';
    
    int temp = *ptrX;
    *ptrX = *ptrY;
    *ptrY = temp;
    
    std::cout << "\nDespues de intercambiar x e y:\n";
    std::cout << "x = " << x << ", y = " << y << '\n';
    
    ptrZ = ptrX;
    *ptrZ = 999;
    
    std::cout << "\nptrZ ahora apunta a x:\n";
    std::cout << "x = " << x << ", *ptrZ = " << *ptrZ << '\n';
    
    int numeros[] = {10, 20, 30, 40, 50, 60};
    int* ptr = numeros;
    
    std::cout << "\nPrimer elemento: " << *ptr << '\n';
    std::cout << "Segundo elemento: " << *(ptr + 1) << '\n';
    std::cout << "Tercer elemento: " << *(ptr + 2) << '\n';
    
    ptr = ptr + 3;
    std::cout << "\nDespues de ptr = ptr + 3:\n";
    std::cout << "Elemento actual: " << *ptr << '\n';
    
    ptr++;
    std::cout << "Despues de ptr++: " << *ptr << '\n';
    
    ptr--;
    std::cout << "Despues de ptr--: " << *ptr << '\n';
    
    std::cout << "\nModificando arreglo:\n";
    *(numeros + 2) = 1000;
    for (int i = 0; i < 6; i++) {
        std::cout << numeros[i] << " ";
    }
    std::cout << '\n';
    
    int* ptrNull = nullptr;
    std::cout << "\nptrNull == nullptr: " << (ptrNull == nullptr) << '\n';
    
    if (ptrNull == nullptr) {
        std::cout << "ptrNull no apunta a nada valido\n";
        ptrNull = &x;
        std::cout << "Ahora ptrNull apunta a x: " << *ptrNull << '\n';
    }
    
    int a = 5;
    int* p1 = &a;
    int** p2 = &p1;
    
    std::cout << "\nPunteros dobles:\n";
    std::cout << "a = " << a << '\n';
    std::cout << "*p1 = " << *p1 << '\n';
    std::cout << "**p2 = " << **p2 << '\n';
    
    **p2 = 888;
    std::cout << "Despues de **p2 = 888:\n";
    std::cout << "a = " << a << '\n';
    
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int* ptrMatriz = &matriz[0][0];
    std::cout << "\nRecorriendo matriz con puntero:\n";
    for (int i = 0; i < 9; i++) {
        std::cout << *(ptrMatriz + i) << " ";
        if ((i + 1) % 3 == 0) {
            std::cout << '\n';
        }
    }
    
    return 0;
}