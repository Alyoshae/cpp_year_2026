#include <iostream>

float menu(float x, float y)
{
    std::cout << "1)SUMA 2)RESTA 3) DIVISION 4) MULTIPLICACION"<< '\n' << "OPCION: ";
    int menu{};
    std::cin >> menu; 
    switch (menu)
    {
        case 1:
        std::cout <<"la suma de " << x << 'y' << y << " es: " << x+y;
        break;
        case 2: 
        std::cout <<"la resta de " << x << 'y' << y << " es: " << x-y;
        break;
        case 3: 
        std::cout <<"la division de " << x << 'y' << y << " es: " << x/y;
        break;
        case 4: 
        std::cout <<"la multipliccion de " << x << 'y' << y << " es: " << x*y;
        break;
    }
    return menu;
}

int main () 
{
    std::cout << "Bienvenido a la calculadora en terminal" << '\n';
    
    std::cout << "Ingrese un digito: " << '\n';
    float x{};
    std::cin >> x; 

    std::cout << "Ingrese un segundo digito: " << '\n'; 
    float y{};
    std::cin >> y; 

    std::cout << "¿Que operacion queiere realizar entre estos dos digitos?" << '\n';
    menu(x, y);
    

    return 0; 
}