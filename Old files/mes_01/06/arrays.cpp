#include <iostream> 

int main(){
    constexpr int cant {3};
    int matrix[cant][cant]{};
    int vector[cant]{};
    int componentes{};

    //llenado de matriz 
    for(int i{0}; i < cant; i++){
        for(int j{0}; j < cant; j++){
            while(true){
                std::cout << "Ingrese el elemento " << j+1 << " del vector " << i+1 << ": ";
                if(!(std::cin>> matrix[i][j])){
                    std::cout << "Error! Ingrese digitos solamenta";
                    std::cin.clear();
                    std::cin.ignore(10000,'\n');
                    continue;
                }
                std::cin.ignore(10000,'\n');
                break;
            }
        }
        std::cout << '\n';
    }

    //impresion de matriz 
    std::cout << "Estos son sus vectores! \n"; 
    for(int i{0}; i < cant; i++){
        std::cout << i+1 << "- (";
        for(int j{0}; j < cant; j++){
            std::cout << matrix[i][j];
            if(j+1 < cant){
                std::cout <<", ";
            }
        }
        std::cout << ") " << "\n";
    }

    //seleccion de componentes
    std::cout << "\nBienvenido a la seleccion de componente en vectores!! \n\n";
    while(true){
        std::cout<< "cuantos componentes quiere imprimir? ";
        if(!(std::cin >> componentes)){
            std::cout << "Error! Ingrese solo digitos! \n";
            std::cin.clear();
            std::cin.ignore(10000,'\n');
            continue;
        }
        if(componentes < 1 || componentes > cant*cant){
            std::cout << "Error! ingrese un rango valido! \nEn total tienes " << cant*cant <<" elementos ";
            std::cin.ignore(10000,'\n');
            continue;
        }
        std::cin.ignore(10000,'\n');
        break;
    }
    //impresion de componentes
    for(int i{0}; i < componentes; ++i){
        int x{};
        int y{};
        while(true){
            std::cout << "Escoga el vector " << i+1 <<" con el que quiere trabajar: "; 
            if(!(std::cin >> x)){
                std::cout << "Error! ingrese solo numeros"; 
                std::cin.ignore(10000,'\n');
                std::cin.clear();
                continue;
            }
            if(x < 1 || x > cant){
                std::cout << "Error! ingrese un rango valido, tiene un total de " << cant << " Vectores\n";
                std::cin.ignore(10000,'\n');
                continue;
            }
            std::cin.ignore(10000,'\n');
            break;
        }
        while(true){
            std::cout << "\n\nque componente quiere ingresar del vector " << x << ':';
            if(!(std::cin >> y)){
                std::cout << "Error! Ingrese solo numeros \n";
                std::cin.clear();
                std::cin.ignore(10000,'\n');
                continue;
            }
            if(y < 1|| y > cant){
                std::cout << "Ingrese un numero del rango permitido! (1-3): ";
                std::cin.ignore(10000,'\n');
                continue;
            }
            std::cin.ignore(10000,'\n');
            break;
        }
        std::cout << "este es el componente que usted escogio: " << matrix[x-1][y-1];
        std::cout << "\nEste es el vector entero que escogio : " << "(";
        for(int j{0}; j < cant; ++j){
            std::cout << matrix[x-1][j];
            if(j+1 < cant){std::cout << ", ";}
        }
        std::cout << ")\n\n";
    }
    std::cout << "\n\ngracias chido bye";
    return 0; 
}