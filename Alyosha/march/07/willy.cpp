#include<iostream> 
#include<vector> 

int main(){

    int n = 0; //cajas encantadas 
    int m = 0; //artefacto 
    int contador = 0; 
    int indice = -1; 
    bool ya = false; 

    std::cout << "Numero de cajas\n";
    std::cin >> n; 
    std::cout << "Numero de artefactos\n"; 
    std::cin >> m; 
    for(int i = 0; i< n; i++){
        std::cin >> contador;
        if((contador >= m) && (!ya)){
            indice = i+1; 
            ya = true; 
        }
    }

    std::cout << indice; 
    return 0; 
}


