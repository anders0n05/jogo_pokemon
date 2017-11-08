#ifndef OPERACOES_FUNCIONAIS_H
#define OPERACOES_FUNCIONAIS_H
#define TAM 7
#define OPONENTE 0
#include<string>
#include<stdlib.h>
#include<time.h>
#include"Movimentacao.h"
#include"interface.h"
using namespace std;
string matriz[TAM][TAM] = {""};

bool move_cima(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], string oponente[], int indice_oponente);
bool move_baixo(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], string oponente[], int indice_oponente);
bool move_direita(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], string oponente[], int indice_oponente);
bool move_esquerda(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], string oponente[], int indice_oponente);
bool move_diagonal_superior_direita(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], string oponente[], int indice_oponente);
bool move_diagonal_superior_esquerda(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], string oponente[], int indice_oponente);
bool move_diagonal_inferior_direita(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], string oponente[], int indice_oponente);
bool move_diagonal_inferior_esquerda(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], string oponente[], int indice_oponente);

void comeca_jogo(string matriz[TAM][TAM]) {
	srand(unsigned(time(NULL)));
	Jogador jogador; Oponente adversario, posicao_coluna, posicao_linha;
	jogador.nome = "J";
	adversario.nome[0] = "A1";
	adversario.nome[1] = "A2";
	adversario.nome[2] = "A3";
	adversario.nome[3] = "A4";

	
	posicao_coluna.x = 0;
		posicao_linha.y =4;
		
		

	
			
		matriz[3][3] = jogador.nome;

		
	   // matriz[posicao_coluna.x][posicao_coluna.x] = adversario.nome[0];
	//	matriz[posicao_coluna.x][posicao_linha.y] = adversario.nome[1];
		matriz[posicao_linha.y][posicao_coluna.x] = adversario.nome[0];
	//	matriz[posicao_linha.y][posicao_linha.y] = adversario.nome[3];
		
		cout << posicao_coluna.x << posicao_linha.y;
		
		move_diagonal_inferior_direita(posicao_linha.y, posicao_coluna.x,matriz,adversario.nome,0);
		
	}


