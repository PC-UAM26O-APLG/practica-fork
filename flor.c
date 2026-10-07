#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

#define TALLO 5
#define PETALOS 4
#define FLOR 3

/*
Entrada: ninguna (usa las constantes de arriba)
Salida: el numero total de procesos del arbol
Descripcion: arbol de procesos en forma de flor
*/

int main(){
	pid_t pid_raiz = getpid();
	int i=0, j=0, k=0;
	/*
		Creacion de TALLO
	*/
	for(i=0;i<(TALLO-1);i++){
		if(fork())
		break;
	}
	/*
		Creacion de flores
	*/
	if(i==(TALLO-1)){
		for(j=0;j<FLOR;j++){
			if(fork()){
				break;
			}
		}
	}
	/*
		Creacion de petalos
	*/

	if(j>0){
		if(!fork()){
			for(k=0;k<PETALOS;k++){
				if(!fork()){
					break;
				}

			}
		}
	}
	sleep(500);
}
