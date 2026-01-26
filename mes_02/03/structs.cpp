#include<iostream> 

struct Empleado{
    int matricula{};
    double sueldo{};
};
std::ostream& operator<<(std::ostream& out, const Empleado e){
    out << "Matricula: " << e.matricula << '\n' << "Sueldo: " << e.sueldo << '\n';
    return out;
}
void cantidadUsuarios(int &cantEmp){
    while (true){
        std::cout << "Cuantos empleados tiene tu empresa: "; 
        if(!(std::cin>>cantEmp)){
            std::cout << "Error! Ingrese solo digitos... \n";
            std::cin.clear();
            std::cin.ignore(10000,'\n');
            continue;
        }
        if(cantEmp < 1 || cantEmp > 10){
            std::cout << "Error! Ingrese un rango valido... \n";
            std::cin.ignore(10000,'\n');
            continue;
        }
        std::cin.ignore(10000,'\n');
        break;
    }
}
void llenado(int &cantEmp, Empleado empleados[10]){
    for(int i{0}; i < cantEmp; ++i){
        while(true){
            std::cout << "Ingresa la matricula del empleado " << i+1 << ": "; 
            if(!(std::cin >> empleados[i].matricula)){
                std::cout << "Error! Ingrese solo digitos...\n"; 
                std::cin.ignore(10000,'\n');
                std::cin.clear();
                continue;
            }
            if(empleados[i].matricula < 0){
                std::cout << "Error! Ingrese un rango positivo...\n";
                std::cin.ignore(10000,'\n'); 
                continue;
            }
            std::cout << "Ingresa el sueldo del empleado " << i+1 << ": ";
            if(!(std::cin >> empleados[i].sueldo)){
                std::cout << "Error! Ingrese un rango positivo...\n";
                std::cin.ignore(10000,'\n');
                continue;
            }
            std::cin.ignore(10000,'\n');
            break;
        }
    }
}
int main(){
    int cantEmp{};
    cantidadUsuarios(cantEmp);
    Empleado empleados[10]{};
    llenado(cantEmp, empleados);
    return 0;
}


