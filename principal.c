// Autora: @Katherine Chavarría Nájera / B41841.
// El presente código implementa un resolvedor de laberintos y da solución al proyecto del curso IE0117. 


// =================================== Importación de bibliotecas ===================================

#include <stdio.h> // Librería que permite utilizar funciones que estén declaradas dentro del código. 
#include <string.h> // Librería que permite hacer manejo de las cadenas de caracteres.
#include <stdlib.h> // Librería que contiene los prototipos de funciones de C para gestión de memoria dinámica, control de procesos y otras.


// ==================================== Importación de archivos =====================================

#include "reconocer.h" // Archivo que contiene la función "reconocer_laberinto".
#include "puerta.h" // Archivo que contiene la función "entrada".
#include "lectura.h" // Archivo que contene la función "lectura".

// ================================= Declaración de la función main ==================================

int main()
{    
    FILE *archivo;
    archivo = fopen("./laberinto.txt", "r");
    printf("\n");
    printf("Estudiante: Katherine Chavarría Nájera.\n");
    printf("Carné: B41841.\n");
    printf("Proyecto: Resolvedor de laberintos.\n");
    printf("Curso: IE0117.\n");
    printf("\n");
    printf("Solución:\n");
    lectura(archivo);

    return 0;
}