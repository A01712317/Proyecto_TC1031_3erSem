---
# Proyecto: Programa de Clasificación de Fórmula 1

Este proyecto simula el proceso de clasificación en la Fórmula 1, determinando los mejores tiempos en cada sector, la vuelta más rápida y las posiciones finales de los pilotos. Utiliza estructuras de datos como `vector` y árboles binarios de búsqueda (`BST`), y emplea el algoritmo de ordenamiento `insertion sort` para organizar los tiempos.

---

## Descripción del avance 1

Se implementó la funcionalidad básica para:
- Leer datos de pilotos desde un archivo de texto.
- Calcular los tiempos totales de vuelta de cada piloto.
- Ordenar los tiempos usando el algoritmo `insertion sort`.

---

## Descripción del avance 2

Se añadió la funcionalidad para:
- Determinar el mejor piloto en cada sector.
- Identificar al piloto con la vuelta más rápida.
- Almacenar los tiempos en un árbol binario de búsqueda (`BST`) para facilitar los recorridos.

---

## Cambios sobre el primer avance

1. **Añadido árbol binario de búsqueda (BST):**  
   Razón: Permite organizar y recorrer los tiempos de forma eficiente.
   
2. **Cálculo de mejores sectores:**  
   Razón: Proporciona información adicional para el análisis de los resultados.

3. **Formato de salida actualizado:**  
   Razón: Para presentar los resultados de manera más clara y profesional.

---

## Descripción del avance 3

Se integraron las siguientes mejoras:
- Implementación de recorridos `inorder`, `preorder`, `postorder` y `levelOrder` en el árbol binario de búsqueda.
- Mecanismos para leer y escribir archivos (`pilotos.txt` y `resultados.txt`).
- Optimización del algoritmo `insertion sort` para manejar grandes volúmenes de datos.

---

## Cambios sobre el segundo avance

1. **Recorridos del árbol binario:**  
   Razón: Facilitan la visualización ordenada de los tiempos.

2. **Lectura y escritura de archivos:**  
   Razón: Permite cargar datos dinámicamente y guardar los resultados de manera reutilizable.

3. **Optimización del algoritmo `insertion sort`:**  
   Razón: Mejorar la eficiencia en escenarios con listas parcialmente ordenadas.

---

## Entrega final

La entrega final incluye:
- Código funcional en C++ que cumple con los requisitos del proyecto.
- Implementación completa de:
  - Lectura y escritura de archivos.
  - Cálculo de mejores sectores y vuelta rápida.
  - Ordenamiento de pilotos.
  - Gestión de tiempos en un BST con múltiples recorridos.
- Documentación detallada del código y el análisis de complejidad.

---

## Cambios sobre el tercer avance

1. **Reestructuración del código:**  
   Razón: Mejorar la legibilidad y modularidad.

2. **Corrección de errores menores:**  
   Razón: Garantizar el correcto funcionamiento del programa en todos los casos de prueba.

3. **Formato detallado de salida:**  
   Razón: Proporcionar resultados más claros y comprensibles.

---

## Instrucciones para compilar el proyecto

Ejecuta el siguiente comando en la terminal:

```bash 
g++ -std=c++11 main.cpp -o final
```

## Instrucciones para ejecutar el proyecto

Ejecuta el siguiente comando en la terminal:
```bash 
./final
```

## Descripción de las entradas del proyecto

  - Asegúrate de tener un archivo de entrada `pilotos.txt` en el mismo directorio que el ejecutable. El archivo debe tener la siguiente estructura para cada piloto:
       ```text
       Nombre Numero Sector1 Sector2 Sector3
       ```
       Ejemplo de contenido:
       ```
       Max Verstappen 1 1.23 1.24 1.25
       Sergio Perez 11 1.26 1.27 1.28
       ```
