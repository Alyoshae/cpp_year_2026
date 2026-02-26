#include <iostream>

// Actualiza las calificaciones originales usando referencias
void actualizarCalificaciones(double& calificacion1, double& calificacion2, double& calificacion3) {
    calificacion1 = calificacion1 + 5.0;
    calificacion2 = calificacion2 + 5.0;
    calificacion3 = calificacion3 + 5.0;
}

// Calcula promedio y lo guarda en la variable original
void calcularPromedio(double cal1, double cal2, double cal3, double& promedio) {
    promedio = (cal1 + cal2 + cal3) / 3.0;
}

// Determina si aprobó y actualiza la variable original
void determinarAprobacion(double promedio, bool& aprobado) {
    if (promedio >= 60.0) {
        aprobado = true;
    } else {
        aprobado = false;
    }
}

// Función extra: aplica penalización por ausencias
void aplicarPenalizacion(double& promedio, int ausencias) {
    double penalizacion = ausencias * 2.0;
    promedio = promedio - penalizacion;

    if (promedio < 0.0) {
        promedio = 0.0;
    }
}

int main() {
    double mate = 55.0;
    double fisica = 58.0;
    double quimica = 62.0;
    double promedioFinal = 0.0;
    bool estaAprobado = false;
    int ausencias = 3;
    
    std::cout << "=== CALIFICACIONES ORIGINALES ===" << '\n';
    std::cout << "Matemáticas: " << mate << '\n';
    std::cout << "Física: " << fisica << '\n';
    std::cout << "Química: " << quimica << '\n';
    std::cout << "Ausencias: " << ausencias << '\n';
    std::cout << '\n';
    
    // Damos puntos extra (ahora SÍ funciona!)
    actualizarCalificaciones(mate, fisica, quimica);
    
    std::cout << "=== DESPUÉS DE PUNTOS EXTRA (+5 cada una) ===" << '\n';
    std::cout << "Matemáticas: " << mate << '\n';   // 60.0
    std::cout << "Física: " << fisica << '\n';       // 63.0
    std::cout << "Química: " << quimica << '\n';     // 67.0
    std::cout << '\n';
    
    // Calculamos promedio (ahora SÍ funciona!)
    calcularPromedio(mate, fisica, quimica, promedioFinal);
    std::cout << "Promedio antes de penalización: " << promedioFinal << '\n';  // 63.33
    
    // Aplicamos penalización por ausencias
    aplicarPenalizacion(promedioFinal, ausencias);
    std::cout << "Promedio después de penalización (-" << (ausencias * 2) << " pts): " << promedioFinal << '\n';  // 57.33
    
    // Determinamos si aprobó (ahora SÍ funciona!)
    determinarAprobacion(promedioFinal, estaAprobado);
    std::cout << "¿Aprobado? (≥60): " << (estaAprobado ? "Sí" : "No") << '\n';  // No
    
    std::cout << '\n';
    std::cout << "=== RESUMEN FINAL ===" << '\n';
    std::cout << "Calificación final: " << promedioFinal << '\n';
    std::cout << "Estado: " << (estaAprobado ? "APROBADO ✓" : "REPROBADO ✗") << '\n';
    
    return 0;
}