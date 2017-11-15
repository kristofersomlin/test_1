#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
#include <ctype.h>
int main()  {
  char string[100],dump[100],dump2[100],calc;
  int x=0,y=0,i=0,ii=0;
  printf("Skriv in vad du vill räkna ut. T.ex. 2+2 eller 3*4\n");
  fgets(string, 100, stdin);

  for (;string[i] >='0' && string[i] <= '9';i++) {
    dump[i]=string[i];
  }
  dump[i]='\0';
  x=atoi(dump);
  calc=string[i];
  i++;
  for (;string[i] >='0' && string[i] <= '9';i++,ii++) {
    dump2[ii]=string[i];
  }
  dump2[ii]='\0';
  y=atoi(dump2);

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
