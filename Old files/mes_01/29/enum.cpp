#include<iostream>

//mejor practica para enum utilizar namespace y scope. 
namespace Color{
    enum Color{
        naranja,
        verde,
        rojo,
    };
};

namespace Comida{
    enum Comida{
        naranja,
        manzana,
        pera,
    };
}

int main(){
    Color::Color bonito{Color::naranja};
    Comida::Comida rico{Comida::naranja};
    std::cout << bonito+1 << ' ' << rico+1 << '\n';

    
    return 0;
}