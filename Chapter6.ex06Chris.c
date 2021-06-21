#include <stdio.h>

float PS; //This is the weekly pay
float P; //Your pay
int Hs; //This is the hours maximun at a normal day to work 
int H; //This is the hours that your work
int HE; //This is the pay of extra hours
int HD; //Difference of the hours
int main(void) {
 {
   //These are the values each variable
   Hs=40; //This is the hours per day to work
   PS=4000; //This is the minimun salary
   HE=200; 
 }
  //Insert the hours of job
  printf("Insert the hours that you work \n");
  scanf("%d",&H);
  
    if (H<Hs) {
       P= H*PS;
      printf("Your salary is %.2f\n", P);
      }

      else {
      HD= (H-Hs);
       P=((HD)*(HE))+((H)*(PS));
       printf("Your salary is %.2f \n",P);
      }
    

  return 0;
}
