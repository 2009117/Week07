#include <stdio.h>
#include <math.h> //<- para poder hacer la operaciones matematicas
/****************************
¿En cuanto tiempo llegaremos a nuestro destino? 

Usaré la formula del movimiento rectilineo uniforme

V=d/t

Programa personal del CAPITULO 6 del libro

*******************************/
//Primero establecemos las variables 

float V;
float Ts;//Tiempo en segundos
float Tm; //Tiempo en minutos 
float Th; //Tiempo en Horas
float D; //Distancia en Kilometros
float Dm; //Distancia en Metros

char on[1000];


int main(void) {
 
//Primero vamos a pregunta sobre los datos 

printf("Ingrese la velocidad (m/s) con la que va manejar: \n");
fgets(on,sizeof(on),stdin);
sscanf(on,"%f",&V);

printf("Ingrese la distancia (Kilometros) aproximada:\n");
fgets(on,sizeof(on),stdin);
sscanf(on,"%f",&D);
  //Pasar los km a metros
  Dm=D*1000;

  //Calcular el tiempo en segundos

  Ts=(Dm)/V;

  //Calcular el tiempo en Minutos 
  Tm=Ts/60;

  //Calcular el tiempo en Horas

  Th=Tm/60;

  printf("Usted llegara en un tiempo aproximado de: %.2f SEGUNDOS, %.4f MINUTOS, %f HORAS\n",Ts,Tm,Th);


 
 return 0;
}
