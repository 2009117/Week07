#include <stdio.h>
#include <math.h>

float X1, X2;//These are the variables for the first point
float Y1, Y2;//These are the variables for the 2do point
float D; //This is the variable for the distance beetwen 2 points.

int main(void) {

printf("Insertar X1\n");
scanf("%f", &X1);


printf("Insertar X2\n");
scanf("%f", &X2);


printf("Insertar Y1\n");
scanf("%f", &Y1);


printf("Insertar Y2\n");
scanf("%f", &Y2);

D=sqrt((X2-X1)*(X2-X1)+(Y2-Y1)*(Y2-Y1));

printf("The distance between the 2 point is %.4f", D);

return 0;
}