## Descripción de las salidas del proyecto
  ```text
  Pole position: Kevin_Magnussen con tiempo 2.9
  Mejor Sector 1: Kevin_Magnussen con tiempo 1
  Mejor Sector 2: Kevin_Magnussen con tiempo 0.9
  Mejor Sector 3: Kevin_Magnussen con tiempo 1
  Recorridos del BST:
2.9 3.66 3.69 3.72 3.72 3.72 3.72 3.72 3.75 3.75 3.75 3.75 3.78 3.78 3.78 3.81 3.81 3.81 3.81 3.81
2.9 3.66 3.69 3.72 3.72 3.72 3.72 3.72 3.75 3.75 3.75 3.75 3.78 3.78 3.78 3.81 3.81 3.81 3.81 3.81
3.81 3.81 3.81 3.81 3.81 3.78 3.78 3.78 3.75 3.75 3.75 3.75 3.72 3.72 3.72 3.72 3.72 3.69 3.66 2.9
2.9 3.66 3.69 3.72 3.72 3.72 3.72 3.72 3.75 3.75 3.75 3.75 3.78 3.78 3.78 3.81 3.81 3.81 3.81 3.81

Informaci├│n de cada piloto:
Posici├│n: 1, Piloto: Kevin_Magnussen, Tiempo Total: 2.9
Posici├│n: 2, Piloto: Lewis_Hamilton, Tiempo Total: 3.66
Posici├│n: 3, Piloto: Charles_Leclerc, Tiempo Total: 3.69        
Posici├│n: 4, Piloto: Max_Verstappen, Tiempo Total: 3.72
Posici├│n: 5, Piloto: Fernando_Alonso, Tiempo Total: 3.72        
Posici├│n: 6, Piloto: Lando_Norris, Tiempo Total: 3.72
Posici├│n: 7, Piloto: Valtteri_Bottas, Tiempo Total: 3.72        
Posici├│n: 8, Piloto: Alex_Albon, Tiempo Total: 3.72
Posici├│n: 9, Piloto: Pierre_Gasly, Tiempo Total: 3.75
Posici├│n: 10, Piloto: Nico_Hulkenberg, Tiempo Total: 3.75       
Posici├│n: 11, Piloto: George_Russell, Tiempo Total: 3.75        
Posici├│n: 12, Piloto: Daniel_Ricciardo, Tiempo Total: 3.75      
Posici├│n: 13, Piloto: Carlos_Sainz, Tiempo Total: 3.78
Posici├│n: 14, Piloto: Esteban_Ocon, Tiempo Total: 3.78
Posici├│n: 15, Piloto: Yuki_Tsunoda, Tiempo Total: 3.78
Posici├│n: 16, Piloto: Guanyu_Zhou, Tiempo Total: 3.81
Posici├│n: 17, Piloto: Lance_Stroll, Tiempo Total: 3.81
Posici├│n: 18, Piloto: Sergio_P├®rez, Tiempo Total: 3.81
Posici├│n: 19, Piloto: Logan_Sargeant, Tiempo Total: 3.81        
Posici├│n: 20, Piloto: Oscar_Piastri, Tiempo Total: 3.81
   ```


## Competencias 

## SICT0301: Evalúa los componentes

- Se ha realizado un análisis de complejidad para cada componente del programa, incluido el `vector`, el árbol binario de búsqueda (`BST`), y el algoritmo de ordenamiento (`insertion sort`), detallando el mejor, peor, y caso promedio. La complejidad final del programa queda determinada por el tiempo de ejecución del algoritmo de ordenamiento en \(O(n^2)\) en el peor y caso promedio, que domina el tiempo de búsqueda en el BST y el acceso a los elementos en el `vector`.

### Hace un análisis de complejidad correcto y completo para los algoritmos de ordenamiento usados en el programa.
#### **Algoritmo de Ordenamiento** (`insertion sort`)
  - Se escogió este algoritmo debido a que en la F1 cada vez que se registra una nueva vuelta, esta se ordena con los mejores resultados del resto de pilotos
    - **Mejor caso**: \( O(n) \), ya que si la lista ya está ordenada, solo se realiza una pasada sin movimientos.
    - **Peor caso**: \( O(n^2) \), cuando la lista está en orden inverso y cada elemento debe moverse a la primera posición.
    - **Caso promedio**: \( O(n^2) \), debido a que en promedio, cada elemento debe moverse la mitad de la lista.
   
### Hace un análisis de complejidad correcto y completo de todas las estructuras de datos y cada uno de sus usos en el programa.
#### **Estructuras de Datos** (`vector`, `BST`)
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
       
