#include <iostream> 

int main(){
    constexpr int cant{3};
    int matriz[cant][cant]{};
    int dim[cant]{};
    int vista[cant]{};
    int uCant{};

    //lenado de matriz o listas 
    for(int i{0}; i < cant; ++i){
        for(int j{0}; j < cant; ++j){
            std::cout << "Ingrese el elemento " << j+1 << " para el vector " << i+1 << ": ";
            std::cin >> matriz [i][j];
        }
        std::cout << '\n';
    }

    //que dimensiones quiere ver el del arreglo previamente llenado. 
    std::cout << "Eleccion de dimension para la impresion del vector! \n";
    for (int i{0}; i < cant; ++i){
        while(true){
            std::cout << "Ingrese de que dimension quiere su " << i+1 << " vector: ";
            if(!(std::cin >> dim[i])){
                std::cout << "Error! Ingrese solo numeros...\n";
                std::cin.clear();
                std::cin.ignore(10000,'\n');
                continue;
            }
            if(dim[i] < 1 || dim[i] > 3){
                std::cout << "Error! ingrese una dimension valida...\n";
                std::cin.ignore(10000,'\n');
                continue;
            }
            std::cin.ignore(10000,'\n');
            break;
        }
        std::cout << '\n';
    }
    //que vectores quiere imprimir solamente 
    std::cout << "Ingrese los vectores que quiere imprimir! \n";
    while (true){
        std::cout << "Ingrese cuantos vectores quiere imprimir: ";
        if(!(std::cin >> uCant)){
            std::cout << "Error! solo puede ingresar digitos...\n";
            std::cin.clear();
            std::cin.ignore(10000,'\n');
            continue;
        }
        if(uCant < 1 || uCant > cant){
            std::cout << "Error! ingrese un rango valido...\n";
            std::cin.ignore(10000,'\n');
            continue;
        }
        std::cin.ignore(10000,'\n');
        break;
    }
    std::cout << '\n';
    for (int i{0}; i < uCant; ++i){
        while (true){
            std::cout << "Ingrese el " << i+1 << " vector que quiera imprimir: ";
            if(!(std::cin >> vista[i])){
                std::cout << "Error! solo puede ingresar digitos...\n";
                std::cin.clear();
                std::cin.ignore(10000,'\n');
                continue;
            }
            if(vista[i] < 1 || vista[i] > cant){
                std::cout << "Error! Ingrese un rango valido...\n";
                std::cin.ignore(10000,'\n');
                continue;
            }
            std::cin.ignore(10000,'\n');
            break;
        }
    }

    //impresion de los arreglos con la limitacion previamente puesta.
    std::cout << "\nimpresion de los arreglos! \n";
    for(int i{0}; i< uCant; ++i){
        std::cout << i+1 << "- " <<"(";
        for (int j{0}; j< dim[vista[i]-1]; ++j){
            std::cout << matriz[vista[i]-1][j];
            if(j+1 < dim[vista[i]-1]){
                std::cout << ", "; 
            }
        }
        std::cout <<") \n";
    }
    std::cout <<'\n';
    return 0; 

}