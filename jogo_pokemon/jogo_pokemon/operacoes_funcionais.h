#ifndef OPERACOES_FUNCIONAIS_H
#define OPERACOES_FUNCIONAIS_H
#define TAM 7
#include<string>
#include<stdlib.h>
#include<time.h>
#include"Movimentacao.h"
struct Jogador {
	string nome;
	
};

struct Adversario {
	string nome[4];
	int x;
	int y;
};

void inicia_tabuleiro(string matriz[TAM][TAM]) {
	srand(time(NULL));
	Jogador jogador; Adversario adversario, posicao_coluna, posicao_linha;
	jogador.nome = 'P';
	adversario.nome[0] = 'A';
	adversario.nome[1] = 'A';
	adversario3.nome[2] = 'A';
	adversario4.nome[3] = 'A';
	
	
	posicao_coluna.x = rand() % 2;
	posicao_linha.y = rand() % TAM;
	if (posicao_coluna.x == 3|| posicao_linha.y==3) {// para nao sortear o lugar do jogador logo de cara
		posicao_coluna.x = 0;
		posicao_linha.y= 2;
	}
	for (int i = 0; i < TAM; i++) {
		for (int j = 0; j< TAM; j++) {
			matriz[i][j] = " ";
			if (i == 3 && j == 3) {
				matriz[i][j] = jogador.nome;
			}
		
		}

		matriz[posicao_coluna.x][posicao_linha.y] = adversario.nome[0];
		matriz[posicao_linha.y][posicao_coluna.x] = adversario.nome[1];
		matriz[posicao_coluna.x][posicao_coluna.x] = adversario.nome[2];
		matriz[posicao_linha.y][posicao_linha.y] = adversario.nome[3];
		
	}

}










#endif // !OPERACOES_FUNCIONAIS_H
