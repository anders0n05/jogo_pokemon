// jogopokemon.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include<iostream>
#include"interface.h"
#include<string>

int main()
{
 string matriz[TAM][TAM] = { " " };
	cout << endl;
	mostra_tabuleiro(matriz);

	system("pause");
    return 0;
}

