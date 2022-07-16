// =================================== Importación de bibliotecas ===================================

#include <stdio.h> // Librería que permite utilizar funciones que estén declaradas dentro del código. 
#include <string.h> // Librería que permite hacer manejo de las cadenas de caracteres.
#include <stdlib.h> // Librería que contiene los prototipos de funciones de C para gestión de memoria dinámica, control de procesos y otras.


// ==================================== Importación de archivos =====================================

#include "reconocer.h" // Archivo que contiene la función "reconocer_laberinto".
#include "puerta.h" // Archivo que contiene la función "entrada".


// =============================== Declaración de la función lectura ================================

void lectura(FILE *archivo)
{
    int laberinto[100][100]; 

    // Se llama a la función "reconocer_laberinto", la cuál reconoce y guarda el laberinto en un 
    // arreglo de dos dimensiones llamado "laberinto[][]".
    int salidas_rl[2];
    reconocer_laberinto(laberinto, salidas_rl, archivo);
    int filas_main = salidas_rl[0];
    int columnas_main = salidas_rl[1];



    // Se llama a la función "entrada", la cual registra la entrada.
    int salidas[2];
    entrada(laberinto, salidas, filas_main, columnas_main);



    // Algoritmo que encuentra la salida del laberinto por medio de un camino que inicialmente viene 
    // de una entrada encontrada.
    int i, j;
    i = salidas[0];
    j = salidas[1];

    while (1)
    {   
        //===== Condicionantes cuando el algoritmo encuentra un 2 =====//
        // Conjunto de "if" que escanea lo que se encuantra alrededor de la coordenada.

        if (laberinto[i-1][j] == 2)
        { 
            laberinto[i][j] = 9; 
            i = i -= 1;
            break;
        }

        if (laberinto[i][j+1] == 2)
        {
            laberinto[i][j] = 9; 
            j = j += 1;
            break;
        }

        if (laberinto[i+1][j] == 2)
        {
            laberinto[i][j] = 9; 
            i = i += 1;
            break;
        }

        if (laberinto[i][j-1] == 2)
        {
            laberinto[i][j] = 9; 
            j = j -= 1;
            break;
        }


        //===== Condicionantes cuando el algoritmo encuentra un 1 =====//
        // Escaneo.

        if (laberinto[i-1][j] == 1) 
        {
            laberinto[i][j] = 9;   
            i = i -= 1;
            continue;
        }

        if (laberinto[i][j+1] == 1)
        {
            laberinto[i][j] = 9;
            j = j += 1;
            continue;
        }

        if (laberinto[i+1][j] == 1) 
        {
            laberinto[i][j] = 9;
            i = i += 1;
            continue;
        }

        if (laberinto[i][j-1] == 1)
        {
            laberinto[i][j] = 9;
            j = j -= 1;
            continue;
        }

        else
        {
            entrada(laberinto, salidas, filas_main, columnas_main);
            i = salidas[0];
            j = salidas[1];
            continue;
        }
        

    }

    // Se imprime el laberinto final, el cual marca el recorrido trazado. 
    printf("\n");
    printf("El recorrido del laberinto es:\n");
    printf("\n");

    for (int i = 0; i < filas_main; i++)
    {
        for (int j = 0; j < columnas_main; j++)
        {
            printf("%d ", laberinto[i][j]);
        }
        printf("\n");
    } 


    // Se imprime la coordenada de salida.
    printf("\n");
    printf("La coordenada encontrada como salida es: (%d,%d)\n", i, j);
    printf("\n");
}