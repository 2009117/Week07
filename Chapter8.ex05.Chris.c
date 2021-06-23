#include <stdio.h>
#include <string.h>
/**********************************
a=97  | e=101 |i=105 |o=111 |u=117|
A=65  | E=69  |I=73  |O=79  |U=85 |

***********************************/
int L; //This is the number that we gonna to traslated in ascii code 

char Letter[1000];

int main(){

printf("Insert a number to know if is a Vowel or a Consonant\n""(The system use a ascii code to traslated) \n");

  fgets(Letter,sizeof(Letter),stdin);
    sscanf(Letter, "%d",&L); //In this section its already define the variable. 

while ((L>=65 && L <=90)||(L >=95 && L<=122))
    //In this section there there are the conditions to know if is a vowel. 
  if (
    L == 97|| L==65 || // For A/a
    L == 101 || L== 69 || //For E/e
    L == 105 || L ==73 || //For I/i
    L == 111 || L == 79 || //For O/o
    L == 117 || L == 85 //For U/u
   ) {
    printf("Is vowel\n");

  printf("Insert another number\n");
      fgets(Letter,sizeof(Letter), stdin);
    sscanf(Letter, "%d",&L);
}

    else {
      printf ("Is consonant\n");
      printf ("Give another number\n");
        fgets(Letter, sizeof(Letter),stdin);
        sscanf(Letter, "%d", &L);

    }

    printf("Isn't a valid value\t");


    return 0;
}
