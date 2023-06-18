# Manual de uso del programa "simpson_1l3"

El programa "simpson_1l3" es una implementación en C++ del método de integración de Simpson 1/3. Permite calcular una aproximación de la integral definida de una función en un intervalo dado.

## Requisitos previos
Para ejecutar el programa, es necesario tener un entorno de desarrollo de C++ instalado en tu computadora, como GCC o Visual Studio.
Asegúrate de tener el archivo simpson_1l3.cpp y las dependencias del programa en tu entorno de desarrollo.
Pasos para utilizar el programa
1.- Abre el archivo simpson_1l3.cpp en tu entorno de desarrollo.
2.- En terminal colocas "make run".

## Compila y ejecuta el programa.

El programa te solicitará ingresar los siguientes datos:

Límite inferior: Ingresa el valor del límite inferior del intervalo de integración.
Límite superior: Ingresa el valor del límite superior del intervalo de integración.
Número de iteraciones: Ingresa el número de iteraciones o subintervalos para la aproximación de la integral.
Después de ingresar los datos requeridos, el programa realizará el cálculo y mostrará el resultado de la aproximación de la integral en la consola.

## Ejemplo de uso
Supongamos que deseas calcular la aproximación de la integral definida de la función en el intervalo [0, 2] utilizando 4 iteraciones.

Abre el archivo simpson_1l3.cpp en tu entorno de desarrollo.

Compila y ejecuta el programa.

Ingrese el límite inferior: 0
Ingrese el límite superior: 1
Ingrese el número de iteraciones: 10

Procedimiento para calcular h:
h = (b - a) / n
h = (1 - 0) / 10
h = 0.1

Valores de X y sus resultados en la función:
X0 = 0.0000, f(X0) = 2.0000
X1 = 0.1000, f(X1) = 1.9802
X2 = 0.2000, f(X2) = 1.9200
...
X10 = 1.0000, f(X10) = 0.7358

La aproximación de la integral es: 0.7473

El programa mostrará el resultado de la aproximación de la integral.

Recuerda que este es solo un ejemplo y puedes ajustar los valores de entrada según tus necesidades de cálculo de la integral definida.