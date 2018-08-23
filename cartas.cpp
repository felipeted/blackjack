#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "biblioteca.h"

int jogador1(){
	for(i=0; i<2; i++){//distribui as cartas na mão	
		numero=(rand()%13);//seleciona um numero
		mao1[i]=numero+1;//entrega para a carta
		naipe=(rand()%4);//seleciona um naipe
		naipe1[i]=naipe+1;//entrega para a carta
		baralho[numero][naipe]++;//retira a carta do baralho oficialmente
		numero2=numero;//usado para reduzir cartas j, q, k para 10
		if(numero2>9){numero2=10;}//usado para reduzir cartas j, q, k para 10
		else{numero2++;}//usado para reduzir cartas j, q, k para 10
		soma=soma+numero2;//usado para soma final
	}
	for(i=0; i<2; i++){//apresenta as cartas do jogador 1
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
	printf("Soma: %i\n\n", soma);
}

int jogador2(){
	for(i=0; i<2; i++){//distribui as cartas na mão
		again1:
		numero=(rand()%13);//seleciona um numero
		mao2[i]=numero+1;//entrega para a carta
		naipe=(rand()%4);//seleciona um naipe
		naipe2[i]=naipe+1;//entrega para a carta
		baralho[numero][naipe]++;//retira a carta do baralho oficialmente
		if(baralho[numero][naipe]>2){//usado para controle das cartas que saem do monte
			baralho[numero][naipe]--;
			goto again1;
		}
		numero2=numero;//usado para reduzir cartas j, q, k para 10
		if(numero2>9){numero2=10;}//usado para reduzir cartas j, q, k para 10
		else{numero2++;}//usado para reduzir cartas j, q, k para 10
		soma2=soma2+numero2;//usado para soma final
	}
	for(i=0; i<2; i++){//apresenta as cartas do jogador 2
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
	printf("Soma: %i\n\n", soma2);
}

int jogador3(){
	for(i=0; i<2; i++){//distribui as cartas na mão
		again2:
		numero=(rand()%13);//seleciona um numero
		mao3[i]=numero+1;//entrega para a carta
		naipe=(rand()%4);//seleciona um naipe
		naipe3[i]=naipe+1;//entrega para a carta
		baralho[numero][naipe]++;//retira a carta do baralho oficialmente
		if(baralho[numero][naipe]>2){//usado para controle das cartas que saem do monte
			baralho[numero][naipe]--;
			goto again2;
		}
		numero2=numero;//usado para reduzir cartas j, q, k para 10
		if(numero2>9){numero2=10;}//usado para reduzir cartas j, q, k para 10
		else{numero2++;}//usado para reduzir cartas j, q, k para 10
		soma3=soma3+numero2;//usado para soma final
	}
	for(i=0; i<2; i++){//apresenta as cartas do jogador 3
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
	printf("Soma: %i\n\n", soma3);
}

int jogador4(){
	for(i=0; i<2; i++){//distribui as cartas na mão
		again3:
		numero=(rand()%13);//seleciona um numero
		mao4[i]=numero+1;//entrega para a carta
		naipe=(rand()%4);//seleciona um naipe
		naipe4[i]=naipe+1;//entrega para a carta
		baralho[numero][naipe]++;//retira a carta do baralho oficialmente
		if(baralho[numero][naipe]>2){//usado para controle das cartas que saem do monte
			baralho[numero][naipe]--;
			goto again3;
		}
		numero2=numero;//usado para reduzir cartas j, q, k para 10
		if(numero2>9){numero2=10;}//usado para reduzir cartas j, q, k para 10
		else{numero2++;}//usado para reduzir cartas j, q, k para 10
		soma4=soma4+numero2;//usado para soma final
	}
	for(i=0; i<2; i++){//apresenta as cartas do jogador 4
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
	printf("Soma: %i\n\n", soma4);
}