bool move_cima( int posicao_linha ,int posicao_coluna,string matriz[TAM][TAM],string oponente[],int indice_oponente) {
	
	Jogador jogador;
	 Oponente adversario;
	
	//inicia_tabuleiro(matriz);
	 system("cls");

	 mostra_tabuleiro(matriz);
	 system("pause");
	 if (matriz[posicao_linha][posicao_coluna] == jogador.nome) {
		
		 return true;
	 }
	 else if (posicao_coluna <0 || posicao_linha <= 0 || posicao_linha>TAM || posicao_coluna>TAM) {

		 return false;


	 }
	
	 else if(matriz[posicao_linha-1][posicao_coluna] != "") {
		 return false;
	 }
	
		 else {
			
			
			 //mostra_tabuleiro(matriz);
			 //system("pause");
			 //system("cls");
			  matriz[posicao_linha][posicao_coluna] = "";// indice_oponente;//rastro 
			 
			 matriz[posicao_linha-1][posicao_coluna ] = oponente[indice_oponente];
			 
			


		//	 system("pause");
			
			
			 move_cima(posicao_linha-1, posicao_coluna, matriz, oponente, indice_oponente);
			
			 return true;




		 }
	 
	
	

	
}
bool move_baixo(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], string oponente[], int indice_oponente) {

	Jogador jogador;
	Oponente adversario;

	//inicia_tabuleiro(matriz);
	system("cls");

	mostra_tabuleiro(matriz);
	system("pause");


	if (matriz[posicao_linha][posicao_coluna] == jogador.nome) {

		return true;
	}
	 if (posicao_coluna <0 || posicao_linha < 0 || posicao_linha>=TAM-1 || posicao_coluna>=TAM) {

		return false;


	}

     if (matriz[posicao_linha + 1][posicao_coluna] != "") {
		return false;
	}

	else {


		//mostra_tabuleiro(matriz);
		//system("pause");
		//system("cls");
		matriz[posicao_linha][posicao_coluna] = "";// indice_oponente;//rastro 

		matriz[posicao_linha + 1][posicao_coluna] = oponente[indice_oponente];




		//	 system("pause");


		move_baixo(posicao_linha + 1, posicao_coluna, matriz, oponente, indice_oponente);

		return true;

		

	}




}
bool move_direita(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], string oponente[], int indice_oponente) {

	Jogador jogador;
	Oponente adversario;

	//inicia_tabuleiro(matriz);
	system("cls");

	mostra_tabuleiro(matriz);
	system("pause");


	if (matriz[posicao_linha][posicao_coluna] == jogador.nome) {

		return true;
	}
	if (posicao_coluna <0 || posicao_linha < 0 || posicao_linha >= TAM - 1 || posicao_coluna >= TAM-1) {

		return false;


	}

	if (matriz[posicao_linha][posicao_coluna+1] != "") {
		return false;
	}

	else {


		//mostra_tabuleiro(matriz);
		//system("pause");
		//system("cls");
		matriz[posicao_linha][posicao_coluna] = "";// indice_oponente;//rastro 

		matriz[posicao_linha][posicao_coluna+1] = oponente[indice_oponente];




		//	 system("pause");


		move_direita(posicao_linha, posicao_coluna+1, matriz, oponente, indice_oponente);

		return true;



	}




}
bool move_esquerda(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], string oponente[], int indice_oponente) {

	Jogador jogador;
	Oponente adversario;

	//inicia_tabuleiro(matriz);
	system("cls");

	mostra_tabuleiro(matriz);
	system("pause");


	if (matriz[posicao_linha][posicao_coluna] == jogador.nome) {

		return true;
	}
	if (posicao_coluna <=0 || posicao_linha>TAM || posicao_coluna>TAM) {

		return false;


	}

	if (matriz[posicao_linha][posicao_coluna -1 ] != "") {
		return false;
	}

	else {


		//mostra_tabuleiro(matriz);
		//system("pause");
		//system("cls");
		matriz[posicao_linha][posicao_coluna] = "";// indice_oponente;//rastro 

		matriz[posicao_linha][posicao_coluna - 1] = oponente[indice_oponente];




		//	 system("pause");


		move_esquerda(posicao_linha, posicao_coluna - 1, matriz, oponente, indice_oponente);

		return true;



	}




}
bool move_diagonal_superior_direita(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], string oponente[], int indice_oponente) {

	Jogador jogador;
	Oponente adversario;

	//inicia_tabuleiro(matriz);
	system("cls");

	mostra_tabuleiro(matriz);
	system("pause");


	if (matriz[posicao_linha][posicao_coluna] == jogador.nome) {

		return true;
	}
	if (posicao_coluna <= 0 || posicao_linha>=TAM-1 || posicao_coluna>=TAM-1|| posicao_linha<=0) {

		return false;


	}

	if (matriz[posicao_linha-1][posicao_coluna + 1] != "") {
		return false;
	}

	else {


		//mostra_tabuleiro(matriz);
		//system("pause");
		//system("cls");
		matriz[posicao_linha][posicao_coluna] = "";// indice_oponente;//rastro 

		matriz[posicao_linha-1][posicao_coluna + 1] = oponente[indice_oponente];




		//	 system("pause");


		move_diagonal_superior_direita(posicao_linha-1, posicao_coluna + 1, matriz, oponente, indice_oponente);

		return true;



	}




}
bool move_diagonal_superior_esquerda(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], string oponente[], int indice_oponente) {

	Jogador jogador;
	Oponente adversario;

	//inicia_tabuleiro(matriz);
	system("cls");

	mostra_tabuleiro(matriz);
	system("pause");


	if (matriz[posicao_linha][posicao_coluna] == jogador.nome) {

		return true;
	}
	if (posicao_coluna <= 0 || posicao_linha > TAM - 1 || posicao_coluna > TAM - 1) {

		return false;


	}

	if (matriz[posicao_linha - 1][posicao_coluna - 1] != "") {
		return false;
	}

	else {


		//mostra_tabuleiro(matriz);
		//system("pause");
		//system("cls");
		matriz[posicao_linha][posicao_coluna] = "";// indice_oponente;//rastro 

		matriz[posicao_linha - 1][posicao_coluna - 1] = oponente[indice_oponente];




		//	 system("pause");


		move_diagonal_superior_esquerda(posicao_linha - 1, posicao_coluna - 1, matriz, oponente, indice_oponente);

		return true;



	}




}
bool move_diagonal_inferior_esquerda(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], string oponente[], int indice_oponente) {

	Jogador jogador;
	Oponente adversario;

	//inicia_tabuleiro(matriz);
	system("cls");

	mostra_tabuleiro(matriz);
	system("pause");


	if (matriz[posicao_linha][posicao_coluna] == jogador.nome) {

		return true;
	}
	if (posicao_coluna <= 0 || posicao_linha >= TAM - 1 || posicao_coluna > TAM - 1) {

		return false;


	}

	if (matriz[posicao_linha + 1][posicao_coluna - 1] != "") {
		return false;
	}

	else {


		//mostra_tabuleiro(matriz);
		//system("pause");
		//system("cls");
		matriz[posicao_linha][posicao_coluna] = "";// indice_oponente;//rastro 

		matriz[posicao_linha + 1][posicao_coluna - 1] = oponente[indice_oponente];




		//	 system("pause");


		move_diagonal_inferior_esquerda(posicao_linha + 1, posicao_coluna - 1, matriz, oponente, indice_oponente);

		return true;



	}




}

bool move_diagonal_inferior_direita(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], string oponente[], int indice_oponente) {

	Jogador jogador;
	Oponente adversario;

	//inicia_tabuleiro(matriz);
	system("cls");

	mostra_tabuleiro(matriz);
	system("pause");


	if (matriz[posicao_linha][posicao_coluna] == jogador.nome) {

		return true;
	}
	if (posicao_coluna < 0 || posicao_linha >= TAM -1 || posicao_coluna >= TAM - 1) {

		return false;


	}

	if (matriz[posicao_linha + 1][posicao_coluna + 1] != "") {
		return false;
	}

	else {


		//mostra_tabuleiro(matriz);
		//system("pause");
		//system("cls");
		matriz[posicao_linha][posicao_coluna] = "";// indice_oponente;//rastro 

		matriz[posicao_linha + 1][posicao_coluna + 1] = oponente[indice_oponente];




		//	 system("pause");


		move_diagonal_inferior_direita(posicao_linha + 1, posicao_coluna + 1, matriz, oponente, indice_oponente);

		return true;



	}




}




#endif 
