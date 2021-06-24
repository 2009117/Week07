#include <stdio.h>

char Nu[1000];
int NN; //The numbers of numbers that is gonna check 
int N; //The variable that can be 0<N or 0>0
int A=0; //This is the warehouse of negative numbers
int a=0; //This is the warehouse of positive numbers
int Z=0; //This is the warehouse of zeros

int main(void) {
  printf("Insert the amount of number that your want to check\n");
  fgets(Nu, sizeof(Nu),stdin);
  sscanf(Nu, "%d",&NN);

  for (int i=1; i<=NN ;i++) 
  {

    printf("Insert numbers:\n");
    fgets(Nu, sizeof(Nu), stdin);
    sscanf(Nu, "%d", &N);

      if (N>0) { //The condition to know if are a negative number
      A=A+1;
  }
  
      else if (N<0) { //The condtion to know if are a positive number
      a=a+1;
      }
  
      else if (N==0){ //The condition to identify if there are a zero
      Z=Z+1;
      }

  }

      printf("There are %d positive numbers, %d negative numbers and %d zeros\n",A ,a, Z);

 
  return 0;
}
