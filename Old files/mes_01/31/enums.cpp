#include<iostream>
#include<string_view>

enum Transporte {
    bicicleta,
    autobus,
    tren,
    avion
};

constexpr std::string_view getTransportName(Transporte vehiculo)
{
    switch(vehiculo)
    {
        case bicicleta: return "Bicicleta";
        case autobus: return "Autobús";
        case tren: return "Tren";
        case avion: return "Avión";
        default: return "????";
    }
}

int main()
{
    constexpr Transporte miVehiculo{tren};
    std::cout << "Voy al trabajo en " << getTransportName(miVehiculo) << '.' << '\n';
    return 0;
}