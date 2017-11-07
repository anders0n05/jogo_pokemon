#ifndef MOVIMENTACAO_H
#define MOVIMENTACAO_H
#include"operacoes_funcionais.h"

#include<string>
using namespace std;
struct Jogador {
	string nome;

};

struct Oponente {
	string nome[4];
	int x;
   int y;
};



bool move_cima( int posicao_linha ,int posicao_coluna,string matriz[TAM][TAM],string oponente[],int indice_oponente) {
	
	Jogador jogador;
	 Oponente adversario;
	
	//inicia_tabuleiro(matriz);
	 if (matriz[posicao_linha][posicao_coluna] == jogador.nome) {
		
		 return true;
	 }
	 if (posicao_coluna <0 || posicao_linha < 0 || posicao_linha>TAM || posicao_coluna>TAM) {

		 return false;


	 }
	
	 if (matriz[posicao_linha][posicao_coluna - 1] != "") {
		 return false;
	 }
		
		 else {
			 // matriz[posicao_linha][posicao_coluna] = "";// indice_oponente;//rastro 
			 matriz[posicao_linha][posicao_coluna - 1] = oponente[indice_oponente];
			 system("cls");

			 move_cima(posicao_linha, posicao_coluna - 2, matriz, oponente, indice_oponente);

			 return true;




		 }
	 
	
	

	
}


void busca_jogador(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], string oponente[], int indice_oponente) {
	//if(move_cima( posicao_linha,  posicao_coluna, matriz,  oponente,  indice_oponente));
	
}

/*
bool move_baixo(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], bool pegada) {

}
bool move_esquerda(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], bool pegada) {

}
bool move_direito(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], bool pegada) {

}
bool move_esquerdo(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], bool pegada) {

}
bool move_diagonal_superior_direita(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], bool pegada) {

}
bool move_diagonal_superior_esquerda(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], bool pegada) {

}

bool move_diagonal_inferior_esquerda(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], bool pegada) {

}
bool move_diagonal_inferior_direita(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], bool pegada) {

}





*/

#endif