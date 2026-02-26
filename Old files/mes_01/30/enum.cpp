#include<iostream> 
#include<string_view>

enum Color{
    negro,
    blanco,
    rojo,
    azul,
};
constexpr std::string_view getColorName(Color Color)
{
    switch(Color)
    {
        case negro: return "Negro";
        case blanco: return "Blanco"; 
        case rojo: return "Rojo"; 
        case azul: return "Azul"; 
        default: return "????";
    }
}

int main()
{
    constexpr Color shirt{azul};
    std::cout << "Mi camisa es " << getColorName(shirt) << '.' << '\n';

    return 0; 
}