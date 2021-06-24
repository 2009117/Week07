#include <stdio.h>
#include <math.h>

float G; //Ganancia
float NG; //Nueva ganancia 

char on[1000];

int main(void) {
  printf("Insert the amout of money that you won\n");
  fgets(on, sizeof(on), stdin);
  sscanf(on,"%f",&G);
  
  //This is the operation to calculate the sales tax.
    NG=G*.08;
  printf("The amout that you need to pay is $%.2f", NG);

  return 0;
}
