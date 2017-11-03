#ifndef OPERACOES_FUNCIONAIS_H
#define OPERACOES_FUNCIONAIS_H
#define TAM 7
#include<string>
#include<stdlib.h>
#include<time.h>

struct Jogador {
	char nome;
	
};

struct Adversario {
	char nome;
	int x;
	int y;
};

void inicia_tabuleiro(char matriz[TAM][TAM]) {
	srand(time(NULL));
	Jogador jogador; Adversario adversario1, adversario2, adversario3, adversario4, posicao_coluna, posicao_linha;
	jogador.nome = 'P';
	adversario1.nome = 'A';
	adversario2.nome = 'A';
	adversario3.nome = 'A';
	adversario4.nome = 'A';
	
	
	posicao_coluna.x = rand() % 2;
	posicao_linha.y = rand() % TAM;
	if (posicao_coluna.x == 3|| posicao_linha.y==3) {// para nao sortear o lugar do jogador logo de cara
		posicao_coluna.x = 0;
		posicao_linha.y= 2;
	}
	for (int i = 0; i < TAM; i++) {
		for (int j = 0; j< TAM; j++) {
			matriz[i][j] = '°';
			if (i == 3 && j == 3) {
				matriz[i][j] = jogador.nome;
			}
		
		}

		matriz[posicao_coluna.x][posicao_linha.y] = adversario1.nome;
		matriz[posicao_linha.y][posicao_coluna.x] = adversario2.nome;
		matriz[posicao_coluna.x][posicao_coluna.x] = adversario3.nome;
		matriz[posicao_linha.y][posicao_linha.y] = adversario4.nome;
		
	}

}










#endif // !OPERACOES_FUNCIONAIS_H
