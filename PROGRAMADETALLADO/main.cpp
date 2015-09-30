#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include "tddprogdetallado.h"

int main(int argc, char** argv) {
	setlocale(LC_ALL, "es_MX.utf8");/* Intento no logrado hasta ahora 
	                                   para poder incluir acentos */
	struct prog_detallado *SOTR  = (struct prog_detallado *)
				malloc(sizeof(struct prog_detallado));
	prog_detallado(SOTR);
	return 0;
}
