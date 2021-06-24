#include <stdio.h>
#include <math.h> //<- para poder hacer la operaciones matematicas
/****************************
El programa es una mejora al anterior en el cual solo calculabamos el tiempo. 
En el siguiente programa se podra calculcar cualquiera de los datos



Usaré la formula del movimiento rectilineo uniforme
V=d/t
Programa personal del CAPITULO 7 del libro
*******************************/
//Primero establecemos las variables 

float D; 
char Ve=0; 
float V;
char Ti=1;
float T;
char Di=2;
float D;
char on[1000];


int main(void) {
 
//Primero vamos a pregunta sobre los datos 

printf("Ingrese el dato que quiere calcular:\n(Velocidad=0, Tiempo=1, Distancia=2)\n");
fgets(on,sizeof(on),stdin);
sscanf(on,"%f",&D);


if (D == 0){
  
    printf("Insertar la distancia en Metros (solo los numeros)\n");
    fgets(on, sizeof(on),stdin);
    sscanf(on,"%f", &D);
      printf("Insertar el tiempo segundos (solo los numeros)\n");
    fgets (on,sizeof(on),stdin);
    sscanf(on, "%f" ,&T);

    //La operacion para la distancia
    V=D/T;

    printf("La velocidad es: \n %.2f m/s\n",V);
    


}
  else if (D == 1){
     printf("Insertar la distancia en Metros (solo los numeros)\n");
    fgets(on, sizeof(on),stdin);
    sscanf(on,"%f", &D);

    printf("Insertar la Velocidad en M/s (solo el numero)\n");
    fgets (on,sizeof(on),stdin);
    sscanf(on, "%f" ,&V);

    //La operacion para la distancia
    T=D/T;

    printf("El tiempo es de:\n %.2f segundos \n",V);

  }

   else if (D == 2)
     printf("Insertar la Tiempo en segundos (solo los numeros)\n");
    fgets(on, sizeof(on),stdin);
    sscanf(on,"%f", &T);

    printf("Insertar la Velocidad en M/s (solo el numero) \n");
    fgets (on,sizeof(on),stdin);
    sscanf(on, "%f" ,&V);

    //La operacion para la distancia
    D=V*T;

    printf("La distancia es de:\n %.2f Metros\n",D);

   



 return 0;
