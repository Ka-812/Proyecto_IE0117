// =================================== Importación de bibliotecas ===================================

#include <stdio.h> // Librería que permite utilizar funciones que estén declaradas dentro del código. 
#include <string.h> // Librería que permite hacer manejo de las cadenas de caracteres.
#include <stdlib.h> // Librería que contiene los prototipos de funciones de C para gestión de memoria dinámica, control de procesos y otras.


// ========================== Declaración de la función reconocer_laberinto =========================


// Función que importa el contenido del .txt, guarda el contenido en un arreglo de dos dimensiones 
// de tipo "char" y convierte el arreglo de tipo "char" en uno de tipo "int". 
void reconocer_laberinto(int laberinto[100][100], int salidas_rl[], FILE *archivo)
{
    int c;
    int i = 0;
    int j = 0;
    int cantidad_elementos = 1;
    int filas = 1;
    int columnas;

    // Bucle que guarda el contenido del .txt en un arreglo de dos dimensiones 
    // de tipo "char" y convierte el arreglo de tipo "char" en uno de tipo "int".
    // De igual manera cuenta las filas y el total de elementos que contiene la matriz insertada.
    do
    {
        c = fgetc(archivo);
        if(c == '0' || c == '1' || c == '2')
        {
            laberinto[i][j] = c - '0';
            j = j += 1;
            cantidad_elementos = cantidad_elementos += 1;
        }
        if (c == '\n')
        {
            i = i += 1;
            j = 0;
            filas = filas += 1;
        }
    } while (c != EOF);

    fclose(archivo);
    columnas = cantidad_elementos/filas;

    salidas_rl[0] = filas;
    salidas_rl[1] = columnas;
}