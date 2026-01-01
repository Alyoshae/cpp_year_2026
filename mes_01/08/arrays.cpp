#include <iostream> 
#include <cmath>

int main(){
while (true){
        int cant{};
        double vector[3]{};
        int submenu{};
        double cont{0};

        //eleccion de numeros de componentes 
        while(true){
            std::cout << "Ingrese si quiere dos o tres componentes en su vector: ";
            if(!(std::cin >> cant)){
                std::cout << "Error! Ingrese solo digitos...\n";
                std::cin.clear();
                std::cin.ignore(10000,'\n');
                continue;
            }
            if(cant < 2 || cant > 3){
                std::cout << "Error! ingrese un rango valido...\n";
                std::cin.clear();
                continue;
            }
            std::cin.ignore(1000,'\n');
            break;
        }
        //llenado de vector 
        for(int i{0}; i < cant; ++i){
            while(true){
                std::cout << "Ingrese el componente numero " << i+1 << " para su vector: ";
                if(!(std::cin>>vector[i])){
                    std::cout << "Error! Ingrese un digito\n";
                    std::cin.clear();
                    std::cin.ignore(10000,'\n');
                    continue;
                }
                std::cin.ignore(10000,'\n');
                break;
            }
        }
        //impresion del vector 
        std::cout << "\nEste es el vector: (";
        for(int i{0}; i < cant; ++i){
            std::cout << vector[i];
            if(i+1 < cant){
                std::cout << ", ";
            }
        }
        std::cout <<")\n";


        // Magnitud del vector. 
        for (int i{0}; i < cant; ++i){
            cont += vector[i] * vector[i];
        }
        cont = std::sqrt(cont);
        std::cout << "\nEsta es la magnitud del vector!: " << cont;
        while(true){
            std::cout << "\n\nQuiere ingresar otro vector? (1-si - 2-no): ";
            if(!(std::cin >> submenu)){
                std::cout << "Error! Ingrese un digito...\n";
                std::cin.clear();
                std::cin.ignore(1000,'\n');
                continue;
            }
            if(submenu < 1 || submenu > 2){
                std::cout << "Error! Ingrese un digito valido... \n";
                std::cin.ignore(1000,'\n');
                continue;
            }
            std::cin.ignore(1000,'\n');
            break;
        }
        if(submenu == 2){break;}
        else {continue;}
    }
    return 0;
}