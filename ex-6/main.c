#include <stdlib.h>
#include <stdio.h>
int main()
{
	char * name;
	int age;
	printf("Bonjour, quel est votre nom ?\n");
	scanf("%s", name);
	printf("Bonjour %s, quel est votre age ?\n",name);
	scanf("%d", &age);
	int year1=2025-age;
	int year2=2025-age-1;
	printf("%s, si vous etes de la fin d'annee, votre annee de naissance est %d, sinon c'est %d\n",name,year2,year1);
	exit(0);
}

