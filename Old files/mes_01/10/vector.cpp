#include <iostream> 
#include <cmath> 

int menu{};
int operacion{};
double matrix[3][3]{};
int cantidadVectores{};
int cantidadSeleccionados{};
int vectores[3];
int dimensiones[3];


void crearVectores(int& cantidadVectores , int dimensiones[3], double matrix[3][3]){
    //Cantidad de vectores
    while(true){
        std::cout << "========CREACION DE VECTORES========\n¿Cuantos vectores quiere generar?: ";
        if(!(std::cin >> cantidadVectores)){
            std::cout << "Error! Ingrese solo digitos...\n";
            std::cin.clear();
            std::cin.ignore(10000,'\n');
            continue;
        }
        if(cantidadVectores < 1 || cantidadVectores > 3){
            std::cout << "Error! Ingrese un rango valido...\n}";
            std::cin.ignore(10000,'\n');
            continue;
        }
        std::cin.ignore(10000,'\n');
        break;
    }
    //Cantidad de dimensiones 
    for(int i{0}; i < cantidadVectores; ++i){
        while(true){
            std::cout << "Cuantas dimensiones quiere el vector numero " << i+1 << ": ";
            if(!(std::cin >> dimensiones[i])){
                std::cout << "Error! Ingrese solo digitos...\n";
                std::cin.clear();
                std::cin.ignore(10000,'\n');
                continue;
            }
            if(dimensiones[i] < 2 || dimensiones[i] > 3){
                std::cout << "Error! Ingrese un rango valido...\n}";
                std::cin.ignore(10000,'\n');
                continue;
            }
            std::cin.ignore(10000,'\n');
            break;
        }
    }
    //Llenado de vectores
    for(int i{0}; i < cantidadVectores; ++i){
        for(int j{0}; j < dimensiones[i]; ++j){
            while(true){
                std::cout << "Ingrese el componente numero " << j+1 << " del vector numero " << i+1 << ": ";
                if(!(std::cin >> matrix[i][j])){
                    std::cout << "Error! Ingrese solo digitos...\n";
                    std::cin.clear();
                    std::cin.ignore(10000,'\n');
                    continue;
                }
                std::cin.ignore(10000,'\n');
                break;
            }
        }
    }
    //Impresion de vectores
    std::cout << "\nEstos sos sus vectores!: \n";
    for(int i{0}; i < cantidadVectores; ++i){
        std::cout << i+1 << "- (";
        for(int j{0}; j < dimensiones[i]; ++j){
            std::cout << matrix[i][j];
            if(j+1 < dimensiones[i]){
                std::cout << ", ";
            }
        }
        std::cout << ") \n";
    }
    std::cout << "\n";
}
void seleccionarVectores(int operacion , int vectores[3], int dimensiones[3]){
    //Seleccion de vectores 
    while(true){
        std::cout << "========SELECCION DE VECTORES========\n";
        while(true){
            if(operacion == 1){
                cantidadSeleccionados = 1;
                break;
            }
            std::cout << "Para esta operacion solo puede seleccionar " << operacion << " vector(es): ";
            if(!(std::cin >> cantidadSeleccionados)){
                std::cout << "Error! Ingrese solo digitos...\n";
                std::cin.ignore(10000,'\n');
                std::cin.clear();
                continue;
            }

            if(cantidadSeleccionados < 2 || cantidadSeleccionados > operacion){
                std::cout << "Error! Ingrese un rango valido...\n";
                std::cin.ignore(10000,'\n');
                continue;
            }
            std::cin.ignore(10000,'\n');
            break;
        }
        for(int i{0}; i < cantidadSeleccionados; ++i){
            while(true){
                std::cout << "Escoga el vector numero " << i+1 << ": ";
                if(!(std::cin >> vectores[i])){
                    std::cout << "Error! Ingresa solo digitos...\n";
                    std::cin.clear();
                    std::cin.ignore(10000,'\n');
                    continue;
                }
                if(vectores[i] < 1 || vectores[i] > cantidadVectores){
                    std::cout << "Error! Ingresa un rango valido...\n";
                    std::cin.ignore(10000,'\n');
                    continue;
                }
                std::cin.ignore(10000,'\n');
                break;
            }
        }
        //comprobacion de mismas dimensiones 
        int margenDimensiones = {dimensiones[vectores[0]-1]};
        int x{};
        for(int i{0}; i < cantidadSeleccionados; ++i){
            if(margenDimensiones != dimensiones[vectores[i]-1]){
                std::cout << "No se puede realizar esta operacion con vectores de distintas dimensiones...\n";
                i = operacion;
                x = 1;
            }
        }
        if(x == 1){
            std::cout << "Vuelva a ingresarlos porfavor...\n";
            continue;
        }
        else{break;}   
    }
}
void magnitud(int dimensiones[3], double matrix[3][3], int vectores[3]){
    double contador{0};
    for(int i {0}; i < dimensiones[vectores[0]-1]; ++i){
        contador += matrix[vectores[0]-1][i] * matrix[vectores[0]-1][i];
    }
    contador = std::sqrt(contador);
    std::cout << "\nEsta es la magnitud del vector!: " << contador << "\n\n\n";
}
void productoPunto(int dimensiones[3], int vectores[3], double matrix[3][3]){
    double contador{0};
    for(int i{0}; i < dimensiones[vectores[0]-1]; ++i){
        contador += matrix[vectores[0]-1][i] * matrix[vectores[1]-1][i];
    }
    std::cout << "\nEste es el escalar que obtuvo!: " << contador << "\n\n\n";
}
void sumaVectores(int dimensiones[3], int vectores[3], int cantidadSeleccionados){
    double resultado[3]{};
    double contador = {0};
    int index ={dimensiones[vectores[0]-1]};
    for(int i{0}; i < index; ++i){
        for(int j{0}; j < cantidadSeleccionados; ++j){
            contador += matrix[vectores[j]-1][i];
        }
        resultado[i] = contador;
        contador = 0;
    }
    
    std::cout << "Este es el vector resultante!: ("; 
    for(int i{0}; i < index; ++i){
        std::cout << resultado[i];
        if(i+1 < index ){
            std::cout << ", ";
        }
    }
    std::cout << ") \n\n\n";
}
void restaVectores(int dimensiones[3], int vectores[3], int cantidadSeleccionados){
    double resultado[3]{};
    double contador = {0};
    int index ={dimensiones[vectores[0]-1]};
    for(int i{0}; i < index; ++i){
        double contador = matrix[vectores[0]-1][i];
        for(int j{1}; j < cantidadSeleccionados; j++){
            contador -= matrix[vectores[j]-1][i];
        }
        resultado[i]=contador;
        contador = 0;
    }
    std::cout << "Este es el vector resultante!: ("; 
    for(int i{0}; i < index; ++i){
        std::cout << resultado[i];
        if(i+1 < index ){
            std::cout << ", ";
        }
    }
    std::cout << ") \n\n\n";

}

