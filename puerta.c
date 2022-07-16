// =================================== Importación de bibliotecas ===================================

#include <stdio.h> // Librería que permite utilizar funciones que estén declaradas dentro del código. 
#include <string.h> // Librería que permite hacer manejo de las cadenas de caracteres.
#include <stdlib.h> // Librería que contiene los prototipos de funciones de C para gestión de memoria dinámica, control de procesos y otras.

// ==================================== Importación de archivos =====================================

#include "puerta.h" // Archivo que contiene la función "entrada".

// =============================== Declaración de la función entrada ================================


// Función que registra los bordes del laberinto y busca una entrada. 
void entrada(int laberinto[100][100], int salidas[], int filas, int columnas)
{
    int cant_unos = 0;
    int cant_dos = 0;
    int cant_ceros = 0;
    int j,i;


    // Bucle que registra la primer fila de la matriz, buscado una entrada. 
    for (j = 0; j < columnas; j++)
    {
        i = 0;
        if (laberinto[i][j] == 0)
                {
                    continue;
                }
                

        if (laberinto[i][j] == 1)
                {
                 cant_unos = 0; 
                 cant_dos = 0;


                    // Conjunto de "if" que cuenta la cantidad de unos que se encuentran alrededor 
                    // de la coordenada. 

                    if (laberinto[i-1][j] == 1)
                    {
                        cant_unos = cant_unos += 1;
                    }

                    if (laberinto[i][j+1] == 1)
                    {
                        cant_unos = cant_unos += 1;
                    }

                    if (laberinto[i+1][j] == 1)
                    {
                        cant_unos = cant_unos += 1;
                    }

                    if (laberinto[i][j-1] == 1)
                    {
                        cant_unos = cant_unos += 1;
                    }
                    

                    // Conjunto de "if" que cuenta la cantidad de dos que se encuentran alrededor 
                    // de la coordenada. 

                    if (laberinto[i-1][j] == 2)
                    {
                        cant_dos = cant_dos += 1;
                    }

                    if (laberinto[i][j+1] == 2)
                    {
                        cant_dos = cant_dos += 1;
                    }

                    if (laberinto[i+1][j] == 2)
                    {
                        cant_dos = cant_dos += 1;
                    }

                    if (laberinto[i][j-1] == 2)
                    {
                        cant_dos = cant_dos += 1;
                    }

                    if (cant_unos == 1 && cant_dos == 0)
                    {
                        salidas[0] = i; 
                        salidas[1] = j;
                        break;
                    }

                }
    }

    // Bucle que registra la última columna de la matriz, buscado una entrada.
    for (i = 0; i < filas; i++)
    {
        j = columnas - 1;

        if (laberinto[i][j] == 0)
                {
                    continue;
                }
                
                // Conjunto de "if" que cuenta la cantidad de unos que se encuentran alrededor 
                // de la coordenada. 
                if (laberinto[i][j] == 1)
                {
                cant_unos = 0; 
                cant_dos = 0;

                    if (laberinto[i-1][j] == 1)
                    {
                        cant_unos = cant_unos += 1;
                    }

                    if (laberinto[i][j+1] == 1)
                    {
                        cant_unos = cant_unos += 1;
                    }

                    if (laberinto[i+1][j] == 1)
                    {
                        cant_unos = cant_unos += 1;
                    }

                    if (laberinto[i][j-1] == 1)
                    {
                        cant_unos = cant_unos += 1;
                    }

                    
                    // Conjunto de "if" que cuenta la cantidad de dos que se encuentran alrededor 
                    // de la coordenada. 

                    if (laberinto[i-1][j] == 2)
                    {
                        cant_dos = cant_dos += 1;
                    }

                    if (laberinto[i][j+1] == 2)
                    {
                        cant_dos = cant_dos += 1;
                    }

                    if (laberinto[i+1][j] == 2)
                    {
                        cant_dos = cant_dos += 1;
                    }

                    if (laberinto[i][j-1] == 2)
                    {
                        cant_dos = cant_dos += 1;
                    }

                    if (cant_unos == 1 && cant_dos==0)
                    {
                        salidas[0] = i; 
                        salidas[1] = j;
                        break;
                    }
        }
    }

    // Bucle que registra la última fila de la matriz, buscado una entrada.
    for ( j = 0; j < columnas; j++)
    {
    i=filas-1;
    if (laberinto[i][j] == 0)
            {
                continue;
            }

            // Conjunto de "if" que cuenta la cantidad de unos que se encuentran alrededor 
            // de la coordenada. 

            if (laberinto[i][j] == 1)
            {
            cant_unos = 0; 
            cant_dos = 0;

                if (laberinto[i-1][j] == 1)
                {
                    cant_unos = cant_unos += 1;
                }

                if (laberinto[i][j+1] == 1)
                {
                    cant_unos = cant_unos += 1;
                }

                if (laberinto[i+1][j] == 1)
                {
                    cant_unos = cant_unos += 1;
                }

                if (laberinto[i][j-1] == 1)
                {
                    cant_unos = cant_unos += 1;
                }
                

                // Conjunto de "if" que cuenta la cantidad de dos que se encuentran alrededor 
                // de la coordenada. 

                if (laberinto[i-1][j] == 2)
                {
                    cant_dos = cant_dos += 1;
                }

                if (laberinto[i][j+1] == 2)
                {
                    cant_dos = cant_dos += 1;
                }

                if (laberinto[i+1][j] == 2)
                {
                    cant_dos = cant_dos += 1;
                }

                if (laberinto[i][j-1] == 2)
                {
                    cant_dos = cant_dos += 1;
                }

                if (cant_unos == 1 && cant_dos==0)
                {
                    salidas[0] = i; 
                    salidas[1] = j;
                    break;
                }
    }
    }

    // Bucle que registra la primer columna de la matriz, buscado una entrada.
    for ( i = 0; i < filas; i++)
    {
    j=0;
    if (laberinto[i][j] == 0)
            {
                continue;
            }
            

            // Conjunto de "if" que cuenta la cantidad de unos que se encuentran alrededor 
            // de la coordenada. 

            if (laberinto[i][j] == 1)
            {
            cant_unos = 0; 
            cant_dos = 0;

                if (laberinto[i-1][j] == 1)
                {
                    cant_unos = cant_unos += 1;
                }

                if (laberinto[i][j+1] == 1)
                {
                    cant_unos = cant_unos += 1;
                }

                if (laberinto[i+1][j] == 1)
                {
                    cant_unos = cant_unos += 1;
                }

                if (laberinto[i][j-1] == 1)
                {
                    cant_unos = cant_unos += 1;
                }
                

                // Conjunto de "if" que cuenta la cantidad de dos que se encuentran alrededor 
                // de la coordenada. 

                if (laberinto[i-1][j] == 2)
                {
                    cant_dos = cant_dos += 1;
                }

                if (laberinto[i][j+1] == 2)
                {
                    cant_dos = cant_dos += 1;
                }

                if (laberinto[i+1][j] == 2)
                {
                    cant_dos = cant_dos += 1;
                }

                if (laberinto[i][j-1] == 2)
                {
                    cant_dos = cant_dos += 1;
                }

                if (cant_unos == 1 && cant_dos==0)
                {
                    salidas[0] = i; 
                    salidas[1] = j;
                    break;
                }
    }
    }

}