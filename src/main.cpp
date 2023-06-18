#include <iostream>
#include <Clase.hpp>

int main() {
    double limiteInferior, limiteSuperior;
    int iteraciones;

    // Lectura de los límites y el número de iteraciones desde la entrada estándar
    std::cout << "Ingrese el límite inferior: ";
    std::cin >> limiteInferior;
    std::cout << "Ingrese el límite superior: ";
    std::cin >> limiteSuperior;
    std::cout << "Ingrese el número de iteraciones: ";
    std::cin >> iteraciones;

    // Creación del objeto SimpsonIntegration y cálculo de la aproximación de la integral
    SimpsonIntegration simpson(limiteInferior, limiteSuperior, iteraciones);
    double resultado = simpson.integrar();

    // Impresión del resultado de la aproximación de la integral
    std::cout << std::fixed << std::setprecision(4);
    std::cout << "La aproximación de la integral es: " << resultado << std::endl;

    return 0;
}
