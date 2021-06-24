#include <stdio.h>

int N; //Number of the right ->
int A;//Number of squares below 


char on[1000];

int main(void) {
  //Ask about the square on the rigth ->
  printf("How many squares you want to see on your right\n");
  fgets(on, sizeof(on), stdin);
  sscanf(on, "%d", &N);
  //Ask about the square below
  printf("And how many squares you want to see below?\n");
  fgets(on,sizeof(on),stdin);
  sscanf(on,"%d",&A);


  for(int e=0; e<A;e++) {
    for (int i=0; i<N; i++){
      printf("+-----");
      
    }
    //This create each raws of the table with the function for, its depend of the number ingresed in N 
    printf("+");
  printf("\n");
  printf("|");
  for (int i=0 ; i <N;i++){
  printf("    |");
  }
  printf("\n");
  printf("|");
  for (int i=0 ; i <N;i++){
  printf("    |");
  }
  printf("\n");
  printf("|");
  for (int i=0 ; i <N;i++){
  printf("    |");
  }
 printf("\n");

  }
  for (int i=0; i <N; i++)
  printf("+-----");
return 0;
}

  
