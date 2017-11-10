#ifndef OPERACOES_FUNCIONAIS_H
#define OPERACOES_FUNCIONAIS_H
#define TAM 7
#define OPONENTE 0
#include<string>
#include<stdlib.h>
#include<time.h>
#include"Movimentacao.h"

#include"Structs_jogo.h"
using namespace std;
string matriz[TAM][TAM] = {""};

void comeca_jogo(string matriz[TAM][TAM]) {
	srand(unsigned(time(NULL)));
	Jogador jogador; Oponente oponente, posicao_coluna, posicao_linha; Adversario adversario;
	jogador.nome = "J";
	adversario.oponente[0].nome = "A1";
	adversario.oponente[1].nome = "A2"; 
	adversario.oponente[2].nome = "A3";
	adversario.oponente[3].nome = "A4";

	adversario.oponente[0].rastro = "*";
	adversario.oponente[1].rastro = "::";
	adversario.oponente[2].rastro = "+";
	adversario.oponente[3].rastro = "£";
	
	posicao_coluna.x = 2;
	posicao_linha.y = 5;
		
	

	
			
	matriz[3][3] = jogador.nome;

		
	matriz[posicao_coluna.x][posicao_coluna.x] = adversario.oponente[0].nome;
	matriz[posicao_coluna.x][posicao_linha.y] = adversario.oponente[1].nome;
	matriz[posicao_linha.y][posicao_coluna.x] = adversario.oponente[2].nome;
	matriz[posicao_linha.y][posicao_linha.y] = adversario.oponente[3].nome;
		
		
		
		
	move_cima(posicao_linha.y, posicao_coluna.x, matriz,adversario.oponente->nome,adversario.oponente->rastro, 0,jogador.nome);
	move_cima(posicao_linha.y, posicao_coluna.x, matriz,adversario.oponente->nome,adversario.oponente->rastro, 1,jogador.nome);
	move_cima(posicao_linha.y, posicao_coluna.x, matriz,adversario.oponente->nome,adversario.oponente->rastro, 2,jogador.nome);
	move_cima(posicao_linha.y, posicao_coluna.x, matriz,adversario.oponente->nome,adversario.oponente->rastro, 3,jogador.nome);
	
	


	}





#endif 
