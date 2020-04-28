// Tutoriel base en Langage C <Coding seule/> 

#include <stdio.h>

int main(){
	int nbre;
	while(nbre <= 5){
		printf("Donnez un nombre entier superieur a 5 : ");
		scanf("%d", &nbre);
		printf("Vous avez saisi %d\n", nbre);
	}
	printf("Votre reponse est correct !!!\n\n");
}


