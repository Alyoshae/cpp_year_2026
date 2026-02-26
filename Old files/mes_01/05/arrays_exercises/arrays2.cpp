#include <iostream> 

//ejercicio 2 
int main(){
    constexpr int cant{4};
    int array[cant]{};
    int user[cant];
    std::cout << "Ingrese los valores para su arreglo! \n";
    for(int i{0}; i < cant; ++i){
        std::cout << i+1 << ": "; 
        std::cin >> array[i];
    }
    std::cout << "ingrese cual arreglo quiere enseñar!\n";
    for(int i{0}; i < cant; ++i){
        std::cout << i+1 << ": "; 
        while (true){
            std::cin >> user[i];
            if(user[i] < 1 || user[i] > cant){
                std::cout << "Error, ingrese el rango permitido.\n";
                std::cin.ignore(10000,'\n');
            }
            std::cin.ignore(1000,'\n');
            break;

        }
    }
    std::cout << "Estos son los arreglos que escogio y en este orden! \n";
    for(int i{0}; i < cant; ++i){
        std::cout << i+1 << ": " << array[user[i]-1] << '\n';
    }
    return 0; 
}
//siempre pensar que lo que promtea el usuario, para la compudora en cuanto a INDICE, es 1 menos. 