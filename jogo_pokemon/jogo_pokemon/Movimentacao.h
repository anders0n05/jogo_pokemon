#ifndef MOVIMENTACAO_H
#define MOVIMENTACAO_H


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






void busca_jogador(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], string oponente[], int indice_oponente) {
	//if(move_cima( posicao_linha,  posicao_coluna, matriz,  oponente,  indice_oponente));
	
}

bool move_diagonal_inferior_esquerda(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], bool pegada) {

}
bool move_diagonal_inferior_direita(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], bool pegada) {

}







#endif