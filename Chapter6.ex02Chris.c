  #include <stdio.h>
float X;
/* Condiciones 
F= 0-60
D=61-70
C=71-80
B=81-90
A=91-100
*/
char on[1000]; 

int main(void) {
  
  printf("Insert your grade\n");
  fgets(on,sizeof(on),stdin);
  sscanf(on,"%f", &X);
 
 
  if (X>=90)
    printf("Grade: A\n");

    else if (X>=80)
      printf("Grade: B\n");

    else if (X>=70)
    printf("Grade: C\n");

    else if (X>=60)
    printf("Grande: D");

    else if (X<=59)
    printf("Grade: F");


  return 0;
}
