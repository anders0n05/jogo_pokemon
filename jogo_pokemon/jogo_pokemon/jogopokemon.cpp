// jogopokemon.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include<iostream>
#include"interface.h"


int main()
{
	int matriz[TAM][TAM] = { 0 };
	cout << endl;
	mostra_tabuleiro(matriz);

	system("pause");
    return 0;
}

