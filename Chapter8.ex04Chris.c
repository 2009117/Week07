#include <stdio.h>
int C; // The number of rows 
int N; //The multiplication table that we want

char Char[1000];

int main(void) {
  //First we need to ask for the number of rows
  printf("Introduce the number of rows that you want to see:\n");
  fgets(Char, sizeof(Char),stdin);
  sscanf(Char,"%d",&C);
  // Then we need to ask fot the nu,ber of multiplication table
  printf("Introduce the number of table multiplication that you want:\n");
  fgets(Char, sizeof(Char), stdin);
  sscanf(Char, "%d",&N);

  for (int i=0; i<=C; i++)
  printf("%d x %d = %d\n",N,i,N*i);

 return 0;
}
