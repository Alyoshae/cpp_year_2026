#include <iostream> 

struct Humano{
    int edad{};
    double peso{};
    double dinero{};
    double estatura{};
};

std::ostream& operator<<(std::ostream& out, const Humano& pedro){
    out << "(" << pedro.dinero << ", " << pedro.estatura << ", "<< pedro.edad << ", " << pedro.peso << ')'; 
    return out;
}

int main(){

    Humano pedro{};
    pedro.dinero = 1000;
    pedro.estatura = 1.86;
    pedro.edad = 22;
    pedro.peso = 130.00;

    std::cout << pedro<< '\n';
    return 0; 
}