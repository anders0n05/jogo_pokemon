#ifndef STRUCTS_JOGO_H
#define STRUCTS_JOGO_H
#include<string>
using namespace std;
struct Jogador {
	string nome;

};

struct Oponente {
	string nome[4],rastro[4];
	int x;
	int y;
};





#endif