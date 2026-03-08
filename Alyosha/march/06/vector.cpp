#include<iostream> 
#include<vector> 



int main(){

    int n = 0; //cajas encantadas 
    int m = 0; //artefacto 

    std::cout << "Numero de cajas\n";
    std::cin >> n; 
    std::vector<int> cajas{}; //arreglo cajas //1based
    for(int i = 0; i< n; i++){
        std::cout << "Caja " << i+1 << ": "; 
        std::cin >> m;
        cajas.push_back(m);
        m = 0; 
        std::cout << std::endl;
    }


    return 0; 
}


