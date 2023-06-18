# Investigación sobre el método de integración de Simpson 1/3

El método de integración de Simpson 1/3 es una técnica numérica utilizada para aproximar el valor de una integral definida. Este método se basa en la interpolación polinómica de segundo grado para estimar el área bajo una curva.

El nombre "Simpson 1/3" se debe al hecho de que el método utiliza polinomios de segundo grado para aproximar la función en intervalos de igual tamaño, y utiliza la regla de Simpson 1/3 para calcular la integral en cada uno de estos intervalos. La regla de Simpson 1/3 establece que el área bajo un polinomio de segundo grado se puede aproximar utilizando una combinación de los valores de la función en los extremos y en el punto medio del intervalo.

El método de Simpson 1/3 se utiliza cuando se desea obtener una aproximación más precisa de la integral en comparación con otros métodos numéricos, como la regla del trapecio. Sin embargo, es importante tener en cuenta que este método requiere que el número de intervalos utilizados sea par.

## El proceso general para aplicar el método de Simpson 1/3 es el siguiente:

1.- Dividir el intervalo de integración en subintervalos de igual tamaño. Si el número de intervalos es impar, el último intervalo puede ser tratado utilizando otro método, como la regla del trapecio.

2.- Calcular el tamaño de cada subintervalo, denotado como 'h', mediante la fórmula: h = (b - a) / n, donde 'a' y 'b' son los límites de integración y 'n' es el número de intervalos.

3.- Evaluar la función en los extremos y en los puntos medios de cada subintervalo. Utilizar estos valores para aplicar la regla de Simpson 1/3 y calcular la integral en cada subintervalo.

4.- Sumar todas las aproximaciones de las integrales en los subintervalos para obtener la aproximación final de la integral total.

Es importante destacar que el método de Simpson 1/3 tiene limitaciones y puede no ser adecuado para todas las funciones o casos de integración. Algunas funciones complejas pueden requerir un número considerablemente grande de intervalos para lograr una precisión aceptable. En tales casos, se pueden utilizar métodos de integración más avanzados.