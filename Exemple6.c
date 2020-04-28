// Tutoriel base en Langage C <Coding seule/>

#include <stdio.h>

int main(){
	int x, y;
	printf("Donnez un nombre entier : ");
	scanf("%d", &x);
	printf("Donnez un autre nombre entier : ");
	scanf("%d", &y);
	if(x > y){
		printf("%d est superieur a %d\n", x, y);
	}
	else
		printf("%d est inferieur a %d\n",x, y );

}