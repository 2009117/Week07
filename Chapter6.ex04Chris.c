#include <stdio.h>
#include <math.h>

/* 
quarters => X/.25
dimes => X/.10
nickles => X/.5
pennys => X/.01


*/
char at[100];

int main(void) {
  float X;
  printf("Insert the amount of money (It cannnot be more than 1\n");
  scanf("%f", &X);
  
      if (X>1) // This it helps such a filter to the nubers that one 
    printf("Invalid number");


    else {
    printf ("Your need %f quarters\n", X/0.25);
    printf ("You need %f dimes\n",X/.10);
    printf ("Your need %f nickles\n",X/.05);
    printf ("You need %f pennys\n", X/.01);
    
    

    }
 return 0;
  }

