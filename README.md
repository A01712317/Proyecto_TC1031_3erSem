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

### SICT0301B: Evalúa los componentes

- Se ha realizado un análisis de complejidad para cada componente del programa, incluido el `vector`, el árbol binario de búsqueda (`BST`), y el algoritmo de ordenamiento (`insertion sort`), detallando el mejor, peor, y caso promedio. La complejidad final del programa queda determinada por el tiempo de ejecución del algoritmo de ordenamiento en \(O(n^2)\) en el peor y caso promedio, que domina el tiempo de búsqueda en el BST y el acceso a los elementos en el `vector`.

#### Presenta Casos de Prueba correctos y completos para todas las funciones y procedimientos del programa.
- **Casos de Prueba**:
  - **Ordenamiento de pilotos**: Se verificó que los pilotos se ordenen correctamente según sus tiempos de vuelta y que sus posiciones se actualicen en consecuencia.
  - **Consulta de sectores**: Se probaron las funciones `mejorSector1`, `mejorSector2` y `mejorSector3` para confirmar que devuelvan el piloto con el menor tiempo en cada sector.
  - **Vuelta rápida**: La función `vueltaRapida` se probó para asegurar que devuelve el piloto con el tiempo de vuelta total más rápido.
  - **BST**: Se verificaron todos los recorridos del BST (`preorder`, `inorder`, `postorder`, y `levelOrder`) para garantizar que los tiempos de los pilotos se almacenen y se recorran correctamente.

#### Análisis de Complejidad Completo

##### 1. **Estructuras de Datos** (`vector`, `BST`)
  - Se escogió esta estructura de datos debido a que tiene una complejidad muy sencilla, y que al hacer un recorrido inorder o preorder da los tiempos en orden de menor a mayor, pero en este caso si 2 o mas pilotos hicieron el mismo tiempo tendremos primero el que hizo el tiempo primero
   - **`vector`**:
     - **Acceso**: \( O(1) \) ya que `vector` permite acceso directo a los elementos mediante índices.
     - **Inserción**:
       - **Mejor caso**: \( O(1) \) si la capacidad no se incrementa.
       - **Peor caso**: \( O(n) \) al duplicarse la capacidad y copiar los elementos a una nueva ubicación en memoria.
       - **Caso promedio**: \( O(1) \) ya que el redimensionamiento es poco frecuente debido a la política de duplicación.

   - **BST**:
     - **Búsqueda**:
       - **Mejor caso**: \( O(\log n) \) si el árbol está balanceado.
       - **Peor caso**: \( O(n) \) si el árbol es lineal.
       - **Caso promedio**: \( O(\log n) \).
     - **Inserción y eliminación**: similar a la búsqueda, con complejidades de \( O(\log n) \) en el caso balanceado y \( O(n) \) en el caso de un árbol desbalanceado.

##### 2. **Algoritmo de Ordenamiento** (`insertion sort`)
  - Se escogió este algoritmo debido a que en la F1 cada vez que se registra una nueva vuelta, esta se ordena con los mejores resultados del resto de pilotos
    - **Mejor caso**: \( O(n) \), ya que si la lista ya está ordenada, solo se realiza una pasada sin movimientos.
    - **Peor caso**: \( O(n^2) \), cuando la lista está en orden inverso y cada elemento debe moverse a la primera posición.
    - **Caso promedio**: \( O(n^2) \), debido a que en promedio, cada elemento debe moverse la mitad de la lista.
---

##### Análisis de Complejidad del `main`

  El `main` combina múltiples operaciones que afectan su complejidad. A continuación se desglosan:
  
  ### 1. Lectura del archivo
  - Complejidad: \( O(n) \), donde \( n \) es el número de pilotos.
  
  ### 2. Determinación de posiciones (`insertion sort`)
  - Complejidad:
    - **Mejor caso**: \( O(n) \), si los tiempos ya están ordenados.
    - **Peor caso**: \( O(n^2) \), si los tiempos están en orden inverso.
    - **Caso promedio**: \( O(n^2) \).
  
  ### 3. Cálculos individuales (`vuelta rápida`, `mejorSector1`, etc.)
  - Complejidad: \( O(n) \) por cada cálculo. En total: \( O(n) \).
  
  ### 4. Construcción del BST
  - Complejidad promedio: \( O(n \log n) \).
  - Complejidad en el peor caso: \( O(n^2) \), si el árbol está desbalanceado.
  
  ### 5. Escritura de resultados
  - Complejidad: \( O(n) \).
  
  ### Complejidad total
  - Mejor caso: \( O(n^2) \), dominado por el ordenamiento.
  - Peor caso: \( O(n^2 + n^2) = O(n^2) \).

