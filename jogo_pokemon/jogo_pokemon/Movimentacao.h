#ifndef MOVIMENTACAO_H
#define MOVIMENTACAO_H
#include"operacoes_funcionais.h"
#include<string>

bool busca_personagem(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM],bool pegada) {
	Jogador jogador; Adversario adversario;
	inicia_tabuleiro(matriz);
	if (matriz[posicao_linha][posicao_coluna] == jogador.nome) {
		return true;
	}
	else if(matriz[posicao_linha + 1][posicao_coluna] == " ") {

		matriz[posicao_linha + 1][posicao_coluna] = adversario.nome[0];
	}



}




#endif