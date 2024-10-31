# Programa de Clasificación de Fórmula 1

## Introducción

En la Fórmula 1, la clasificación es un proceso crucial que determina el orden de salida de los pilotos en la carrera. Durante la clasificación, los pilotos intentan registrar la vuelta más rápida posible. La posición de salida, conocida como "pole position", es otorgada al piloto con el tiempo más rápido. Además, se registran los mejores tiempos en cada uno de los tres sectores del circuito.

## Descripción del Proyecto

Este programa en C++ lee un archivo de texto que contiene los detalles de varios pilotos de Fórmula 1, incluyendo su nombre, número, posición y los tiempos en que recorren los sectores 1, 2 y 3 del circuito. A partir de estos datos, el programa determina:
- El piloto con el mejor tiempo en cada sector.
- La vuelta más rápida.
- Las posiciones finales de los pilotos.
  
g++ -std=c++11 main.cpp

## Competencias 

### SICT0302B: Toma decisiones

#### Selecciona una estructura de datos adecuada al problema y la usa correctamente.
- **Estructura de Datos Utilizada**: Se utilizó un `vector` para almacenar los objetos `Piloto`. Esta estructura es adecuada para manejar una lista de elementos que se pueden acceder y modificar mediante índices, lo cual es necesario para ordenar y evaluar los tiempos de los pilotos.
- **Uso Correcto**: El `vector` permite un acceso rápido a los elementos y es ideal para aplicar algoritmos de ordenamiento, como `merge sort`, para ordenar a los pilotos por tiempos de vuelta.

#### Selecciona un algoritmo de ordenamiento adecuado al problema
- **Algoritmo de Ordenamiento**: Se implementó el algoritmo de **merge sort** en la función `determinarPosiciones`. Este algoritmo tiene una complejidad de \( O(n \log n) \), lo que lo hace eficiente para ordenar grandes conjuntos de datos como los tiempos de vuelta de los pilotos.
- **Razón de Selección**: Merge sort es un algoritmo estable y eficiente para ordenar elementos, especialmente cuando se trata de comparar objetos (en este caso, los pilotos) y mantener el orden relativo de elementos iguales.

#### Usa un árbol adecuado para resolver un problema
- **Árbol Utilizado**: Se utilizó un **árbol binario de búsqueda** (`BST`) para almacenar y organizar los tiempos de vuelta de los pilotos.
- **Justificación**: El BST permite una búsqueda eficiente, así como una forma ordenada de recorrer y visualizar los tiempos totales de los pilotos en diferentes formas (preorden, inorden, postorden y por niveles), facilitando el análisis y consulta de datos.

### SICT0301B: Evalúa los componentes

#### Presenta Casos de Prueba correctos y completos para todas las funciones y procedimientos del programa.
- **Casos de Prueba**:
  - **Ordenamiento de pilotos**: Se verificó que los pilotos se ordenen correctamente según sus tiempos de vuelta y que sus posiciones se actualicen en consecuencia.
  - **Consulta de sectores**: Se probaron las funciones `mejorSector1`, `mejorSector2` y `mejorSector3` para confirmar que devuelvan el piloto con el menor tiempo en cada sector.
  - **Vuelta rápida**: La función `vueltaRapida` se probó para asegurar que devuelve el piloto con el tiempo de vuelta total más rápido.
  - **BST**: Se verificaron todos los recorridos del BST (`preorder`, `inorder`, `postorder`, y `levelOrder`) para garantizar que los tiempos de los pilotos se almacenen y se recorran correctamente.

#### Hace un análisis de complejidad correcto y completo de todas las estructuras de datos y cada uno de sus usos en el programa.
- **Vector**: La complejidad para acceder a un elemento en un `vector` es \( O(1) \), y la complejidad de ordenarlo con merge sort es \( O(n \log n) \).
- **BST**: La inserción, eliminación y búsqueda en el árbol tienen una complejidad promedio de \( O(\log n) \), asumiendo un árbol balanceado.

### SICT0303B: Implementa acciones científicas

#### Implementa mecanismos para consultar información de las estructuras correctos y útiles dentro de un programa.
- **Consulta de Sectores y Vuelta Rápida**: Las funciones para determinar los mejores tiempos por sector y el piloto con la vuelta rápida se implementaron utilizando el algoritmo `min_element`, asegurando una consulta eficiente en \( O(n) \).
- **Recorridos del BST**: Se implementaron recorridos útiles (preorden, inorden, postorden y por niveles) para extraer información de forma organizada y significativa.

#### Implementa mecanismos de lectura de archivos correctos y útiles dentro de un programa.
- **Lectura de Archivos**: Se implementó la lectura de archivos de texto para cargar la información de los pilotos, lo que permite una fácil actualización y modificación de los datos sin cambiar el código. Esto asegura la flexibilidad y reutilización del programa.

#### Implementa mecanismos de escritura de archivos correctos y útiles dentro de un programa.
- **Escritura de Archivos (opcional)**: Aunque no se implementó en el ejemplo actual, se podría agregar la capacidad de escribir los resultados (como los tiempos de vuelta y las posiciones finales de los pilotos) en un archivo de texto, facilitando el análisis y guardado de información.
