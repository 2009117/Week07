#include <stdio.h>

int Y; //This is the variable to calculate if is a leap year

int main(void) {
printf("Check if the year is a leap year\n") ;
printf("Insert a year\n");
scanf("%d", &Y);

//Check if the year is divisible by 400
if (Y/400 ==0) {
  printf("%d Is not a leap year", Y);
}
//Check if the year is divisible by 100
else if(Y/100 ==0) {
   printf("%d Is not a leap year", Y);
}
//Check if the year is divisible by 100
else if(Y/4==0) {
  printf("%d Is a leap year", Y);
}
//If the year doesn't compiles the previus conditions
  else {
 printf("%d is not a leap year", Y);  
  } 


  return 0;
}
