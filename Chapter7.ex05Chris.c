#include <stdio.h>
/**********************************
To know if the numer is prime
we are going to divide by:

2, 3, 4 ,5, 6, 7 , 8, 9

If the number it can't be divide
by each numeber is prime


***********************************/


float X; //Is the variable to change

int main(void) {
  printf("Introduce a Number\n"),
  scanf("%f",&X);
  //Divided by 2
  if (X/2 ==0)
  printf("Is not prime\n");
    //Divided by 3
    else if (X/3 ==0)
    printf("Is not prime\n");
    //Divided by 4
    else if (X/4 ==0)
    printf("Is not prime\n");
    //Divided by 5
    else if (X/5 ==0)
    printf("Is not prime");
    //Divided by 6
    else if (X/6 ==0)
    printf("Is not prime\n");
    //Divided by 7
    else if (X/7 ==0)
    printf("Is not prime\n");
    //Divided by 8
    else if (X/8 ==0)
    printf("Is not prime'n");
    //Divided by 9
    else if (X/9 ==0)
    printf("Is not prime");
    // if is not divided by anyone
    else 
    printf("Is prime");

  return 0;
}
