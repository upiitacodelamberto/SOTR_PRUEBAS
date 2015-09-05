#include <stdio.h>
void prueba01();
char *diadlasemanaOK(int);

int main(){
  printf("Primero ponemos a prueba \"a mano\"la funcion diadlasemanaOK()\n");
  printf("%s\n", diadlasemanaOK(20150904));
  prueba01();
  return 0;
}

/*
Lo que se va a ocupar para esta prueba son los resultados que 
la funcion diadlasemana() debe devolver si esta correctamente 
programada. Es decir, por ejemplo para la fecha 20150907 
debera devolver "Lunes", para la fecha 20150908 debera 
devolver "Martes", etc. Eso plante el problema de comparar 
cadenas lo cual se puede hacer utilizando las funciones de 
la biblioteca estandar string.h 

Lo que hay que hacer entonces es algo como
if((strcmp(diadlasemana(N), diadlasemanaOK(N)))==0){
  count++;
}
donde $N\in\left\{20150901, 20150902, ..., 20150930\right\}$.
Si antes de la prueba la variable int count se inicializa en 
0 y si al final la variable entera count es igual a 30 
significara que los dias de la semana fueron todos devueltos 
correctamente. y la evidencia se contara como ``buena''.
Bueno, ahora hay que programarlo. Parece mas facil decirlo que 
hacerlo. Pero hay que intentarlo.
*/
#define NUMDDIASSET	30//Num De Dias de Septiembre (Septiembre tiene 30 dias)
void prueba01(){
  int count=0;    /* para un solo alumno lo que se ocupa es esta

                     variable int count local a la funcion prueba01() */
/*
Ahora defino el arreglo en donde estan los valores para los que 
se pondra a prueba la funcion diadlasemana() del discente.
 */
  int Dominio[NUMDDIASSET];
  int i, f=20150901;
  for(i=0; i<NUMDDIASSET; ++i)Dominio[i]=f+i;
/*
con esto ya tenemos el arreglo que contiene los valores para poner a prueba 
la funcion diadlasemana() del discente. Ahora contamos cuantas de las 30 
respuestas son correctas.
*/
  for(i=0; i<NUMDDIASSET; ++i){
    if((strcmp(diadlasemana(Dominio[i]), diadlasemanaOK(Dominio[i])))==0){
      count++;
    }
  }
  if(count==NUMDDIASSET){
    printf("LA FUNCION diadlasemana() DEL DISCENTE FUNCIONA BIEN \n\
PARA LOS 30 DIAS DEL MES DE SEPTIEMBRE.\n");
  }else{
    printf("LA FUNCION diadlasemana() DEL DISCENTE NO FUNCIONA BIEN \n\
PARA LOS 30 DIAS DEL MES DE SEPTIEMBRE.\n");
  }
}

char *D[]={
  "Lunes", "Martes", "Miercoles", "Jueves", 
  "Viernes", "Sabado", "Domingo"
};

char *diadlasemanaOK(int N){
  int n=7;      /* Primer lunes de Septiembre sera Lunes */
  int DiaCMes=20150900; /*Dia "Cero" del Mes*/
  int NN=N-DiaCMes;
  return D[(NN+7-n)%7];
}
