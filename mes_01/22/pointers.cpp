#include <iostream>

int main() {
    float a = 3.14f;
    float b = 2.71f;
    float c = 1.41f;
    
    float* ptr1 = &a;
    float* ptr2 = &b;
    float* ptr3 = &c;
    
    std::cout << "Valores iniciales:\n";
    std::cout << "a = " << a << ", b = " << b << ", c = " << c << '\n';
    std::cout << "*ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << ", *ptr3 = " << *ptr3 << '\n';
    
    *ptr1 = *ptr2 * *ptr3;
    std::cout << "\nDespues de *ptr1 = *ptr2 * *ptr3:\n";
    std::cout << "a = " << a << '\n';
    
    float temp1 = *ptr1;
    float temp2 = *ptr2;
    float temp3 = *ptr3;
    
    *ptr1 = temp3;
    *ptr2 = temp1;
    *ptr3 = temp2;
    
    std::cout << "\nDespues de rotar valores:\n";
    std::cout << "a = " << a << ", b = " << b << ", c = " << c << '\n';
    
    ptr1 = &b;
    ptr2 = &c;
    ptr3 = &a;
    
    std::cout << "\nDespues de reasignar punteros:\n";
    std::cout << "*ptr1 apunta a b: " << *ptr1 << '\n';
    std::cout << "*ptr2 apunta a c: " << *ptr2 << '\n';
    std::cout << "*ptr3 apunta a a: " << *ptr3 << '\n';
    
    float valores[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f, 7.7f, 8.8f};
    float* ptrValores = valores;
    
    std::cout << "\nArreglo original:\n";
    for (int i = 0; i < 8; i++) {
        std::cout << valores[i] << " ";
    }
    std::cout << '\n';
    
    std::cout << "\nUsando aritmetica de punteros:\n";
    std::cout << "ptrValores[0]: " << *ptrValores << '\n';
    std::cout << "ptrValores[3]: " << *(ptrValores + 3) << '\n';
    std::cout << "ptrValores[7]: " << *(ptrValores + 7) << '\n';
    
    *(ptrValores + 2) = 99.9f;
    *(ptrValores + 5) = 88.8f;
    
    std::cout << "\nDespues de modificar:\n";
    for (int i = 0; i < 8; i++) {
        std::cout << *(ptrValores + i) << " ";
    }
    std::cout << '\n';
    
    float* ptrInicio = valores;
    float* ptrFinal = valores + 7;
    
    while (ptrInicio < ptrFinal) {
        float swap = *ptrInicio;
        *ptrInicio = *ptrFinal;
        *ptrFinal = swap;
        
        ptrInicio++;
        ptrFinal--;
    }
    
    std::cout << "\nArreglo invertido:\n";
    for (int i = 0; i < 8; i++) {
        std::cout << valores[i] << " ";
    }
    std::cout << '\n';
    
    int nums[5] = {100, 200, 300, 400, 500};
    int* ptrNums = nums;
    
    std::cout << "\nSuma de elementos con puntero:\n";
    int suma = 0;
    for (int i = 0; i < 5; i++) {
        suma += *(ptrNums + i);
    }
    std::cout << "Suma total: " << suma << '\n';
    
    float* ptrDinamico = nullptr;
    std::cout << "\nptrDinamico es nullptr: " << (ptrDinamico == nullptr) << '\n';
    
    ptrDinamico = &a;
    std::cout << "Ahora ptrDinamico apunta a a: " << *ptrDinamico << '\n';
    
    ptrDinamico = &b;
    *ptrDinamico = 50.5f;
    std::cout << "Modificado b a traves de ptrDinamico: " << b << '\n';
    
    int x = 10;
    int* p = &x;
    int** pp = &p;
    int*** ppp = &pp;
    
    std::cout << "\nPunteros multiples:\n";
    std::cout << "x = " << x << '\n';
    std::cout << "*p = " << *p << '\n';
    std::cout << "**pp = " << **pp << '\n';
    std::cout << "***ppp = " << ***ppp << '\n';
    
    ***ppp = 777;
    std::cout << "\nDespues de ***ppp = 777:\n";
    std::cout << "x = " << x << '\n';
    
    char letras[] = {'A', 'B', 'C', 'D', 'E'};
    char* ptrChar = letras;
    
    std::cout << "\nRecorriendo caracteres:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << *(ptrChar + i) << " ";
    }
    std::cout << '\n';
    
    ptrChar += 2;
    std::cout << "Despues de ptrChar += 2: " << *ptrChar << '\n';
    
    return 0;
}