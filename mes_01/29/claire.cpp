#include <iostream> 

void nullify(int*& change);

int main(){

    int x{5};
    int* ptr{&x};

    std::cout << "ptr is " << (ptr ? "non-null\n" : "null\n");
    nullify(ptr);
    std::cout << "ptr is " << (ptr ? "non-null\n" : "null\n");

    return 0;
}

void nullify(int*& change){ //se hace referencia a un puntero y dentro de la funcion por referencia se cambia a null 
    change = nullptr;
}