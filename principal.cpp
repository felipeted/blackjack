#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "biblioteca.h"

/* blackjack simulator */	
	
	int modo, jogadores=0, jogador=1, sair=0, opcao=0;//sontrole e calculo
	int baralho[13][4]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};//cartas no monte
	int soma=0, soma2=0, soma3=0, soma4=0, numero, numero2, naipe, i;//controle e soma
	int mao1[10]={0,0,0,0,0,0,0,0,0,0}, naipe1[10]={0,0,0,0,0,0,0,0,0,0}, cartas1=0;//usado para os calculos
	int mao2[10]={0,0,0,0,0,0,0,0,0,0}, naipe2[10]={0,0,0,0,0,0,0,0,0,0}, cartas2=0;//usado para os calculos
	int mao3[10]={0,0,0,0,0,0,0,0,0,0}, naipe3[10]={0,0,0,0,0,0,0,0,0,0}, cartas3=0;//usado para os calculos
	int mao4[10]={0,0,0,0,0,0,0,0,0,0}, naipe4[10]={0,0,0,0,0,0,0,0,0,0}, cartas4=0;//usado para os calculos

	int jogador1();//da as cartas do jogador 1
	int jogador2();//da as cartas do jogador 2
	int jogador3();//da as cartas do jogador 3
	int jogador4();//da as cartas do jogador 4
	int menu();//menu de opções
	int menu1();//menu de unico jogador

int main(){
	srand(time(NULL));
	printf("Bem vindo ao simulador de Black Jack!\nEscolha o modo de jogo:\n1-Multiplayer\n2-contra a banca\n3-Campanha\n");
	scanf("%i", &modo);
	switch(modo){
		case 1:
			while((jogadores<2)||(jogadores>4)){
				printf("\nEscolha o numero de jogadores (2-4): ");
				scanf("%i", &jogadores);
			}
			switch(jogadores){
				case 2:
					jogador1();//da as cartas do jogador 1
					jogador2();//da as cartas do jogador 2
					getchar();
					while(sair==0){
						menu();//menu de opções
					}
				break;
				case 3:
					jogador1();//da as cartas do jogador 1
					jogador2();//da as cartas do jogador 2
					jogador3();//da as cartas do jogador 3
					getchar();
					while(sair==0){
						menu();//menu de opções
					}
				break;
				case 4:
					jogador1();//da as cartas do jogador 1
					jogador2();//da as cartas do jogador 2
					jogador3();//da as cartas do jogador 3
					jogador4();//da as cartas do jogador 4
					getchar();
					while(sair==0){
						menu();//menu de opções
					}
				break;
			}
		break;
		case 2:
			
		break;
		case 3:
			jogador1();//da as cartas do jogador 1
			getchar();
			while(sair==0){
				menu1();//menu de opções
			}
		break;
	}
}
