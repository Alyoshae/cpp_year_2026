#include <iostream>


void crearVectores(int& cantidad, double vectores[3][3], int dimensiones[3]){
    while (true){
        std::cout << "Cuantos vectores quieres generar (2-3)?: "; 
        if(!(std::cin >> cantidad)){
            std::cout << "\nError! solo puedes ingresar digitos numericos. " << '\n';
            std::cin.clear(); 
            std::cin.ignore(10000,'\n');
            continue; 
        }
        if(cantidad < 2 || cantidad > 3){
            std::cout << "\nError! Selecciona una opcion valida" << '\n'; 
            std::cin.ignore(10000,'\n');
            continue;
        }
        std::cin.ignore(10000,'\n');
        break;
    }
    for(int i{0}; i < cantidad; ++i){
        while (true){ 
            std::cout << "\nQue dimensiones quiere para el vector " << i+1 << " (2-3)?: ";
            if(!(std::cin >> dimensiones[i])){
            std::cout << "\nError! solo puedes ingresar digitos numericos " << '\n';
            std::cin.clear(); 
            std::cin.ignore(10000,'\n');
            continue; 
            }
            if( dimensiones[i] < 2 || dimensiones[i] > 3){
            std::cout << "\nError! Selecciona una opcion valida"<< '\n'; 
            std::cin.ignore(10000,'\n');
            continue;
            }
        std::cin.ignore(10000,'\n');
        break;
        } 
        std::cout << '\n';
        for(int j{0}; j < dimensiones[i]; ++j){
            std::cout << "Ingrese componente " << j+1 << " para el vector " << i+1 <<": ";
            while(true){
                if(!(std::cin >> vectores[i][j])){
                    std::cout << "\nError! Solo puede ingresar datos numericos. " << '\n'; 
                    std::cin.clear();
                    std::cin.ignore(10000,'\n'); 
                    continue; 
                }
                std::cin.ignore(10000,'\n');
                break;
            }
        }
    }
    std::cout<< "\nEstos son tus vectores!"<< '\n' << '\n'; 
    for(int i{0}; i < cantidad; ++i){
        std::cout << i+1 << ") (";
        for(int j{0}; j < dimensiones[i]; ++j){
            std::cout << vectores[i][j];
            if(j < dimensiones[i]-1)
                std::cout << ", ";
        }
        std::cout <<")" << '\n'; 
    }
}

void seleccionVectores(int cantidad, int cont[3], int dimensiones[3], double vectores[3][3]) {
    std::cout << '\n' << "Seleccion de vectores!" << '\n';
    while (true){
        // Escoger vectores 
        for (int i{0}; i < cantidad; ++i) {
            while (true) {
                if (i == 2) {
                    int x{};
                        while (true) {
                            std::cout << "\nQuiere ingresar un tercer vector? 1-si 2-no\n";
                            std::cout << "Eleccion: ";
                        if (!(std::cin >> x)) {
                            std::cout << "\nError! ingrese solo digitos!\n";
                            std::cin.clear();
                            std::cin.ignore(10000, '\n');
                            continue;
                        }       
                        if (x < 1 || x > 2) {
                            std::cout << "\nError! Ingrese un rango valido!\n";
                            std::cin.ignore(10000, '\n');
                            continue;
                        }
                    std::cin.ignore(10000, '\n');
                    break;
                    }
                    if (x == 2){
                        break; //need to fix this 
                    }
                }
                std::cout << "Ingrese el " << i+1 << " vector del 1 al " << cantidad <<" para su operacion!: ";
                if (!(std::cin >> cont[i])) {
                    std::cout << "\nError! Ingrese solo digitos!\n";
                    std::cin.clear();
                    std::cin.ignore(10000, '\n');
                    continue;
                }
                if (cont[i] < 1 || cont[i] > cantidad) {
                    std::cout << "\nError! Ingrese un rango valido!\n";
                    std::cin.ignore(10000, '\n');
                    continue;
                }
                std::cin.ignore(10000, '\n');
                break;
            }
            
        }

        // Validar dimensiones iguales
        int baseIdx = cont[0] - 1;
        int baseDim = dimensiones[baseIdx];
        bool x{};
        for (int i{1}; i < cantidad; ++i) {
            int idx = cont[i] - 1;
            if (dimensiones[idx] != baseDim) {
                x = true;
            }
        }
        if (x == true){
            std::cout << "No se puede hacer esta operacion con vectores de distintas dimensiones... ";
            std::cout << "\nIngrese porfavor vectores de mismas dimensiones..." << '\n' << '\n';
        }
        else{
            std::cout << "Seleccion valida.\n";
            break;
        }
    }
}


int main() {
    int cont[3]{};
    int cantidad{};
    double vectores[3][3]{};
    int dimensiones[3]{};
    crearVectores(cantidad, vectores, dimensiones);
    seleccionVectores(cantidad, cont, dimensiones, vectores);
}
