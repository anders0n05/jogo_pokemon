
#include "operacoes_funcionais.h"
#include<iostream>
using namespace std;
#ifndef INTERFACE_H
#define INTERFACE_H




void mostra_tabuleiro(int matriz[6][6]) {
	inicia_tabuleiro(matriz);
	cout << endl << endl << endl;
	for (int i = 0; i < 6; i++) {
		cout << endl;
		cout << "\t\t\t\t";
		for (int j = 0; j< 6; j++) {
			
			cout << matriz[i][j];
			cout << "\t\t";
		}
		cout << endl << endl << endl;
	}


}







#endif // !INTERFACE_H

