#include <stdio.h>
#include <math.h>

float X; //Varibale to insert the weight of the file
float H; //Hours
float D; //Days

char on[1000];

int main(void) {
  printf("Introduce the weight of your file\n ");
  fgets(on, sizeof(on),stdin);
  sscanf(on,"%f",&X);
    //To know the hours
    H=(1*X)/(34560000);
    printf("The time that your file is gonna send is: %f\n",H);
    //To know the days
    D=((H)/(24));  
    printf("The days that it will take to send your file is %f\n", D);

  return 0;
}
