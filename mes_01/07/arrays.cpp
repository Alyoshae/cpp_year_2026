#include <iostream> 

int main(){
    double matrix[3][3]{};
    int componentes[3]{};
    int vectores[3]{};
    double resultado[3]{};
    int cantE{};
    int cantU{};

    while(true){
        std::cout << "Bienvenido a la creacion de vectores! \n";
        //escoger cantidad de vectores 
        while(true){
            std::cout << "\nCuantos vectores quiere generar: ";
            if(!(std::cin >> cantU)){
                std::cout << "Error! Solo ingrese digitos\n";
                std::cin.clear();
                std::cin.ignore(1000,'\n');
                continue;
            }
            if(cantU < 1 || cantU > 3){
                std::cout << "Solo puede generar hasta tres vectores!\n\n";
                std::cin.ignore(1000,'\n');
                continue;
            }
            std::cin.ignore(1000,'\n');
            break;
        }
        
        std::cout << '\n';

        //escoger cantidad de dimensiones  
        for(int i{0}; i < cantU; ++i){
            while(true){
                std::cout << "De cuantas dimensiones (componentes) quiere el vector numero " << i+1 << ": ";
                if(!(std::cin >> componentes[i])){
                    std::cout << "Error! Ingrese un numero. \n";
                    std::cin.clear();
                    std::cin.ignore(1000,'\n');
                    continue;
                }
                if(componentes[i] < 1 || componentes[i] > 3){
                    std::cout << "Error! Ingrese un rango valido (1-3)\n";
                    std::cin.ignore(1000,'\n');
                    continue;
                }
                std::cin.ignore(1000,'\n');
                break;
            }
        }

        //llenado de vectores 
        for(int i{0}; i < cantU; ++i){
            std::cout << '\n';
            for(int j{0}; j < componentes[i]; j++){
                while(true){
                    std::cout << "Ingrese el componente numero " << j+1 << " del vector numero " << i+1 << ": ";
                    if(!(std::cin >> matrix[i][j])){
                        std::cout << "Error! Ingrese solo digitos. \n";
                        std::cin.clear();
                        std::cin.ignore(1000,'\n');
                        continue;
                    }
                    std::cin.ignore(1000,'\n');
                    break;
                }
            }
        }

        //mostrado de vectores(matrix)
        std::cout << "\nEstos son sus vectores! \n";
        for(int i{0}; i < cantU; ++i){
            std::cout << i+1 << "- (";
            for(int j{0}; j < componentes[i]; j++){
                std::cout << matrix[i][j];
                if( j+1 < componentes[i]){
                    std::cout << ", ";
                }
            }
            std::cout << ")\n";
        }

        //verificacion de misma cantidad de componentes 
        int compIn = {componentes[0]};
        int trigger{};
        for(int i{0}; i < cantU; ++i){
            if(compIn != componentes[i]){
                std::cout << "\nNo se puede hacer una suma y resta con vectores de distintas dimensiones.\n";
                std::cout << "Vuelva a generar todos sus vectores porfavor.\n\n";
                trigger = 1;
            }
        }
        if(trigger == 1){continue;}
        else{break;}
    }  
    int compIn = {componentes[0]};
    std::cout << "\nFelicidades, sabes generar vectores y comparar sus dimensiones! \n";

    //seleccion de vectores para suma
    std::cout << "\nAhora; ¡Bienvenido a la suma de vectores! \n";
       while(true){
        std::cout << "Cuantos Vectores quiere escoger para sus operaciones?: ";
        if(!(std::cin >> cantE)){
            std::cout << "Error! Ingrese solo digitos.. \n";
            std::cin.clear();
            std::cin.ignore(1000,'\n');
            continue;
        }
        if(cantE < 1 || cantE > cantU){
            std::cout << "Error! Ingrese un rango valido! (1 -" << cantU << ")\n";
            std::cin.ignore(1000,'\n');
            continue;
        }
        std::cin.ignore(1000,'\n');
        break;
    }
    std::cout << '\n';
    for(int i{0};i < cantE; ++i){
        while(true){
            std::cout << "Ingrese el vector numero " << i+1 << " de los previamente generados: ";
            if(!(std::cin >> vectores[i])){
                std::cout << "Error! Ingrese solo numeros.\n";
                std::cin.clear();
                std::cin.ignore(1000,'\n');
                continue;
            }
            if(vectores[i] < 1 || vectores[i] > cantU){
                std::cout << "Error! Ingrese un rango valido (1-" << cantU << "):\n ";
                std::cin.ignore(1000,'\n');
                continue;
            }
            std::cin.ignore(1000,'\n');
            break;
        }
    }


   //llenado de vector > impresion 
   std::cout << "\n\n";
    double cont{};
    for(int i{0}; i < compIn; ++i){
        for (int j {0}; j < cantE; ++j){
            cont += matrix[vectores[j]-1][i];
        }
        resultado[i]={cont};
        cont = {0};
    }

    std::cout << "Aqui esta su vector sumado!: (";
    for(int i{0}; i < compIn; ++i){
        std::cout << resultado[i];
        if(i+1 < compIn){
            std::cout << ", ";
        }
    }
    std::cout << ") \n\n";
    
    
    return 0;
}