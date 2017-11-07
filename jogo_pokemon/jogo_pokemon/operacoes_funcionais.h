#ifndef OPERACOES_FUNCIONAIS_H
#define OPERACOES_FUNCIONAIS_H
#define TAM 7
#define OPONENTE 0
#include<string>
#include<stdlib.h>
#include<time.h>
#include"Movimentacao.h"
using namespace std;
string matriz[TAM][TAM] = { " " };

void inicia_tabuleiro(string matriz[TAM][TAM]) {
	srand(unsigned(time(NULL)));
	Jogador jogador; Oponente adversario, posicao_coluna, posicao_linha;
	jogador.nome = "J";
	adversario.nome[0] = "A1";
	adversario.nome[1] = "A2";
	adversario.nome[2] = "A3";
	adversario.nome[3] = "A4";

	
	posicao_coluna.x = 1;
		posicao_linha.y =6;
		
		

	
			
		matriz[3][3] = jogador.nome;

		
	    matriz[posicao_coluna.x][posicao_coluna.x] = adversario.nome[0];
		matriz[posicao_coluna.x][posicao_linha.y] = adversario.nome[1];
		matriz[posicao_linha.y][posicao_coluna.x] = adversario.nome[2];
		matriz[posicao_linha.y][posicao_linha.y] = adversario.nome[3];
		
		cout << posicao_coluna.x << posicao_linha.y;
		
		move_cima(posicao_linha.y, posicao_coluna.x,matriz,adversario.nome,2);
		
	}











#endif // !OPERACOES_FUNCIONAIS_H
