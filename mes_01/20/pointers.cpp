#include <iostream>

int main() {
    int a = 10;
    int b = 20;
    int c = 30;
    
    int* ptr1 = &a;
    int* ptr2 = &b;
    int* ptr3 = &c;
    
    std::cout << "Valores iniciales:\n";
    std::cout << "a = " << a << ", b = " << b << ", c = " << c << '\n';
    std::cout << "ptr1 apunta a: " << *ptr1 << '\n';
    std::cout << "ptr2 apunta a: " << *ptr2 << '\n';
    std::cout << "ptr3 apunta a: " << *ptr3 << '\n';
    
    *ptr1 = 50;
    *ptr2 = *ptr1 + *ptr3;
    
    std::cout << "\nDespues de modificar:\n";
    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b << '\n';
    
    ptr1 = &c;
    *ptr1 = 999;
    
    std::cout << "\nptr1 ahora apunta a c:\n";
    std::cout << "c = " << c << '\n';
    std::cout << "*ptr1 = " << *ptr1 << '\n';
    
    int* ptr4 = nullptr;
    std::cout << "\nptr4 es nullptr: " << (ptr4 == nullptr) << '\n';
    
    ptr4 = &b;
    std::cout << "Ahora ptr4 apunta a b: " << *ptr4 << '\n';
    
    int arreglo[] = {1, 2, 3, 4, 5};
    int* ptrArr = arreglo;
    
    std::cout << "\nRecorriendo arreglo con puntero:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "Elemento " << i << ": " << *(ptrArr + i) << '\n';
    }
    
    std::cout << "\nModificando arreglo con puntero:\n";
    *(ptrArr + 2) = 100;
    for (int i = 0; i < 5; i++) {
        std::cout << arreglo[i] << " ";
    }
    std::cout << '\n';
    
    int** ptrPtr = &ptr2;
    std::cout << "\nPuntero a puntero:\n";
    std::cout << "Valor de b a traves de ptrPtr: " << **ptrPtr << '\n';
    
    **ptrPtr = 777;
    std::cout << "Nuevo valor de b: " << b << '\n';
    
    return 0;
}