// Tutoriel base en Langage C <Coding seule/>

#include <stdio.h>

int main(){
	int a, b, resultat; // une autre posibilité de declaration de variable de type entier sur une seule ligne

	printf("Donnez un nombre entier : ");
	scanf("%d", &a);
	printf("Donnez un deuxieme nombre entier : ");
	scanf("%d", &b);

    resultat = a + b;
	printf("%d + %d = %d\n", a, b, resultat);
	    resultat = a - b;
	printf("%d - %d = %d\n", a, b, resultat);
	    resultat = a * b;
	printf("%d * %d = %d\n", a, b, resultat);
	    resultat = a / b;
	printf("%d / %d = %d\n", a, b, resultat);
		    resultat = a % b;
	printf("%d res %d = %d\n", a, b, resultat);

}