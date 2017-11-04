#ifndef OPERACOES_FUNCIONAIS_H
#define OPERACOES_FUNCIONAIS_H
#define TAM 7
#define ADVERSARIO 1
#include<string>
#include<stdlib.h>
#include<time.h>
#include"Movimentacao.h"
using namespace std;
struct Jogador {
	string nome;

};

struct Adversario {
	string nome[4];
	int x;
	int y;
};
bool move_cima(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM]);
void inicia_tabuleiro(string matriz[TAM][TAM]) {
	srand(unsigned(time(NULL)));
	Jogador jogador; Adversario adversario, posicao_coluna, posicao_linha;
	jogador.nome = "J";
	adversario.nome[0] = "A1";
	adversario.nome[1] = "A2";
	adversario.nome[2] = "A3";
	adversario.nome[3] = "A4";

	for (int i = 0; i < 4; i++) {
		posicao_coluna.x = rand() % (TAM-1);
		posicao_linha.y = i + 3;
		if (posicao_coluna.x == 3) {// para nao sortear o lugar do jogador logo de cara
			posicao_coluna.x++;
			
		}
	}

	

	
	for (int i = 0; i < TAM; i++) {
		for (int j = 0; j< TAM; j++) {
			matriz[i][j] = " ";
			if (i == 3 && j == 3) {
				matriz[i][j] = jogador.nome;
			}
		
		}

		matriz[posicao_coluna.x][posicao_coluna.x] = adversario.nome[0];
		matriz[posicao_coluna.x][posicao_linha.y] = adversario.nome[1];
		matriz[posicao_linha.y][posicao_coluna.x] = adversario.nome[2];
		matriz[posicao_linha.y][posicao_linha.y] = adversario.nome[3];
		

		move_cima(posicao_linha, posicao_coluna, matriz);
		
	}

}


bool move_cima(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM]) {
	Adversario adversario; Jogador jogador;
	inicia_tabuleiro(matriz);
	if (matriz[posicao_linha][posicao_coluna] == jogador.nome) {
		return true;
	}
	else if (posicao_coluna <0 || posicao_linha < 0 || posicao_linha>TAM || posicao_coluna>TAM) {
		return false;
	}
	else if (matriz[posicao_linha - 1][posicao_coluna] != " ") {
		return false;
	}
	else {

		matriz[posicao_linha - 1][posicao_coluna] = adversario.nome[0];
		if (move_cima(posicao_linha - 1, posicao_coluna, matriz) {
			return true;
		}
	}

}









#endif // !OPERACOES_FUNCIONAIS_H
