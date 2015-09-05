/*
 Nombre del discente
 */
char *DIA[]={
     "Lunes", "Martes", "Miercoles", "Jueves", 
     "Viernes", "Sabado", "Domingo"
};
char *DIAM[]={ /* arreglo DIA Modificado */
  "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo", "Lunes",  
  "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo", "Lunes",  
  "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo", "Lunes",  
  "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo", "Lunes",  
  "Martes", "Miercoles"
};
/*
Aqui voy a poner una posible respuesta del discente.
*/
/*
  @pre $N\in\left\{20150901, 20150902, ..., 20150930\right\}$
 */
char *diadlasemana(int N){
  return DIAM[N-20150901];
}
