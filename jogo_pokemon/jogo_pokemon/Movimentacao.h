#ifndef MOVIMENTACAO_H
#define MOVIMENTACAO_H
#include"interface.h"
#include"Structs_jogo.h"
string rastro_adversario1 = "*";
#include<string>
using namespace std;

//void move_esquerda(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM],  int indice_oponente, string rastro[],string jogador);
//void move_direita(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM],  int indice_oponente, string rastro[], string jogador);
//void move_baixo(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM],  int indice_oponente, string rastro[], string jogador);
/*

Voltar e alterar as outras funcoes como esta a move_cima




*/

void move_cima(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM],string oponente,string rastro,  int indice_oponente,string jogador) {
	
	
	Adversario adversario; Oponente inimigo;
	 
	
	//inicia_tabuleiro(matriz);
	system("cls");

	mostra_tabuleiro(matriz);
	system("pause");
	if (matriz[posicao_linha-1][posicao_coluna] == jogador) {
		cout << "Econtrou";
		matriz[posicao_linha][posicao_coluna] = "";
		
	}
	else if (posicao_linha<=0) {

		//move_direita(posicao_linha, posicao_coluna, matriz, indice_oponente,rastro,jogador);



	}

	else if (matriz[posicao_linha - 1][posicao_coluna] != "" || matriz[posicao_linha-1][posicao_coluna] == adversario.oponente[indice_oponente].rastro) {
		//move_direita(posicao_linha, posicao_coluna, matriz,  indice_oponente,rastro,jogador);

	}

	else {


		//mostra_tabuleiro(matriz);
		//system("pause");
		//system("cls");
		matriz[posicao_linha][posicao_coluna] =adversario.oponente[indice_oponente].rastro;// indice_oponente;//rastro 

		matriz[posicao_linha - 1][posicao_coluna] = adversario.oponente[indice_oponente].nome;




		//	 system("pause");


		move_cima(posicao_linha - 1, posicao_coluna, matriz,oponente,rastro ,indice_oponente,jogador);

	




	}





}

