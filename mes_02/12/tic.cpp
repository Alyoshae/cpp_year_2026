#include<iostream> 
#include<vector> 

void llenarTablero(std::vector <char>& tablero){
    for(int i{0}; i < 9; ++i){
        tablero[i]=' ';
    }
}
void printTablero(std::vector<char>& tablero){
    for(int i{0}; i < 9; ++i){
        std::cout << tablero[i]; // espacio. ' | '
        if(i != 2 && i != 5 && i != 8){
            std::cout << " | ";
        }
        if(i == 2 || i == 5){
            std::cout << '\n';
        }
    }
}
void player(int i, int contador, std::vector<int>& posicion, std::vector<char>& tablero){
    while(true){
        if(i%2 == 0){
            std::cout << "Ingrese la posicion de su X: ";
        }else{
            std::cout << "Ingrese la posicion de su O: ";
        }
        if(!(std::cin >> contador)){
            std::cout << "Ingrese una opcion correcta...\n";
            std::cin.clear();
            std::cin.ignore(10,'\n');
            continue;
        }
        if(contador < 1 || contador > 9){
            std::cout << "Ingrese un rango valido (1-9)...\n";
            std::cin.ignore(10,'\n');
            continue;
        }
        posicion[i] = contador;
        if(i%2 == 0){
            tablero[posicion[i]-1] = 'X';
        }else{
            tablero[posicion[i]-1] = 'O';
        }
        break;
    }


}

int main(){
    std::vector<char>tablero(9);
    std::vector<int>posicion(9);
    int contador{};
    llenarTablero(tablero);
    printTablero(tablero);
    for(int i{0}; i < 9; ++i){
        std::cout << '\n';
        player(i, contador, posicion, tablero);
        printTablero(tablero);
    }
    return 0;
}

//validaciones 8 victorias 
//for de main if victoria i = 10;  
//no victoria, desea jugar again o ne yes = continue nah = break; while(victoria)

