#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "biblioteca.h"

int mostrar1(){//apresenta as cartas do jogador 1
	for(i=0; i<10; i++){
		if(mao1[i]>0){
			if(mao1[i]>10){
				switch(mao1[i]){
					case 11:
						printf("Valete de ");
					break;
					case 12:
						printf("Dama de ");
					break;
					case 13:
						printf("Rei de ");
					break;
				}
			}else{
				printf("%i de ", mao1[i]);
			}
			switch(naipe1[i]){
				case 1:
					printf("Paus\n");
				break;
				case 2:
					printf("Copas\n");
				break;
				case 3:
					printf("Espadas\n");
				break;
				case 4:
					printf("Ouros\n");
				break;
			}
		}
	}
	if(soma>21){
		printf("\nLimite estourado!\n");
	}
	printf("Soma: %i\n\n", soma);
}

int mostrar2(){//apresenta as cartas do jogador 2
	for(i=0; i<10; i++){
		if(mao2[i]>0){
			if(mao2[i]>10){
				switch(mao2[i]){
					case 11:
						printf("Valete de ");
					break;
					case 12:
						printf("Dama de ");
					break;
					case 13:
						printf("Rei de ");
					break;
				}
			}else{
				printf("%i de ", mao2[i]);
			}
			switch(naipe2[i]){
				case 1:
					printf("Paus\n");
				break;
				case 2:
					printf("Copas\n");
				break;
				case 3:
					printf("Espadas\n");
				break;
				case 4:
					printf("Ouros\n");
				break;
			}
		}
	}
	if(soma2>21){
		printf("\nLimite estourado!\n");
	}
	printf("Soma: %i\n\n", soma2);
}

int mostrar3(){//apresenta as cartas do jogador 3
	for(i=0; i<10; i++){
		if(mao3[i]>0){
			if(mao3[i]>10){
				switch(mao3[i]){
					case 11:
						printf("Valete de ");
					break;
					case 12:
						printf("Dama de ");
					break;
					case 13:
						printf("Rei de ");
					break;
				}
			}else{
				printf("%i de ", mao3[i]);
			}
			switch(naipe3[i]){
				case 1:
					printf("Paus\n");
				break;
				case 2:
					printf("Copas\n");
				break;
				case 3:
					printf("Espadas\n");
				break;
				case 4:
					printf("Ouros\n");
				break;
			}
		}
	}
	if(soma3>21){
		printf("\nLimite estourado!\n");
	}
	printf("Soma: %i\n\n", soma3);
}

int mostrar4(){//apresenta as cartas do jogador 4
	for(i=0; i<10; i++){
		if(mao4[i]>0){
			if(mao4[i]>10){
				switch(mao4[i]){
					case 11:
						printf("Valete de ");
					break;
					case 12:
						printf("Dama de ");
					break;
					case 13:
						printf("Rei de ");
					break;
				}
			}else{
				printf("%i de ", mao4[i]);
			}
			switch(naipe4[i]){
				case 1:
					printf("Paus\n");
				break;
				case 2:
					printf("Copas\n");
				break;
				case 3:
					printf("Espadas\n");
				break;
				case 4:
					printf("Ouros\n");
				break;
			}
		}
	}
	if(soma4>21){
		printf("\nLimite estourado!\n");
	}
	printf("Soma: %i\n\n", soma4);
}