/*

void move_diagonal_inferior_direita(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM],  int indice_oponente, string rastro[],string jogador) {


	Oponente oponente; Adversario adversario;

	//inicia_tabuleiro(matriz);
	system("cls");

	mostra_tabuleiro(matriz);
	system("pause");
	if (matriz[posicao_linha+1][posicao_coluna+1] == jogador) {

		cout << "Encontrou";
		matriz[posicao_linha][posicao_coluna] = "";
	}
	else if (posicao_coluna >= TAM - 1 || posicao_linha >=TAM-1) {

		move_cima(posicao_linha, posicao_coluna, matriz,  indice_oponente, rastro,jogador);



	}

	else if (matriz[posicao_linha + 1][posicao_coluna + 1] != "" || matriz[posicao_linha + 1][posicao_coluna + 1] == rastro[indice_oponente]) {
		move_cima(posicao_linha, posicao_coluna, matriz, indice_oponente, rastro,jogador);

	}

	else {


		//mostra_tabuleiro(matriz);
		//system("pause");
		//system("cls");
		matriz[posicao_linha][posicao_coluna] = rastro[indice_oponente];// indice_oponente;//rastro 

		matriz[posicao_linha + 1][posicao_coluna + 1] = adversario.oponente[indice_oponente].nome;




		//	 system("pause");


		move_diagonal_inferior_direita(posicao_linha + 1, posicao_coluna + 1, matriz,  indice_oponente, rastro,jogador);






	}





}


void move_diagonal_superior_direita(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM],  int indice_oponente, string rastro[],string jogador) {

	
	Oponente oponente; Adversario adversario;

	//inicia_tabuleiro(matriz);
	system("cls");

	mostra_tabuleiro(matriz);
	system("pause");
	if (matriz[posicao_linha-1][posicao_coluna+1] == jogador) {

		cout << "Encontrou";
		matriz[posicao_linha][posicao_coluna] = "";
	}
	else if (posicao_coluna >=TAM-1 || posicao_linha <= 0) {

		move_baixo(posicao_linha, posicao_coluna, matriz,  indice_oponente, rastro,jogador);



	}

	else if (matriz[posicao_linha - 1][posicao_coluna + 1] != "" || matriz[posicao_linha - 1][posicao_coluna + 1] == rastro[indice_oponente]) {
		move_baixo(posicao_linha, posicao_coluna, matriz,  indice_oponente, rastro,jogador);

	}

	else {


		//mostra_tabuleiro(matriz);
		//system("pause");
		//system("cls");
		matriz[posicao_linha][posicao_coluna] = rastro[indice_oponente];// indice_oponente;//rastro 

		matriz[posicao_linha - 1][posicao_coluna + 1] = adversario.oponente[indice_oponente].nome;




		//	 system("pause");


		move_diagonal_superior_direita(posicao_linha - 1, posicao_coluna + 1, matriz,  indice_oponente, rastro,jogador);






	}





}


void move_diagonal_superior_esquerda(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], int indice_oponente, string rastro[],string jogador) {

	
	Oponente oponente; Adversario adversario;

	//inicia_tabuleiro(matriz);
	system("cls");

	mostra_tabuleiro(matriz);
	system("pause");
	if (matriz[posicao_linha-1][posicao_coluna-1] == jogador) {

		cout << "Encontrou";
		matriz[posicao_linha][posicao_coluna] = "";
	}
	else if (posicao_coluna <= 0 || posicao_linha <=0) {

		move_diagonal_superior_direita(posicao_linha, posicao_coluna, matriz,  indice_oponente, rastro,jogador);



	}

	else if (matriz[posicao_linha - 1][posicao_coluna - 1] != "" || matriz[posicao_linha - 1][posicao_coluna - 1] == rastro[indice_oponente]) {
		move_diagonal_superior_direita(posicao_linha, posicao_coluna, matriz,  indice_oponente, rastro,jogador);

	}

	else {


		//mostra_tabuleiro(matriz);
		//system("pause");
		//system("cls");
		matriz[posicao_linha][posicao_coluna] = rastro[indice_oponente];// indice_oponente;//rastro 

		matriz[posicao_linha - 1][posicao_coluna - 1] = adversario.oponente[indice_oponente].nome;




		//	 system("pause");


		move_diagonal_superior_esquerda(posicao_linha - 1, posicao_coluna - 1, matriz,  indice_oponente, rastro,jogador);






	}





}

void move_diagonal_inferior_esquerda(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM], int indice_oponente, string rastro[],string jogador) {

	
	Oponente oponente; Adversario adversario;

	//inicia_tabuleiro(matriz);
	system("cls");

	mostra_tabuleiro(matriz);
	system("pause");
	if (matriz[posicao_linha+1][posicao_coluna-1] == jogador) {
		cout << "Encontrou";
		matriz[posicao_linha][posicao_coluna] = "";
	}
	else if (posicao_coluna <=0 ||  posicao_linha>=TAM-1 ) {

		move_diagonal_superior_esquerda(posicao_linha, posicao_coluna, matriz,  indice_oponente, rastro,jogador);



	}

	else if (matriz[posicao_linha + 1][posicao_coluna-1] != "" || matriz[posicao_linha + 1][posicao_coluna-1] == rastro[indice_oponente]) {
		move_diagonal_superior_esquerda(posicao_linha, posicao_coluna, matriz, indice_oponente, rastro,jogador);

	}

	else {


		//mostra_tabuleiro(matriz);
		//system("pause");
		//system("cls");
		matriz[posicao_linha][posicao_coluna] = rastro[indice_oponente];// indice_oponente;//rastro 

		matriz[posicao_linha + 1][posicao_coluna-1] = adversario.oponente[indice_oponente].nome;




		//	 system("pause");


		move_diagonal_inferior_esquerda(posicao_linha + 1, posicao_coluna-1, matriz, indice_oponente, rastro,jogador);






	}





}

void move_esquerda(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM],  int indice_oponente,string rastro[],string jogador) {

	
	Oponente oponente; Adversario adversario;

	//inicia_tabuleiro(matriz);
	system("cls");

	mostra_tabuleiro(matriz);
	system("pause");


	if (matriz[posicao_linha][posicao_coluna-1] == jogador) {

		cout << "Encontrou";
		matriz[posicao_linha][posicao_coluna] = "";
	}
	else if (posicao_coluna <= 0) {

		//return false;
         
		move_diagonal_inferior_direita(posicao_linha, posicao_coluna, matriz, indice_oponente,rastro,jogador);

	}

	else if (matriz[posicao_linha][posicao_coluna - 1] != ""||matriz[posicao_linha][posicao_coluna-1]==rastro[indice_oponente]) {
		move_diagonal_inferior_direita(posicao_linha, posicao_coluna, matriz,  indice_oponente,rastro,jogador);

	}

	else {


		//mostra_tabuleiro(matriz);
		//system("pause");
		//system("cls");
		matriz[posicao_linha][posicao_coluna] = rastro[indice_oponente];// indice_oponente;//rastro 

		matriz[posicao_linha][posicao_coluna - 1] = adversario.oponente[indice_oponente].nome;




		//	 system("pause");


		move_esquerda(posicao_linha, posicao_coluna - 1, matriz, indice_oponente,rastro,jogador);

//		return true;



	}




}

void move_direita(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM],  int indice_oponente,string rastro[],string jogador) {

	
	Oponente oponente; Adversario adversario;

	//inicia_tabuleiro(matriz);
	system("cls");

	mostra_tabuleiro(matriz);
	system("pause");


	if (matriz[posicao_linha][posicao_coluna+1] == jogador) {
		cout << "Encontrou";
		matriz[posicao_linha][posicao_coluna] = "";
	}
	else if (posicao_coluna >=TAM -1 ) {

		 move_diagonal_inferior_esquerda(posicao_linha, posicao_coluna, matriz,indice_oponente,rastro,jogador);


	}

	else if (matriz[posicao_linha][posicao_coluna + 1] != ""||matriz[posicao_linha][posicao_coluna+1]==rastro[indice_oponente]) {
		move_diagonal_inferior_esquerda(posicao_linha, posicao_coluna, matriz, indice_oponente, rastro,jogador);

	}

	else {


		//mostra_tabuleiro(matriz);
		//system("pause");
		//system("cls");
		matriz[posicao_linha][posicao_coluna] = rastro[indice_oponente];// indice_oponente;//rastro 

		matriz[posicao_linha][posicao_coluna + 1] = adversario.oponente[indice_oponente].nome;




		//	 system("pause");


		move_direita(posicao_linha, posicao_coluna + 1, matriz, indice_oponente,rastro,jogador);

		



	}




}
void move_baixo(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM],  int indice_oponente,string rastro[],string jogador) {

	
	Oponente oponente; Adversario adversario;

	//inicia_tabuleiro(matriz);
	system("cls");

	mostra_tabuleiro(matriz);
	system("pause");


	if (matriz[posicao_linha+1][posicao_coluna] == jogador) {

		cout << "ENCONTROU";
		matriz[posicao_linha][posicao_coluna] = "";
	}
	else if (posicao_linha>=TAM-1) {


		move_esquerda(posicao_linha, posicao_coluna, matriz,  indice_oponente,rastro,jogador);

	}

	else if (matriz[posicao_linha + 1][posicao_coluna] != ""||matriz[posicao_linha+1][posicao_coluna]==rastro[indice_oponente]) {
		move_esquerda(posicao_linha, posicao_coluna, matriz, indice_oponente,rastro,jogador);
	}

	else {


		//mostra_tabuleiro(matriz);
		//system("pause");
		//system("cls");
		matriz[posicao_linha][posicao_coluna] = rastro[indice_oponente];// indice_oponente;//rastro 

		matriz[posicao_linha + 1][posicao_coluna] = adversario.oponente[indice_oponente].nome;




		//	 system("pause");


		move_baixo(posicao_linha + 1, posicao_coluna, matriz,  indice_oponente,rastro,jogador);





	}




}


void busca_jogador(int posicao_linha, int posicao_coluna, string matriz[TAM][TAM],  int indice_oponente,string rastro[]) {


	//move_cima(posicao_linha, posicao_coluna, matriz, oponente, indice_oponente,rastro);

	//move_diagonal_inferior_direita(posicao_linha, posicao_coluna, matriz, oponente, indice_oponente);
	//move_esquerda(posicao_linha, posicao_coluna, matriz, oponente, indice_oponente);
	//move_direita(posicao_linha, posicao_coluna, matriz, oponente, indice_oponente);

	




}






*/

#endif