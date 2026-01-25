#include <iostream>

struct Personaje {
    int vida;
    int ataque;
    int defensa;
    int nivel;
};

void mostrarPersonaje(Personaje p) {
    std::cout << "Vida: " << p.vida << '\n';
    std::cout << "Ataque: " << p.ataque << '\n';
    std::cout << "Defensa: " << p.defensa << '\n';
    std::cout << "Nivel: " << p.nivel << '\n';
}

void subirNivel(Personaje& p) {
    p.nivel = p.nivel + 1;
    p.vida = p.vida + 20;
    p.ataque = p.ataque + 5;
    p.defensa = p.defensa + 3;
}

void atacar(Personaje atacante, Personaje& objetivo) {
    int danio = atacante.ataque - objetivo.defensa;
    if (danio > 0) {
        objetivo.vida = objetivo.vida - danio;
    }
}

void curar(Personaje& p, int cantidad) {
    p.vida = p.vida + cantidad;
}

Personaje crearGuerrero() {
    Personaje guerrero;
    guerrero.vida = 100;
    guerrero.ataque = 25;
    guerrero.defensa = 15;
    guerrero.nivel = 1;
    return guerrero;
}

Personaje crearMago() {
    Personaje mago;
    mago.vida = 80;
    mago.ataque = 35;
    mago.defensa = 10;
    mago.nivel = 1;
    return mago;
}

int main() {
    Personaje guerrero = crearGuerrero();
    Personaje mago = crearMago();
    
    std::cout << "Guerrero inicial" << '\n';
    mostrarPersonaje(guerrero);
    std::cout << '\n';
    
    std::cout << "Mago inicial" << '\n';
    mostrarPersonaje(mago);
    std::cout << '\n';
    
    std::cout << "Guerrero sube de nivel" << '\n';
    subirNivel(guerrero);
    mostrarPersonaje(guerrero);
    std::cout << '\n';
    
    std::cout << "Guerrero ataca a Mago" << '\n';
}
