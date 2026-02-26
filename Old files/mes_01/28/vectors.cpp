#include<iostream> 

void print(int* cantidad){
    std::cout << cantidad; 
}
int main(){
    int cantidad{};
    std::cout << "\nPRODUCTO PUNTO DE DOS VECTORES\n"; 
    while(true){
        std::cout << "\n\n¿De cuantas dimensiones quiere sus vectores? \n1- 2D \n2- 3D\nOPCION: ";
        if(!(std::cin >> cantidad)){
            std::cout << "Ingrese solo digitos...\n";
            std::cin.clear();
            std::cin.ignore(10000,'\n');
            continue;
        }
        if(cantidad < 1 || cantidad > 3){
            std::cout << "Ingrese un rango valido...\n";
            std::cin.ignore(10000,'\n');
            continue;
        }
        std::cin.ignore(10000,'\n');
        break;
    }
    double vectores[2][cantidad+1];
    for(int i{0}; i<2; ++i){
        for(int j{0}; j < cantidad+1; ++j){
            while(true){
                std::cout << "Ingrese el valor numero " << j+1 << " para el vector numero " << i+1 << ": ";
                if(!(std::cin >> vectores[i][j])){
                    std::cout << "Ingrese solo digitos...\n"; 
                    std::cin.clear();
                    std::cin.ignore(10000,'\n');
                    continue;
                }
                std::cin.ignore(10000,'\n');
                break;
            }
        }
    }
    print(&cantidad);
    
    return 0; 
}