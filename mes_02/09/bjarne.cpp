#include<iostream> 
#include<vector> 

int main(){
    std::vector<std::vector<char>> matrix{}; 
    int posicionx{};
    int posiciony{};

     for(int i{0}; i < 9; ++i){
        if( i%2 == 0){
            while(true){
                std::cout << "\nPrimer jugador\n"; // x
                std::cout << "Ingrese la posicion en X: ";
                if(!(std::cin >> posicionx)){
                    std::cout << "Ingresa solo digitos...\n";
                    std::cin.ignore(10,'\n');
                    std::cin.clear();
                    continue;
                }
                if(posicionx < 0 || posicionx > 3){
                    std::cout << "Ingresa un rango valido..\n";
                    std::cin.ignore(10,'\n');
                    continue;
                }
                std::cout << "Ingresa la posicion en Y: ";
                if(!(std::cin >> posiciony)){
                    std::cout << "Ingresa solo digitos...\n";
                    std::cin.ignore(10,'\n');
                    std::cin.clear();
                    continue;
                }
                if(posiciony < 0 || posiciony > 3){
                    std::cout << "Ingresa un rango valido...\n";
                    std::cin.ignore(10,'\n');
                    continue;
                }
                matrix[posicionx - 1][posiciony -1] = 'x';
            }
        } 
        else{
            while(true){
                std::cout << "Segundo jugador\n"; // o
            }
        }
        
     }


    for(int i{0}; i < 3; ++i){
        std::cout << '\n';
        for(int j{0}; j < 3; ++j){
            std::cout << matrix[i][j];
            if(j != 2){
                std::cout << " | ";
            }
        }
    }
    std::cout << '\n';
    return 0;
}



// if  x x x 

 // x 0 0
 // 0 x 0
 // 0 0 x

 // x
 // x
 // x 


 //enum{ 0 null, x = 0}

 //pedirvalor();
 //if(i%2)v
 // while (true){pedir valor();{if matrix[i][j] == 'x'{continue}std::cout << "ya hay un valor ahi..."}}



