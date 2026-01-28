#include<iostream>
#include<vector>

int main(){
    //cuantos parciales tuvo -> Tamaño del vector. 
    int x{};
    std::cout << "Ingrese cuantos parciales tuvo este semestre: ";
    std::cin >> x;
    std::vector<double>calificaciones(x);
    //prueba de range con pushback (altera el tamaño del vector, dejando el tamaño antes proporcionado con el valor de "0")
    while(true){
        break;
        for(int n; std::cin>>n;){
            calificaciones.push_back(n);
        }
    }
    //llenado de calificaciones 
    for(int i{0}; i < x; ++i){
        std::cout << i+1 << " Parcial: "; 
        std::cin >> calificaciones[i];
    }
    std::cout << "=============" << '\n';
    //Impresion de calificaciones(utilizando .size(); genera una advertencia en el compilador...)
    while(true){
        break;
        for(int i{0}; i < calificaciones.size(); ++i){
            std::cout << i+1 << " Parcial: ";
            std::cout << calificaciones[i] << '\n';
        }
    }
    //impresion de calificaciones(metodo conocido)
    for(int i{0}; i < x; ++i){
        std::cout << i+1 << " Parcial: "; 
        std::cout << calificaciones[i] << '\n';
    }
    std::cout << "=============" << '\n';
    //promedio de calificaciones (utilizando for range para sumatoria y calificaciones.size para denominador, util)
    while(true){
        break;
        double contador{0};
        for(int n: calificaciones){
            contador+=n;
        }
        std::cout << "El promedio de calificaciones es: " << contador << "/" << calificaciones.size() << ": " << contador/calificaciones.size() << '\n';
    }
    //impresion de promedio(for normal)
    double contador{0};
    for(int i{0}; i < x ; ++i){
        contador+=calificaciones[i];
    }
    std::cout << "El promedio de calificaciones es: " << contador << "/" << x << ": " << contador/x << '\n';
    return 0;
}
