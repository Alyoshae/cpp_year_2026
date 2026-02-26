#include <iostream> 

int main(){

    int cantidadV{};
    int cantidadU{};
    double matrix[4][3]{};
    int componentes[3]{};
    int vectores[4]{};

    //cuantos quieres generar
    while(true){
        while (true){
            std::cout << "Cuantos Vectores quiere generar: ";
            if(!(std::cin >> cantidadV)){
                std::cout << "Error, solo ingrese digitos.\n";
                std::cin.clear();
                std::cin.ignore(10000,'\n'); 
                continue;
            }
            if(cantidadV < 1 || cantidadV > 3){
                std::cout<< "Error, ingrese un rango valido.\n";
                std::cin.ignore(10000,'\n');
                continue;
            }
            std::cin.ignore(10000,'\n');
            break;
        }

        //de cuantas dimensiones quiere generar los vectores 
        for(int i{0}; i < cantidadV; ++i){
            while(true){
                std::cout<< "Ingrese de cuantas dimensiones quiere el vector numeoro " << i+1 << ": ";
                if(!(std::cin >> componentes[i])){
                    std::cout << "Error! Ingrese un numero de componentes valido!\n";
                    std::cin.ignore(10000,'\n');
                    std::cin.clear();
                    continue;
                }
                if(componentes[i] < 1 || componentes[i] > 3){
                    std::cout << "Error! Ingrese un numero de componentes valido!\n";
                    std::cin.clear();
                    std::cin.ignore(10000,'\n');
                    continue;
                }
                std::cin.ignore(10000,'\n');
                break;
            }
        }
        std::cout << '\n';
        //Genereacion de vectores -> comprobacion
        for(int i{0}; i < cantidadV; ++i){
            for(int j{0}; j < componentes[i]; ++j){
                while(true){
                    std::cout << "Ingrese el componente numero " << j+1 << " para el vector numero " << i+1 <<": ";
                    if(!(std::cin >> matrix[i][j])){
                        std::cin.clear();
                        std::cin.ignore();
                        continue;
                    }
                    std::cin.ignore(10000,'\n');
                    break;
                }
            }
        }

        //impresion
        std::cout << "\n\nEstos son sus vectores! \n";
        for(int i{0}; i < cantidadV; ++i){
            std::cout << i+1 << "- (";
            for(int j{0}; j < componentes[i]; ++j){
                std::cout << matrix[i][j];
                if(j+1 < componentes[i]){
                    std::cout << ", ";
                }
            }
            std::cout << ") \n";
        }

        //comprobacion misma dimension
        int margenDimension = {componentes[0]};
        int x{};
        int y{};
        for (int i{0}; i < cantidadV; ++i){
            if(margenDimension != componentes[i]){
                std::cout << "No se puede realizar esta operacion con vectores de distintas dimensiones\n";
                x = 1;
                i = cantidadV;
            }
        }
        if(x==1){
            while(true){
                std::cout << "Quiere volver generar los vectores?: 1)si - 2)no :  ";
                if(!(std::cin >> y)){
                    std::cout << "Error! Ingrese solo digitos\n";
                    std::cin.clear();
                    std::cin.ignore(10000,'\n');
                    continue;
                }
                if(y < 1 || y > 2){
                    std::cout << "Error! Ingrese un rango valido\n";
                    std::cin.ignore(10000,'\n');
                    continue;
                } 
                std::cin.ignore(10000,'\n');
                break;
            }
            if(y==1){
            continue;
            }
            else{break;}  
        } 

        //eleccion de cantidad de vectores 
        while(true){
            std::cout << "INGRESE UN 2 AQUI: ";
            if(!(std::cin >> cantidadU)){
                std::cout << "Error! Ingrese solo digitos\n";
                std::cin.clear();
                std::cin.ignore(10000,'\n');
                continue;
            }
            if(cantidadU < 2 || cantidadU > 2){
                std::cout << "Error! Ingrese un rango valido\n";
                std::cin.ignore(10000,'\n');
                continue;
            }
            std::cin.ignore(10000,'\n');
            break;
        }
        
        //seleccion de vectores
        for(int i{0}; i < cantidadU; ++i){
            while(true){
                std::cout << "ingrese el vector numero " << i+1 << ": ";
                if(!(std::cin >> vectores[i])){
                    std::cout << "Error! Ingrese solo digitos\n";
                    std::cin.ignore(10000,'\n');
                    std::cin.clear();
                    continue;
                }
                if(vectores[i] < 1 || vectores[i] > cantidadV){
                    std::cout << "Ingrese un rango valido\n";
                    std::cin.ignore(10000,'\n');
                    continue;
                }
                std::cin.ignore(10000,'\n');
                break;
            }
        }

        //impresion producto punto. 
        double contador{0};
        for (int i{0}; i < margenDimension; ++i){
            contador += matrix[vectores[0]-1][i] * matrix[vectores[1]-1][i];
        }
        std::cout<< "Este es el escalar que obtuvo!: " << contador; 
        break;
    }     
    return 0;
}

