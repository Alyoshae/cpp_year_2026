#include <iostream>

void depositar(double& saldo, double cantidad) {
    saldo = saldo + cantidad;
}

void retirar(double& saldo, double cantidad) {
    if (saldo >= cantidad) {
        saldo = saldo - cantidad;
    }
}

void aplicarInteres(double& saldo, double tasa) {
    double interes = saldo * (tasa / 100.0);
    saldo = saldo + interes;
}

void calcularTotal(double saldo1, double saldo2, double& total) {
    total = saldo1 + saldo2;
}

void transferir(double& origen, double& destino, double cantidad) {
    if (origen >= cantidad) {
        origen = origen - cantidad;
        destino = destino + cantidad;
    }
}

void cobrarComision(double& saldo, double porcentaje) {
    double comision = saldo * (porcentaje / 100.0);
    saldo = saldo - comision;
}

int main() {
    double cuentaAhorro = 1000.0;
    double cuentaCorriente = 500.0;
    double totalDinero = 0.0;
    
    std::cout << "Inicial ahorro: " << cuentaAhorro << '\n';
    std::cout << "Inicial corriente: " << cuentaCorriente << '\n';
    std::cout << '\n';
    
    std::cout << "Deposito 300 en ahorro" << '\n';
    depositar(cuentaAhorro, 300.0);
    std::cout << "Ahorro: " << cuentaAhorro << '\n';
    std::cout << '\n';
    
    std::cout << "Retiro 150 de corriente" << '\n';
    retirar(cuentaCorriente, 150.0);
    std::cout << "Corriente: " << cuentaCorriente << '\n';
    std::cout << '\n';
    
    std::cout << "Interes 2.5% a ahorro" << '\n';
    aplicarInteres(cuentaAhorro, 2.5);
    std::cout << "Ahorro: " << cuentaAhorro << '\n';
    std::cout << '\n';
    
    std::cout << "Transferir 200 de ahorro a corriente" << '\n';
    transferir(cuentaAhorro, cuentaCorriente, 200.0);
    std::cout << "Ahorro: " << cuentaAhorro << '\n';
    std::cout << "Corriente: " << cuentaCorriente << '\n';
    std::cout << '\n';
    
    std::cout << "Comision 1% en corriente" << '\n';
    cobrarComision(cuentaCorriente, 1.0);
    std::cout << "Corriente: " << cuentaCorriente << '\n';
    std::cout << '\n';
    
    calcularTotal(cuentaAhorro, cuentaCorriente, totalDinero);
    std::cout << "Total final: " << totalDinero << '\n';
    
    return 0;
}
