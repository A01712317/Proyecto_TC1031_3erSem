# Programa de Clasificación de Fórmula 1

## Introducción

En la Fórmula 1, la clasificación es un proceso crucial que determina el orden de salida de los pilotos en la carrera. Durante la clasificación, los pilotos intentan registrar la vuelta más rápida posible. La posición de salida, conocida como "pole position", es otorgada al piloto con el tiempo más rápido. Además, se registran los mejores tiempos en cada uno de los tres sectores del circuito.

## Descripción del Proyecto

Este programa en C++ lee un archivo de texto que contiene los detalles de varios pilotos de Fórmula 1, incluyendo su nombre, número, posición y los tiempos en que recorren los sectores 1, 2 y 3 del circuito. A partir de estos datos, el programa determina:
- El piloto con el mejor tiempo en cada sector.
- La vuelta más rápida.
- Las posiciones finales de los pilotos.

## Requisitos

- Compilador de C++ compatible con C++11 o superior.
- Archivo de texto con los detalles de los pilotos.

## Instalación

1. Clona este repositorio en tu máquina local.
2. Asegúrate de tener un compilador de C++ instalado.
3. Compila el programa utilizando el siguiente comando:
   ```sh
   g++ -o clasificacion_f1 main.cpp
