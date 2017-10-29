
#include "operacoes_funcionais.h"
#include<iostream>
using namespace std;
#ifndef INTERFACE_H
#define INTERFACE_H




void mostra_tabuleiro(int matriz[TAM][TAM]) {
	inicia_tabuleiro(matriz);
	cout << endl;
	cout << "\t";
	for (int i = 0; i < TAM; i++) {
		cout << endl;
		cout << "\t\t\t\t\t";
	
		for (int j = 0; j< TAM; j++) {
		
			
			cout <<"|" <<matriz[i][j]<<"|";
			
			cout << "\t";
		}
		
		cout << endl << endl << endl;
	}


}







#endif // !INTERFACE_H