int main(){
    while (true){
        while(true){
            std::cout << "========CALCULADORA DE VECTORES========\n";
            std::cout << "1- Magnitud\n2- Producto punto\n3- Suma de vectores\n4- Resta de vectores\n5- Salir\nIngrese una opcion: ";
            if(!(std::cin >> menu)){
                std::cout << "Error! Ingrese una opcion valida...\n";
                std::cin.clear();
                std::cin.ignore(10000,'\n');
                continue;
            }
            if(menu < 1 || menu > 5){
                std::cout << "Error! Ingrese un rango valido...\n";
                std::cin.ignore(10000,'\n');
                continue;
            }
            std::cin.ignore(10000,'\n');
            break;
        }

        switch (menu){
            case 1://magnitud
                operacion = 1;
                crearVectores(cantidadVectores, dimensiones, matrix);
                seleccionarVectores(operacion, vectores, dimensiones);
                magnitud(dimensiones, matrix, vectores);
            break;
            case 2://producto punto
                operacion = 2; 
                crearVectores(cantidadVectores, dimensiones, matrix);
                seleccionarVectores(operacion, vectores, dimensiones);
                productoPunto(dimensiones, vectores, matrix);
            break;
            case 3://suma de vectores
                operacion = 3;
                crearVectores(cantidadVectores, dimensiones, matrix);
                seleccionarVectores(operacion, vectores, dimensiones);
                sumaVectores(dimensiones, vectores, cantidadSeleccionados);
            break;
            case 4://resta de vectores 
                operacion = 2;
                crearVectores(cantidadVectores, dimensiones, matrix);
                seleccionarVectores(operacion, vectores, dimensiones);
                restaVectores(dimensiones, vectores, cantidadSeleccionados);
            break;
        }

        if(menu == 5){
            std::cout << "Gracias por utilizarme!";
            break;
        }
    }// <- while true principal 
    return 0; 
}
