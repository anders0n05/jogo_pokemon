#ifndef STRUCTS_JOGO_H
#define STRUCTS_JOGO_H
#include<string>
using namespace std;
struct Ataque {
	int ataque_fraco=10;
	int super_ataque=50;
	int ataque_normal=20;
	int ataque_especial=70;
	string nome_ataque;
};
struct Monsters {
	string nome;
	int vida = 100;
	int nivel=50;
	Ataque ataque[4];

};
struct Jogador {
	string nome;
	Monsters monstro[2];

};

struct Oponente {
	string nome,rastro;
	int x;
	int y;
	Monsters monstro[2];
};
struct Adversario {
	Oponente oponente[4];
	
};




#endif