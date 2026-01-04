#include <iostream> 
#include <vector> 

int main(){

    std::vector<int> primos{2, 3, 5, 7, 11};

    //indexing es igual a c-style arrays. 
    std::cout << "The first prime number is " << primos[0] << ": ";
    std::cout << "The thir prime number is " << primos[2] << ": ";

    std::vector<int> data( 10 ); // asi se inicializa un vector con 10 de largo y vacios. 
    int vector[10]{}; //diferencia de c-style arrays. 

    return 0; 
}