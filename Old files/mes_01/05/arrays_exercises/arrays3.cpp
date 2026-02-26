#include <iostream> 

//ejercicio 3
//Imprime cada paso: (opción -> índice real -> valor).
int main(){
    constexpr int tam{4};
    double datos[tam]{};
    int user[3]{};
    std::cout << "ingrese los datos del arreglo! \n";
    for(int i{0}; i < tam; ++i){
        while(true){
            std::cout << i+1 << ": ";
            if(!(std::cin >> datos[i])){
                std::cout << "ingrese solo digitos\n";
                std::cin.clear();
                std::cin.ignore(10000,'\n');
                continue;
            }
            std::cin.ignore(10000,'\n');
            break;
        }
    }
    std::cout << "ingrese los datos que quiere enseñar! \n";
    for(int i{0}; i < 3; ++i){
        while(true){
            std::cout << i+1 << ": ";
            if(!(std::cin >> user[i])){
                std::cout << "ingrese solo digitos\n";
                std::cin.clear();
                std::cin.ignore(10000,'\n');
                continue;
            }
            if(user[i] < 1 || user[i] > tam){
                std::cout << "ingrese un rango valido\n";
                std::cin.ignore(10000,'\n');
                continue;
            }
            std::cin.ignore(10000,'\n');
            break;
        }
    }
    std::cout << "Impresion de ruta! \n";
    for(int i{0}; i < 3; ++i){
        std::cout << "Usted ingreso la opcion: " << user[i] << '\n'; 
        std::cout << "El indice verdadero es: " << user[i]-1 << '\n';
        std::cout << "El valor de su dato ingresado es: " << datos[user[i]-1]<< '\n';
        std::cout << '\n';
    }
    return 0; 
}