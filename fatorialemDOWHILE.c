#include <stdio.h>
#include <math.h>
#include <locale.h>

int main ()
{setlocale (LC_ALL, "Portuguese");
 int fat, n;
 printf("Qual número você deseja extrair o fatorial? \n");
 scanf("%d", &n);
 
fat = 1;
if (n>1)
do 
{
	fat = fat * n;
	n = n -1;
	
}while (n>1);
  printf("\n%d", fat);
}
