#include<iostream> 
class Empleado{
    public: 
    int matricula{};
    int edad{};
};


int main(){
    int cantEmp{};
    while(true){
        std::cout << "Ingrese la cantidad de empleados que tiene su empresa: "; 
        if(!(std::cin>> cantEmp)){
            std::cout << "Error! Ingrese solo digitos...\n";
            std::cin.clear(10000,'\n');
            std::cin.clear();
            continue;
        }
        if(cantEmp < 0){
            std::cout << "Error! Ingrese numeros positivos...\n";
            std::cin.ignore(10000,'\n');
            continue;
        }
        std::cin.ignore(10000,'\n');
        break;
    }
    Empleados* empleados = new empleado[cantEmp]; //puntero...


    delete[] empleado;

    
}