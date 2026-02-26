#include <iostream> 

//ejercicio 1 
int main(){
    constexpr int tam{6};
    int arreglo[tam]{};
    for (int i{0}; i < tam; ++i){
        std::cout << "introduce tu arreglo " << i+1 << ": ";
        std::cin >> arreglo[i];
    }
    for (int i{0}; i < tam; ++i){
        std::cout << i+1 << ": "  << arreglo[i] << '\n';
    }
    //print the first, last and middle element
    std::cout << arreglo[0] << '\n';
    std::cout << arreglo[tam - 1] << '\n';
    std::cout << arreglo[tam / 2] << '\n';
    return 0; 
}
//always think about int tam to generalice the notation. 
