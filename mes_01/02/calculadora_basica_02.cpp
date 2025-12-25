#include <iostream> 

int main ()
{
std::cout << "BIENVENIDO A LA CALCULADORA 2" << '\n'; 
float x {};
std::cout << "INGRESE UN DIGITO: ";
while (!(std::cin >> x))         //SE AGREGA VALIDACION DE QUE SEA DIGITO. 
{
    std::cout << "Error! INGRESE SOLO DIGITOS: ";
    std::cin.clear();            // limpia el error 
    std::cin.ignore(10000,'\n'); // limpia o ignora el input malo 
}
std::cout << "INGRESE OTRO DIGITO: "; 
float y {};
while(!(std::cin >> y))
{
    std::cout << "Error! INGRESE SOLO DIGITOS: ";
    std::cin.clear(); 
    std::cin.ignore(10000,'\n');
}
int menu {};
while (true)
{
    std::cout << "INGRESE QUE OPERACION QUIERE REALIZAR CON ESTOS DOS DIGITOS" << '\n'; 
    std::cout << '\t' << "1) SUMA 2) RESTA 3) DIVISION 4) MULTIPLICACION" << '\n'<< "OPCION:";
    if(!(std::cin >> menu)){
        std::cout << "Error! INGRESE SOLO DIGITOS " << '\n';
        std::cin.clear(); 
        std::cin.ignore(10000,'\n');
        continue;
    }
    if(menu <1 || menu > 4){
        std::cout << "Error! INGRESE UNA OPCION VALIDA (1-4) " << '\n';
        std::cin.ignore(10000, '\n');
        continue; 
    }
    std::cin.ignore(10000, '\n');
    break;
}

switch (menu) //uso del menu switch por multiples opciones. 
{
    case 1:
    std::cout << "LA SUMA ENTRE EL DIGITO " << x << " Y " << y << " TIENE COMO RESULTADO: " << x+y;
    break; 
    case 2: 
    std::cout << "LA RESTA ENTRE EL DIGITO " << x << " Y " << y << " TIENE COMO RESULTADO: " << x-y;
    break; 
    case 3: 
    if (y == 0) {
        std::cout << "NO SE PUEDE REALIZAR ESTA OPERACION, NO SE PUEDE DIVIDIR ENTRE 0. ";
    }
    else{
        std::cout << "LA DIVISION ENTRE EL DIGITO "  << x << " Y " << y <<" TIENE COMO RESULTADO: " << x/y;
    }
    break;
    case 4: 
    std::cout << "LA MULTIPLICACION ENTRE EL DIGITO " << x << " Y " << y << " TIENE COMO RESULTADO: " << x*y;
    break;
}
return 0; 
}