#include <iostream>

int main()
{
    int x{5};
    int y{10};
    int* puntero{&x};
    int* puntero2{&x};
    int* puntero3{nullptr};
    std::cout << *puntero << '\n';
    puntero = &y;
    *puntero2 = 6;
    puntero3 = &x; 


    std::cout << *puntero << '\n';
    std::cout << puntero << '\n';
    std::cout << &y << '\n';
    std::cout << *puntero2 << '\n';
    std::cout << puntero2 << '\n';
    std::cout << &x << '\n';
    std::cout << *puntero3 << '\n';
    std::cout << puntero3 << '\n';



    return 0;
}