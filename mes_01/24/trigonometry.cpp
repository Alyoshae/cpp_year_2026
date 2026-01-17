#include<iostream>
#include<cmath>

constexpr double pi{3.14159265};

void radianesGrados(){
    int x{};
    while(true){
        std::cout << "\n\nIngrese los radianes que quiere convertir a grados!!\n";
        std::cout << "CANTIDAD: ";
        if(!(std::cin >> x)){
            std::cout << "Ingrese solo la cantidad de PI's que quiere..'\n";
            std::cin.ignore(10000,'\n');
            std::cin.clear();
            continue;
        }
        std::cin.ignore(10000,'\n');
        break;
    }
    double contador{};
    contador = pi * x; 
    double resultado{};
    resultado = contador * 180/pi; 
    std::cout << "Este es tu resultado: " << resultado << "."; 
}
void gradosRadianes(){
    int x{};
    while(true){
        std::cout << "\n\nIngrese los grados que quiere convertir a radianes!!\n";
        std::cout << "CANTIDAD: ";
        if(!(std::cin >> x)){
            std::cout << "Ingrese sollo la cantidad de grados que quiere...\n"; 
            std::cin.ignore(10000,'\n');
            std::cin.clear();
            continue;
        }
        std::cin.ignore(10000,'\n');
        break;
    }
    double resultado{};
    resultado = x * pi/180;
    resultado = resultado / pi;
    std::cout << "Este es su resultado: " << resultado << ".";
}

int main(){
    while(true){
        int menu{};

        while(true){
            std::cout << "\n\nConvertor de unidades\n";
            std::cout << "1- Radianes a Grados\n2- Grados a Radianes\n3- Salir\n";
            std::cout << "OPCION: ";
            if(!(std::cin >> menu)){
                std::cout << "Ingrese solo digitos en el menu...\n";
                std::cin.clear();
                std::cin.ignore(10000,'\n');
                continue;
            }
            if(menu < 1 || menu > 3){
                std::cout << "Ingrese una opcion valida del menu...\n";
                std::cin.ignore(10000,'\n');
                continue;
            }
            std::cin.ignore(10000,'\n');
            break;
        }  
        if (menu == 2){
            gradosRadianes();

        }
        if (menu == 1){
            radianesGrados();
        }
        else 
            break;
    }
    return 0;
}