### Hace un análisis de complejidad correcto y completo para todos los demás componentes del programa y determina la complejidad final del programa.
El `main` combina todas las operaciones que afectan la complejidad del programa. A continuación se desglosan:
  
  #### 1. Lectura del archivo
  - Complejidad: \( O(n) \), donde \( n \) es el número de pilotos.
  
  #### 2. Determinación de posiciones (`insertion sort`)
  - Complejidad:
    - **Mejor caso**: \( O(n) \), si los tiempos ya están ordenados.
    - **Peor caso**: \( O(n^2) \), si los tiempos están en orden inverso.
    - **Caso promedio**: \( O(n^2) \).
  
  #### 3. Cálculos individuales (`vuelta rápida`, `mejorSector1`, etc.)
  - Complejidad: \( O(n) \) por cada cálculo. En total: \( O(n) \).
  
  #### 4. Construcción del BST
  - Complejidad promedio: \( O(n \log n) \).
  - Complejidad en el peor caso: \( O(n^2) \), si el árbol está desbalanceado.
  
  #### 5. Escritura de resultados
  - Complejidad: \( O(n) \).
  
  #### Complejidad total
  - Mejor caso: \( O(n^2) \), dominado por el ordenamiento.
  - Peor caso: \( O(n^2 + n^2) = O(n^2) \).
---


## SICT0302: Toma decisiones
  
### Selecciona un algoritmo de ordenamiento adecuado al problema
- **Algoritmo de Ordenamiento**: Se implementó el algoritmo de **insertion sort** en la función `determinarPosiciones`. Este algoritmo tiene una complejidad de \( 𝑂(𝑛2) \), lo que lo hace eficiente para ordenar grandes conjuntos de datos como los tiempos de vuelta de los pilotos.
- Se escogió este algoritmo debido a que en la F1 cada vez que se registra una nueva vuelta, esta se ordena con los mejores resultados del resto de pilotos

### Selecciona una estructura de datos adecuada al problema y la usa correctamente.
- **Estructura de Datos Utilizada**: Se utilizó un `vector` para almacenar los objetos `Piloto`. Esta estructura es adecuada para manejar una lista de elementos que se pueden acceder y modificar mediante índices, lo cual es necesario para ordenar y evaluar los tiempos de los pilotos.
- **Árbol Utilizado**: Se utilizó un **árbol binario de búsqueda** (`BST`) para almacenar y organizar los tiempos de vuelta de los pilotos.
- **Justificación**: Se escogió esta estructura de datos debido a que tiene una complejidad muy sencilla, y que al hacer un recorrido inorder o preorder da los tiempos en orden de menor a mayor, pero en este caso si 2 o mas pilotos hicieron el mismo tiempo tendremos primero el que hizo el tiempo primero



## SICT0303: Implementa acciones científicas

### Implementa mecanismos para consultar información de las estructuras correctos y útiles dentro de un programa.
- **Consulta de Sectores y Vuelta Rápida**: Las funciones para determinar los mejores tiempos por sector y el piloto con la vuelta rápida se implementaron utilizando el algoritmo `min_element`, asegurando una consulta eficiente y sencilla por la biblioteca algorithm en \( O(n) \).
- **Recorridos del BST**: Se implementaron recorridos útiles (preorden, inorden, postorden y por niveles) para extraer información de forma organizada y significativa. Se escogió esta estructura de datos debido a que tiene una complejidad muy sencilla, y que al hacer un recorrido inorder o preorder da los tiempos en orden de menor a mayor, pero en este caso si 2 o mas pilotos hicieron el mismo tiempo tendremos primero el que hizo el tiempo primero

### Implementa mecanismos de lectura de archivos correctos y útiles dentro de un programa.
- **Lectura de Archivos**: Se implementó la lectura de archivos de texto para cargar la información de los pilotos, lo que permite una fácil actualización y modificación de los datos sin cambiar el código. Esto asegura la flexibilidad y reutilización del programa.

### Implementa mecanismos de escritura de archivos correctos y útiles dentro de un programa.
- **El programa implementa mecanismos para escribir los datos procesados en un archivo de salida `resultados.txt`, donde se guarda la información de los mejores tiempos por sector y el listado completo de los pilotos, sus tiempos y posiciones. Este mecanismo permite el almacenamiento de resultados de manera organizada y reutilizable, facilitando su uso posterior para el análisis o para compartir los resultados.

--- 

