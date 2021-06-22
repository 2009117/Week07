#include <stdio.h>
#include <math.h>

/**************************
Conversation table
Units:
Milles= 1.609344 Kilometers
Gallons= 4.5460 Litters
Inch= 2.54 cm

****************************/
/*
Milles to Metter = 1
Gallos to Litters= 2
Inch to centimeters =3
*/

float C; //variable to select the measure
float C2; // In this the user is gonna put the amount
float R;
float M; //Milles-Metter
float G; //Gallons-Litters
float In; //Inch-centimeters

int main(void) {
// This step is to know the conversation that the user wants
printf("Chose the conversation that you want\n");
printf("Milles to Metters = 1\n""Gallons-Litters = 2\n" "Inch to centimeters = 3\n");
scanf("%f",&C);

//Once, we have the conversation. Is going to realice each operation. 

  if (C==1)
  {
    //Milles to Metters
    printf("Insert the amount\n"); 
      scanf("%f", &C2); //
      R=C2*1.609344;
      printf("Asnwer: %f Metters",R);
  }
  //Gallons to Litters
  {
  if (C==2)
   printf("Insert the amount\n");
      scanf("%f", &C2);
      R=C2*4.5460;
     printf("Asnwer: %f Litters",R);
  }
  //Inch to centimeters
  {
  if (C==2)
   printf("Insert the amount\n");
      scanf("%f", &C2);
      R=C2*2.54;
      printf("Asnwer: %f centimeters",R);
  }

return 0;
}
