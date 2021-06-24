#include <stdio.h>

int Nr; //Number of resistances
int i;
float R; //Valoue of resistances
float Res=0; 
float Rt; //Total of the operation


char on[1000];

int main(void) {
  //Hoy many resisitor we are going to calculate
  printf("Insert how many resistances do you want to calculate: \n");
    fgets(on, sizeof(on), stdin);
    sscanf(on,"%d",&Nr);

   //We use the for to save the differents resisitors
  for(int i=1; i<=Nr;i++) {
    printf("Insert the value of the resistence: %d\n", i);
    fgets(on, sizeof(on), stdin);
    sscanf(on, "%f", &R);
    Res=Res+(1/R);

     if (i==Nr){ 
       break; 
    }
  
      printf("The resistence %d of this operations is %.4f ohms\n",i,R);
      }
      Rt=1/Res; //The final operation of each resistor
      

      printf("And the total resistance in paralel is %.2f ohms\n", Rt);
    




  return 0;
}
