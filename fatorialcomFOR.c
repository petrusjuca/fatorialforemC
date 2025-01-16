#include <stdio.h>
#include <math.h>
#include <locale.h>

int main ()
{setlocale (LC_ALL, "Portuguese");
 int fat, n;
 printf("Qual número você deseja extrair o fatorial? \n");
 scanf("%d", &n);
 
 for (fat = 1; n>1; n = n-1)
 {    fat = fat*n;
 }
  printf("\n%d", fat);
}
