// Tutoriel base en Langage C <Coding seule/>

#include <stdio.h>

int main(){
	int x; 
	int y;
	int resultat;

	printf("Donnez le premier nombre entier : ");
	scanf("%d", &x);
	printf("Donnez le deuxieme nombre entier : ");
	scanf("%d", &y);
	resultat = x + y;
	printf("%d + %d = %d\n", x, y, resultat);
	printf("l'addition de %d et %d est %d\n", x, y, resultat);
}