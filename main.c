#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
#include <ctype.h>
int main()  {

  char string[100],dump[100],calc;
  int x=0,y=0,i=0,ii=0;
  printf("Skriv in vad du vill r\x84kna ut. T.ex. 2+2 eller 3*4\n");
  // Läser in till char string
  fgets(string, 100, stdin);
// Kör denna for sats tills den inte längre hittar en siffra
  for (;string[i] >='0' && string[i] <= '9';i++) {
    dump[i]=string[i];
  }
  dump[i]='\0';

// Gör om char till int för att sedan smidigare kunna räkna
  x=atoi(dump);
  // Läser in vilket räknesett som skall användas till en char tillsvidare
  calc=string[i];
  i++;
  for (;string[i] >='0' && string[i] <= '9';i++,ii++) {
    dump[ii]=string[i];
  }
  dump[ii]='\0';
  y=atoi(dump);
  // Kontrollerar vilket räknesätt som skall användas.
  switch(calc)  {
    case '+':
    printf("%d",cAdd(x,y));
    break;

    case '-':
    printf("%d",cSub(x,y));
    break;

    case '*':
    printf("%d",cMul(x,y));
    break;

    case '/':
    printf("%d",cDiv(x,y));
    break;
    default:
    printf("!! Error !!");
  }


  return 0;
}
