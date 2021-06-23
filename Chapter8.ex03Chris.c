#include <stdio.h>
char AN[100]; //Average Numbers
int N; //Number
int T; //Total 
float Nu=0; //

int main(void) {
  printf("How much numbers do you want to calculate? \n");
  fgets(AN,sizeof(AN),stdin);
  sscanf(AN, "%d",&N);

  for (int i=1; i<=N;i++) {
    printf("Insert number %d\n", i);
    fgets(AN, sizeof(AN), stdin);
    sscanf(AN, "%d", &T);
    Nu=Nu+T;
  
  }

  printf("The average is %.2f", Nu/N);
  
    return 0;
}
