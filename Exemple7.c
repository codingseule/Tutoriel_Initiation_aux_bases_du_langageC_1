// Tutoriel base en Langage C <Coding seule/>

#include <stdio.h>

int main(){
	int nbre;

	printf("Donnez un nombre entier : ");
	scanf("%d", &nbre);

	switch(nbre){
		case 0 : printf("Vous avez tapez ZERO\n");
				 break;
        case 1 : printf("Vous avez tapez UN\n");
        	     break;
        case 2 : printf("Vous avez tapez DEUX\n");
        		 break;
        case 3 : printf("Vous avez tapez TROIS\n");
        		 break;
        default : printf("Nombre non pris en compte veillez reessayez\n");

	}
	printf("bye !!!\n");
}