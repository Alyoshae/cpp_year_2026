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

void playerX(int i, int contador, std::vector<int>& posicion, std::vector<char>& tablero){
    std::cout << "Ingrese la posicion de su X: ";
    std::cin >> contador;
    posicion[i] = contador; 
    tablero[posicion[i]-1] = 'X';

}

void playerO(int i, int contador, std::vector<int>& posicion, std::vector<char>& tablero){
    std::cout << "Ingresa una posicion de su O: ";
    std::cin >> contador; 
    posicion[i] = contador;
    tablero[posicion[i]-1] = 'O';
}

int main(){
    std::vector<char>tablero(9);
    std::vector<int>posicion(9);
    int contador{};
    llenarTablero(tablero);
    printTablero(tablero);
    for(int i{0}; i < 9; ++i){
        std::cout << '\n';
        if(i%2 == 0){
            playerX(i, contador, posicion, tablero);
        }else{
            playerO(i, contador, posicion, tablero);
        }
        printTablero(tablero);
    }
    return 0;
}

//while(algo)


//validaciones 8 victorias 
//validaciones no ingresar un char encima de otro if char continue
//for de main if victoria i = 10; 
//mejorar playerx y playerO 
//no victoria, desea jugar again o ne yes = continue nah = break; while(victoria)