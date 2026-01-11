#include <iostream>
#include <random>

int main() {
    std::random_device rd;           
    std::mt19937 gen(rd());                 
    std::uniform_int_distribution<> dist(1, 15);  

    int numero = dist(gen);

    std::cout << "Numero aleatorio: " << numero << '\n';

    if(numero%2 == 0){
        std::cout << "Tu numero es un numero par.\n";
    }
    else{
        std::cout << "Tu numero es un numero impar.\n";
    }
    
    for(int i{0}; i < numero; ++i){
        std::cout << i+1 << " "; 
    }
}
