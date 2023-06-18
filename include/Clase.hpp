#pragma once
#include <iostream>  // Biblioteca para entrada/salida estándar
#include <cmath>     // Biblioteca para funciones matemáticas
#include <iomanip>   // Biblioteca para el formato de salida
#include <vector>    // Biblioteca para utilizar vectores

class SimpsonIntegration {
private:
    int n;         // Número de iteraciones
    double a, b;   // Límites de la integral

    // Definición de la función a integrar (2 - e^x^2)
    double funcion(double x) {
        return 2 - std::exp(x * x);
    }

public:
    // Constructor de la clase SimpsonIntegration
    SimpsonIntegration(double limiteInferior, double limiteSuperior, int iteraciones) {
        a = limiteInferior;
        b = limiteSuperior;
        n = iteraciones;
    }

    // Método para realizar la integración numérica usando el método de Simpson 1/3
    double integrar() {
        // Cálculo de h (tamaño del intervalo)
        double h = (b - a) / n;

        // Inicialización de la suma con los valores de la función evaluados en los límites
        double sum = funcion(a) + funcion(b);

        // Impresión del procedimiento para calcular h
        std::cout << "Procedimiento para calcular h:" << std::endl;
        std::cout << "h = (b - a) / n" << std::endl;
        std::cout << "h = (" << b << " - " << a << ") / " << n << std::endl;
        std::cout << "h = " << h << std::endl;
        std::cout << std::endl;

        // Vectores para almacenar los valores de X y los resultados de la función
        std::vector<double> valoresX;
        valoresX.push_back(a);

        std::vector<double> valoresFuncion;
        valoresFuncion.push_back(funcion(a));

        // Bucle para calcular la suma utilizando los valores de X y la función
        for (int i = 1; i < n; i++) {
            // Cálculo del valor de X en cada iteración
            double x = a + i * h;

            // Actualización de la suma según el patrón (2-4-2-4...)
            if (i % 2 == 0)
                sum += 2 * funcion(x);
            else
                sum += 4 * funcion(x);

            // Almacenamiento de los valores de X y los resultados de la función en los vectores
            valoresX.push_back(x);
            valoresFuncion.push_back(funcion(x));
        }

        // Almacenamiento de los valores de X y los resultados de la función en los vectores para los límites
        valoresX.push_back(b);
        valoresFuncion.push_back(funcion(b));

        // Impresión de los valores de X y los resultados de la función
        std::cout << std::fixed << std::setprecision(4);
        std::cout << "Valores de X y sus resultados en la función:" << std::endl;
        for (int i = 0; i <= n; i++) {
            std::cout << "X" << i << " = " << valoresX[i] << ", ";
            std::cout << "f(X" << i << ") = " << valoresFuncion[i] << std::endl;
        }
        std::cout << std::endl;

        // Cálculo final de la aproximación de la integral utilizando la fórmula de Simpson 1/3
        return (h / 3) * sum;
    }
};