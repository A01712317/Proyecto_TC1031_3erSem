Aquí tienes el análisis de complejidad agregado al README:

---

# Programa de Clasificación de Fórmula 1

## Introducción

En la Fórmula 1, la clasificación es un proceso crucial que determina el orden de salida de los pilotos en la carrera. Durante la clasificación, los pilotos intentan registrar la vuelta más rápida posible. La posición de salida, conocida como "pole position", es otorgada al piloto con el tiempo más rápido. Además, se registran los mejores tiempos en cada uno de los tres sectores del circuito.

## Descripción del Proyecto

Este programa en C++ lee un archivo de texto que contiene los detalles de varios pilotos de Fórmula 1, incluyendo su nombre, número, posición y los tiempos en que recorren los sectores 1, 2 y 3 del circuito. A partir de estos datos, el programa determina:
- El piloto con el mejor tiempo en cada sector.
- La vuelta más rápida.
- Las posiciones finales de los pilotos.

## Competencias 

### SICT0302B: Toma decisiones

#### Selecciona una estructura de datos adecuada al problema y la usa correctamente.
- **Estructura de Datos Utilizada**: Se utilizó un `vector` para almacenar los objetos `Piloto`. Esta estructura es adecuada para manejar una lista de elementos que se pueden acceder y modificar mediante índices, lo cual es necesario para ordenar y evaluar los tiempos de los pilotos.
  
#### Selecciona un algoritmo de ordenamiento adecuado al problema
- **Algoritmo de Ordenamiento**: Se implementó el algoritmo de **merge sort** en la función `determinarPosiciones`. Este algoritmo tiene una complejidad de \( O(n \log n) \), lo que lo hace eficiente para ordenar grandes conjuntos de datos como los tiempos de vuelta de los pilotos.

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

#### Análisis de Complejidad Completo

##### 1. **Estructuras de Datos** (`vector`, `BST`)
   
   - **`vector`**:
     - **Acceso**: \( O(1) \) ya que `vector` permite acceso directo a los elementos mediante índices.
     - **Inserción**:
       - **Mejor caso**: \( O(1) \) si la capacidad no se incrementa.
       - **Peor caso**: \( O(n) \) al duplicarse la capacidad y copiar los elementos a una nueva ubicación en memoria.
       - **Caso promedio**: \( O(1) \) ya que el redimensionamiento es poco frecuente debido a la política de duplicación.
     - **Ordenamiento (merge sort)**:
       - **Mejor caso**: \( O(n \log n) \), pues en `merge sort` el caso ideal sigue siendo \( O(n \log n) \).
       - **Peor caso**: \( O(n \log n) \), ya que el algoritmo sigue dividiendo y mezclando segmentos en cada nivel de recursión.
       - **Caso promedio**: \( O(n \log n) \), manteniendo complejidad constante para cualquier entrada.

   - **BST**:
     - **Búsqueda**:
       - **Mejor caso**: \( O(\log n) \) si el árbol está balanceado.
       - **Peor caso**: \( O(n) \) si el árbol es lineal.
       - **Caso promedio**: \( O(\log n) \).
     - **Inserción y eliminación**: similar a la búsqueda, con complejidades de \( O(\log n) \) en el caso balanceado y \( O(n) \) en el caso de un árbol desbalanceado.

##### 2. **Algoritmo de Ordenamiento** (`merge sort`)

   - **Mejor caso**: \( O(n \log n) \), pues `merge sort` es un algoritmo estable que mantiene una complejidad constante.
   - **Peor caso**: \( O(n \log n) \), con divisiones y mezclas en cada nivel del árbol de recursión.
   - **Caso promedio**: \( O(n \log n) \), dado que la estructura de merge sort permanece consistente independientemente del orden de entrada.

---

### SICT0303B: Implementa acciones científicas

#### Implementa mecanismos para consultar información de las estructuras correctos y útiles dentro de un programa.
- **Consulta de Sectores y Vuelta Rápida**: Las funciones para determinar los mejores tiempos por sector y el piloto con la vuelta rápida se implementaron utilizando el algoritmo `min_element`, asegurando una consulta eficiente en \( O(n) \).
- **Recorridos del BST**: Se implementaron recorridos útiles (preorden, inorden, postorden y por niveles) para extraer información de forma organizada y significativa.

#### Implementa mecanismos de lectura de archivos correctos y útiles dentro de un programa.
- **Lectura de Archivos**: Se implementó la lectura de archivos de texto para cargar la información de los pilotos, lo que permite una fácil actualización y modificación de los datos sin cambiar el código. Esto asegura la flexibilidad y reutilización del programa.

#### Implementa mecanismos de escritura de archivos correctos y útiles dentro de un programa.
- **Escritura de Archivos (opcional)**: Aunque no se implementó en el ejemplo actual, se podría agregar la capacidad de escribir los resultados (como los tiempos de vuelta y las posiciones finales de los pilotos) en un archivo de texto, facilitando el análisis y guardado de información. 

---

## Instrucciones para ejecutar el programa

1. **Compilación**:
   - Asegúrate de tener un compilador compatible con C++11 o superior. Utiliza el siguiente comando para compilar:
     ```bash
     g++ -std=c++11 main.cpp -o calculos
     ```

2. **Ejecución**:
   - Asegúrate de tener un archivo de entrada `pilotos.txt` en el mismo directorio que el ejecutable. El archivo debe tener la siguiente estructura para cada piloto:
     ```text
     Nombre Numero Sector1 Sector2 Sector3
     ```
     Ejemplo de contenido:
     ```
     Max Verstappen 1 1.23 1.24 1.25
     Sergio Perez 11 1.26 1.27 1.28
     ```

     ```bash
     ./calculos
     ```


   - Los resultados se mostrarán en la terminal, con los pilotos ordenados por tiempos y la información adicional solicitada (mejores sectores, vuelta rápida, posiciones). 

--- 

Este README proporciona una guía completa para entender la estructura, funcionamiento y ejecución del programa de clasificación de Fórmula 1, incluyendo el análisis de complejidad para cada componente utilizado.
