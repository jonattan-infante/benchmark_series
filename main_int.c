/*******************
* Fecha: 9 de Agosto 2022
* Autor: Jonattan Infante
* Topic: Construccion Bencharmark Multiplicacion de matrices
***********/

#define RESERVA_MEMOIA (1024*1024*64*3)
static int MEN_CHUNK[RESERVA_MEMOIA];

#include "lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <sys/time.h>
#include <time.h>

int main(int argc, char *argv[]){
	//se pide la dimension de la matriz
	
	int N, SIZE, *matrizA, *matrizB, *matrizC;

	N = (int)atoi(argv[1]);
	
	// se decalra las matrices
		
	SIZE= N*N;
	matrizA = MEN_CHUNK;
	matrizB = matrizA + SIZE;
	matrizC = matrizB + SIZE;
	
	//int matrizA[SIZE], matrizB[SIZE], matrizC[SIZE];
	
	inicializar_matrices_int(N, matrizA, matrizB, matrizC);
	//imprimir_matriz_int(N, matrizA);
	//imprimir_matriz_int(N, matrizB);
	
	//se imprimen las matrices


	//Se multiplican las matrices: Algoritmo clasico ( filas  x Columnas)
	
    tiempo_inicial();
    multiplicasion_matrices_int(N, matrizA, matrizB, matrizC);
	tiempo_final();

	//imprimir_matriz_int(N, matrizC);

	// se imprime la matiz

	return 0;
}
