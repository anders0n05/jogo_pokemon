#ifndef MOVIMENTACAO_H
#define MOVIMENTACAO_H
#include"interface.h"
#include"Structs_jogo.h"
string rastro_adversario1 = "*";
#include<string>
using namespace std;

void move_direita(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], string oponente[], int indice_oponente,string rastro []);
void move_baixo(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], string oponente[], int indice_oponente,string rastro[]);


void move_cima(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], string oponente[], int indice_oponente,string rastro[]) {

	Jogador jogador;
	Oponente adversario;

	//inicia_tabuleiro(matriz);
	system("cls");

	mostra_tabuleiro(matriz);
	system("pause");
	if (matriz[posicao_linha][posicao_coluna] == jogador.nome) {

		
	}
	else if (posicao_coluna <0 || posicao_linha <=0 || posicao_linha>TAM-1 || posicao_coluna>TAM) {

		move_direita(posicao_linha, posicao_coluna, matriz, oponente, 0,rastro);



	}

	else if (matriz[posicao_linha - 1][posicao_coluna] != "" || matriz[posicao_linha-1][posicao_coluna] == rastro[indice_oponente]) {
		move_direita(posicao_linha, posicao_coluna, matriz, oponente, 0,rastro);

	}

	else {


		//mostra_tabuleiro(matriz);
		//system("pause");
		//system("cls");
		matriz[posicao_linha][posicao_coluna] = rastro[indice_oponente];// indice_oponente;//rastro 

		matriz[posicao_linha - 1][posicao_coluna] = oponente[indice_oponente];




		//	 system("pause");


		move_cima(posicao_linha - 1, posicao_coluna, matriz, oponente, indice_oponente,rastro);

	




	}





}

void move_esquerda(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], string oponente[], int indice_oponente,string rastro[]) {

	Jogador jogador;
	Oponente adversario;

	//inicia_tabuleiro(matriz);
	system("cls");

	mostra_tabuleiro(matriz);
	system("pause");


	if (matriz[posicao_linha][posicao_coluna] == jogador.nome) {

		
	}
	if (posicao_coluna <= 0 || posicao_linha>TAM || posicao_coluna>=TAM) {

		//return false;
         
		move_baixo(posicao_linha, posicao_coluna, matriz, oponente, indice_oponente,rastro);

	}

	if (matriz[posicao_linha][posicao_coluna - 1] != ""||matriz[posicao_linha][posicao_coluna-1]==rastro[indice_oponente]) {
		move_baixo(posicao_linha, posicao_coluna, matriz, oponente, indice_oponente,rastro);

	}

	else {


		//mostra_tabuleiro(matriz);
		//system("pause");
		//system("cls");
		matriz[posicao_linha][posicao_coluna] = rastro[indice_oponente];// indice_oponente;//rastro 

		matriz[posicao_linha][posicao_coluna - 1] = oponente[indice_oponente];




		//	 system("pause");


		move_esquerda(posicao_linha, posicao_coluna - 1, matriz, oponente, indice_oponente,rastro);

//		return true;



	}




}

void move_direita(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], string oponente[], int indice_oponente,string rastro[]) {

	Jogador jogador;
	Oponente adversario;

	//inicia_tabuleiro(matriz);
	system("cls");

	mostra_tabuleiro(matriz);
	system("pause");


	if (matriz[posicao_linha][posicao_coluna] == jogador.nome) {

		
	}
	if (posicao_coluna <0 || posicao_linha < 0 || posicao_linha >= TAM - 1 || posicao_coluna >= TAM - 1) {

		 move_esquerda(posicao_linha, posicao_coluna, matriz,oponente,indice_oponente,rastro);


	}

	if (matriz[posicao_linha][posicao_coluna + 1] != ""||matriz[posicao_linha][posicao_coluna+1]==rastro[indice_oponente]) {
		move_esquerda(posicao_linha, posicao_coluna, matriz, oponente, indice_oponente,rastro);

	}

	else {


		//mostra_tabuleiro(matriz);
		//system("pause");
		//system("cls");
		matriz[posicao_linha][posicao_coluna] = rastro[indice_oponente];// indice_oponente;//rastro 

		matriz[posicao_linha][posicao_coluna + 1] = oponente[indice_oponente];




		//	 system("pause");


		move_direita(posicao_linha, posicao_coluna + 1, matriz, oponente, indice_oponente,rastro);

		



	}




}
void move_baixo(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], string oponente[], int indice_oponente,string rastro[]) {

	Jogador jogador;
	Oponente adversario;

	//inicia_tabuleiro(matriz);
	system("cls");

	mostra_tabuleiro(matriz);
	system("pause");


	if (matriz[posicao_linha][posicao_coluna] == jogador.nome) {

		cout << "ENCONTROU";
	}
	if (posicao_coluna <0 || posicao_linha < 0 || posicao_linha >= TAM - 1 || posicao_coluna >= TAM) {


		move_cima(posicao_linha, posicao_coluna, matriz, oponente, 0,rastro);

	}

	if (matriz[posicao_linha + 1][posicao_coluna] != ""||matriz[posicao_linha+1][posicao_coluna]==rastro[indice_oponente]) {
		move_cima(posicao_linha, posicao_coluna, matriz, oponente, 0,rastro);
	}

	else {


		//mostra_tabuleiro(matriz);
		//system("pause");
		//system("cls");
		matriz[posicao_linha][posicao_coluna] = rastro[indice_oponente];// indice_oponente;//rastro 

		matriz[posicao_linha + 1][posicao_coluna] = oponente[indice_oponente];




		//	 system("pause");


		move_baixo(posicao_linha + 1, posicao_coluna, matriz, oponente, indice_oponente,rastro);





	}




}


void busca_jogador(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], string oponente[], int indice_oponente,string rastro[]) {


	move_cima(posicao_linha, posicao_coluna, matriz, oponente, indice_oponente,rastro);

	//move_diagonal_inferior_direita(posicao_linha, posicao_coluna, matriz, oponente, indice_oponente);
	//move_esquerda(posicao_linha, posicao_coluna, matriz, oponente, indice_oponente);
	//move_direita(posicao_linha, posicao_coluna, matriz, oponente, indice_oponente);

	




}








#endif