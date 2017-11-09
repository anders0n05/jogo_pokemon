
#include "operacoes_funcionais.h"
#include<iostream>
using namespace std;
#ifndef INTERFACE_H
#define INTERFACE_H
#include<string>

using namespace std;

void mostra_tabuleiro(string matriz[TAM][TAM] ) {
   
	cout << endl;
	cout << "\t";
	for (int i = 0; i < TAM; i++) {
		cout << endl;
		cout << "\t\t\t\t\t";
		
		for (int j = 0; j< TAM; j++) {
		
			
			cout <<"³°°°°"<<" "<< matriz[i][j]<<" "<<"°°°°³";
			
			
		}
		
		cout << endl << endl << endl;;
	}
	
}







#endif // !INTERFACE_H

