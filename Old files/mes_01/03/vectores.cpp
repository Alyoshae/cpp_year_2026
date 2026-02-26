#include <iostream> 

void suma(){       
}
void resta(){    
}
void magnitud(){   
}
void punto(){      
}
void validationSwitch(){                                   
}
void vectores(){
}

int main (){
std::cout << "Calculadora de vectores!" << '\n';
while (true){
    int menu{};
    while (true){
        std::cout << "====Menu====" << '\n';
        std::cout << "1) Suma de vectores" << '\n'; 
        std::cout << "2) Resta de vectores" << '\n'; 
        std::cout << "3) Magnitud de vectores" << '\n'; 
        std::cout << "4) Producto punto" << '\n'; 
        std::cout << "5) Salir" << '\n'; 
        std::cout << "OPCION: ";
        if (!(std::cin >> menu)){
            std::cout << "Error! Ingrese solo numeros!" << '\n'; 
            std::cin.clear(); 
            std::cin.ignore(10000, '\n');
            continue;
        }
        if (menu < 1 || menu > 5){
            std::cout << "Error! Ingrese un numero valido!" << '\n'; 
            std::cin.clear();
            std::cin.ignore(10000,'\n');
            continue; 
        }
        std::cin.ignore(10000,'\n');
        break; 
     }
    switch (menu){
        case 1: 
            vectores();
            suma(); 
            validationSwitch();
            break; 
        case 2: 
            vectores();
            resta(); 
            validationSwitch();
            break;
        case 3: 
            vectores();
            magnitud(); 
            validationSwitch();
            break; 
        case 4:
            vectores();
            punto();
            validationSwitch();
            break;
            }
    if (menu == 5){ // si agrego la opcion 5 dentro del switch se vuelve a repetir. 
        std::cout << "Gracias por utilizarme! ";
        break;
    }
}
}



