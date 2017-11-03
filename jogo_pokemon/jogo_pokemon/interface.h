
#include "operacoes_funcionais.h"
#include<iostream>
using namespace std;
#ifndef INTERFACE_H
#define INTERFACE_H
#include<string>



void mostra_tabuleiro(char matriz[TAM][TAM]) {
	inicia_tabuleiro(matriz);
	cout << endl;
	cout << "\t";
	for (int i = 0; i < TAM; i++) {
		cout << endl;
		cout << "\t\t\t\t\t";
		
		for (int j = 0; j< TAM; j++) {
		
			
			cout << "³°°" << matriz[i][j] << "°°³";
			
			cout << "\t";
		}
		
		cout << endl << endl << endl;
	}


}







#endif // !INTERFACE_H

