#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "biblioteca.h"

int comprar1();
int comprar2();
int comprar3();
int comprar4();
int mostrar1();
int mostrar2();
int mostrar3();
int mostrar4();

int menu1(){
	getchar();
	system("cls");
	printf("\tjogador %i\n", jogador);
	mostrar1();
	
	if(soma>21){//se o jogador estorou o limite
		printf("\nJogador %i parou em %i", jogador, soma);
		exit(0);
	}
	
	else{//se o jogador não estorou o limite
	printf("\nOpcoes:\n1-parar\n2-comprar\n3-sair do jogo\n");
	scanf("%i", &opcao);
	}
	
	switch(opcao){
		case 1://se o jogador decidiu parar com a soma que possui
			printf("\nJogador %i parou em ", jogador);
			printf("%i", soma);
		break;
		case 2://se o jogador deseja comprar outra carta
			printf("\nJogador %i comprou ", jogador);
			comprar1();//se o jogador 1 comprou
			mostrar1();//apresenta as cartas do jogador 1
		break;	
		case 3:
			
		break;
	}
}

int menu(){
	getchar();
	printf("\nVez do jogador %i\n", jogador);//informa de quem é a vez
	getchar();
	system("cls");
	printf("\tjogador %i\n", jogador);
	if(jogador==1){mostrar1();}//apresenta as cartas do jogador 1
	else if(jogador==2){mostrar2();}//apresenta as cartas do jogador 2
	else if(jogador==3){mostrar3();}//apresenta as cartas do jogador 3
	else if(jogador==4){mostrar4();}//apresenta as cartas do jogador 4
	
	if((jogador==1)&&(soma>21)){//se o jogador 1 estorou o limite
		printf("\nJogador %i parou em %i", jogador, soma);
		opcao=0;
	}
	
	else if((jogador==2)&&(soma2>21)){//se o jogador 2 estorou o limite
		printf("\nJogador %i parou em %i", jogador, soma2);
		opcao=0;
	}
	
	else if((jogador==3)&&(soma3>21)){//se o jogador 3 estorou o limite
		printf("\nJogador %i parou em %i", jogador, soma3);
		opcao=0;
	}
	
	else if((jogador==4)&&(soma4>21)){//se o jogador 4 estorou o limite
		printf("\nJogador %i parou em %i", jogador, soma4);
		opcao=0;
	}
	
	else{//se o jogador não estorou o limite
	printf("\nOpcoes:\n1-parar\n2-comprar\n3-sair do jogo\n");
	scanf("%i", &opcao);
	}
	
	switch(opcao){
		case 1://se o jogador decidiu parar com a soma que possui
			printf("\nJogador %i parou em ", jogador);
			if(jogador==1){printf("%i", soma);}
			else if(jogador==2){printf("%i", soma2);}
			else if(jogador==3){printf("%i", soma3);}
			else if(jogador==4){printf("%i", soma4);}
		break;
		case 2://se o jogador deseja comprar outra carta
			printf("\nJogador %i comprou ", jogador);
			if(jogador==1){
				comprar1();//se o jogador 1 comprou
				mostrar1();//apresenta as cartas do jogador 1
			}
			if(jogador==2){
				comprar2();//se o jogador 2 comprou
				mostrar2();//apresenta as cartas do jogador 2
			}
			if(jogador==3){
				comprar3();//se o jogador 3 comprou
				mostrar3();//apresenta as cartas do jogador 3
			}
			if(jogador==4){
				comprar4();//se o jogador 4 comprou
				mostrar4();//apresenta as cartas do jogador 4
			}
		break;	
		case 3:
			
		break;
	}
	if(jogador==jogadores){jogador=0;}
	jogador++;
}

int comprar1(){
	for(i=0; i<10; i++){
		if(mao1[i]==0){
			denovo1:
			numero=(rand()%13);//seleciona um numero
			mao1[i]=numero+1;//entrega para a carta
			naipe=(rand()%4);//seleciona um naipe
			naipe1[i]=naipe+1;//entrega para a carta
			baralho[numero][naipe]++;//retira a carta do baralho oficialmente
			if(baralho[numero][naipe]>2){//usado para controle das cartas que saem do monte
				baralho[numero][naipe]--;
				goto denovo1;
			}
			numero2=numero;//usado para reduzir cartas j, q, k para 10
			if(numero2>9){numero2=10;}//usado para reduzir cartas j, q, k para 10
			else{numero2++;}//usado para reduzir cartas j, q, k para 10
			soma=soma+numero2;//usado para soma final
			if(mao1[i]>10){//apresenta as cartas do jogador 1
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
		i=100;
		}
	}
	printf("Soma: %i\n\n", soma);
}

int comprar2(){
	for(i=0; i<10; i++){
		if(mao1[i]==0){
			denovo2:
			numero=(rand()%13);//seleciona um numero
			mao2[i]=numero+1;//entrega para a carta
			naipe=(rand()%4);//seleciona um naipe
			naipe2[i]=naipe+1;//entrega para a carta
			baralho[numero][naipe]++;//retira a carta do baralho oficialmente
			if(baralho[numero][naipe]>2){//usado para controle das cartas que saem do monte
				baralho[numero][naipe]--;
				goto denovo2;
			}
			numero2=numero;//usado para reduzir cartas j, q, k para 10
			if(numero2>10){numero2=10;}//usado para reduzir cartas j, q, k para 10
			else{numero2++;}//usado para reduzir cartas j, q, k para 10
			soma2=soma2+numero2;//usado para soma final
			if(mao2[i]>9){//apresenta as cartas do jogador 2
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
		i=100;
		}
	}
	printf("Soma: %i\n\n", soma2);
}

int comprar3(){
	for(i=0; i<10; i++){
		if(mao3[i]==0){
			denovo3:
			numero=(rand()%13);//seleciona um numero
			mao3[i]=numero+1;//entrega para a carta
			naipe=(rand()%4);//seleciona um naipe
			naipe3[i]=naipe+1;//entrega para a carta
			baralho[numero][naipe]++;//retira a carta do baralho oficialmente
			if(baralho[numero][naipe]>2){//usado para controle das cartas que saem do monte
				baralho[numero][naipe]--;
				goto denovo3;
			}
			numero2=numero;//usado para reduzir cartas j, q, k para 10
			if(numero2>10){numero2=10;}//usado para reduzir cartas j, q, k para 10
			else{numero2++;}//usado para reduzir cartas j, q, k para 10
			soma3=soma3+numero2;//usado para soma final
			if(mao3[i]>9){//apresenta as cartas do jogador 3
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
		i=100;
		}
	}
	printf("Soma: %i\n\n", soma3);
}

int comprar4(){
	for(i=0; i<10; i++){
		if(mao4[i]==0){
			denovo4:
			numero=(rand()%13);//seleciona um numero
			mao4[i]=numero+1;//entrega para a carta
			naipe=(rand()%4);//seleciona um naipe
			naipe4[i]=naipe+1;//entrega para a carta
			baralho[numero][naipe]++;//retira a carta do baralho oficialmente
			if(baralho[numero][naipe]>2){//usado para controle das cartas que saem do monte
				baralho[numero][naipe]--;
				goto denovo4;
			}
			numero2=numero;//usado para reduzir cartas j, q, k para 10
			if(numero2>9){numero2=10;}//usado para reduzir cartas j, q, k para 10
			else{numero2++;}//usado para reduzir cartas j, q, k para 10
			soma4=soma4+numero2;//usado para soma final
			if(mao4[i]>10){//apresenta as cartas do jogador 4
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
		i=100;
		}
	}
	printf("Soma: %i\n\n", soma4);
}