---


### SICT0302B: Toma decisiones

#### Selecciona una estructura de datos adecuada al problema y la usa correctamente.
- **Estructura de Datos Utilizada**: Se utilizó un `vector` para almacenar los objetos `Piloto`. Esta estructura es adecuada para manejar una lista de elementos que se pueden acceder y modificar mediante índices, lo cual es necesario para ordenar y evaluar los tiempos de los pilotos.
  
#### Selecciona un algoritmo de ordenamiento adecuado al problema
- **Algoritmo de Ordenamiento**: Se implementó el algoritmo de **insertion sort** en la función `determinarPosiciones`. Este algoritmo tiene una complejidad de \( 𝑂(𝑛2) \), lo que lo hace eficiente para ordenar grandes conjuntos de datos como los tiempos de vuelta de los pilotos.
- Se escogió este algoritmo debido a que en la F1 cada vez que se registra una nueva vuelta, esta se ordena con los mejores resultados del resto de pilotos

#### Usa un árbol adecuado para resolver un problema
- **Árbol Utilizado**: Se utilizó un **árbol binario de búsqueda** (`BST`) para almacenar y organizar los tiempos de vuelta de los pilotos.
- **Justificación**: Se escogió esta estructura de datos debido a que tiene una complejidad muy sencilla, y que al hacer un recorrido inorder o preorder da los tiempos en orden de menor a mayor, pero en este caso si 2 o mas pilotos hicieron el mismo tiempo tendremos primero el que hizo el tiempo primero



### SICT0303B: Implementa acciones científicas

#### Implementa mecanismos para consultar información de las estructuras correctos y útiles dentro de un programa.
- **Consulta de Sectores y Vuelta Rápida**: Las funciones para determinar los mejores tiempos por sector y el piloto con la vuelta rápida se implementaron utilizando el algoritmo `min_element`, asegurando una consulta eficiente y sencilla por la biblioteca algorithm en \( O(n) \).
- **Recorridos del BST**: Se implementaron recorridos útiles (preorden, inorden, postorden y por niveles) para extraer información de forma organizada y significativa. Se escogió esta estructura de datos debido a que tiene una complejidad muy sencilla, y que al hacer un recorrido inorder o preorder da los tiempos en orden de menor a mayor, pero en este caso si 2 o mas pilotos hicieron el mismo tiempo tendremos primero el que hizo el tiempo primero

#### Implementa mecanismos de lectura de archivos correctos y útiles dentro de un programa.
- **Lectura de Archivos**: Se implementó la lectura de archivos de texto para cargar la información de los pilotos, lo que permite una fácil actualización y modificación de los datos sin cambiar el código. Esto asegura la flexibilidad y reutilización del programa.

#### Implementa mecanismos de escritura de archivos correctos y útiles dentro de un programa.
- **El programa implementa mecanismos para escribir los datos procesados en un archivo de salida `resultados.txt`, donde se guarda la información de los mejores tiempos por sector y el listado completo de los pilotos, sus tiempos y posiciones. Este mecanismo permite el almacenamiento de resultados de manera organizada y reutilizable, facilitando su uso posterior para el análisis o para compartir los resultados.


---

## Instrucciones para ejecutar el programa

1. **Compilación**:
   - Asegúrate de tener un compilador compatible con C++11 o superior. Utiliza el siguiente comando para compilar:
     ```bash
     g++ -std=c++11 main.cpp -o calculos
     ```

2. **Ejecución**:

    ```bash
     ./calculos
     ```
   - Asegúrate de tener un archivo de entrada `pilotos.txt` en el mismo directorio que el ejecutable. El archivo debe tener la siguiente estructura para cada piloto:
     ```text
     Nombre Numero Sector1 Sector2 Sector3
     ```
     Ejemplo de contenido:
     ```
     Max Verstappen 1 1.23 1.24 1.25
     Sergio Perez 11 1.26 1.27 1.28
     ```

    


   - Los resultados se mostrarán en la terminal, con los pilotos ordenados por tiempos y la información adicional solicitada (mejores sectores, vuelta rápida, posiciones). 

--- 

