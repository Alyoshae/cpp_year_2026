#include <iostream>

int main(){

int cantidad{}; 
double vectores[3][3]{};
int dimensiones[3]{};
while (true){
    std::cout << "Cuantos Vectores quieres generar (2-3)?: "; 
    if(!(std::cin >> cantidad)){
        std::cout << "Error! solo puedes ingresar digitos numericos. " << '\n';
        std::cin.clear(); 
        std::cin.ignore(10000,'\n');
        continue; 
    }
    if(cantidad < 2 || cantidad > 3){
        std::cout << "Error! Selecciona una opcion valida" << '\n'; 
        std::cin.ignore(10000,'\n');
        continue;
    }
    std::cin.ignore(10000,'\n');
    break;
}
for(int i{0}; i < cantidad; ++i){
    while (true){ 
        std::cout << "Que dimensiones quiere para el vector " << i+1 << " (2-3)?: ";
        if(!(std::cin >> dimensiones[i])){
        std::cout << "Error! solo puedes ingresar digitos numericos " << '\n';
        std::cin.clear(); 
        std::cin.ignore(10000,'\n');
        continue; 
        }
        if( dimensiones[i] < 2 || dimensiones[i] > 3){
        std::cout << "Error! Selecciona una opcion valida"<< '\n'; 
        std::cin.ignore(10000,'\n');
        continue;
        }
    std::cin.ignore(10000,'\n');
    break;
    } 
    for(int j{0}; j < dimensiones[i]; ++j){
        std::cout << "Ingrese componente " << j+1 << " para el vector " << i+1 <<": ";
        while(true){
            if(!(std::cin >> vectores[i][j])){
                std::cout << "Error! Solo puede ingresar datos numericos. " << '\n'; 
                std::cin.clear();
                std::cin.ignore(10000,'\n'); 
                continue; 
            }
            std::cin.ignore(10000,'\n');
            break;
        }
    }
}
std::cout<< "Estos son tus vectores!"<< '\n'; 
for(int i{0}; i < cantidad; ++i){
    std::cout << "(";
    for(int j{0}; j < dimensiones[i]; ++j){
        std::cout << vectores[i][j];
        if(j < dimensiones[i]-1)
            std::cout << ", ";
    }
    std::cout <<")" << '\n'; 
}
return 0; 
}
