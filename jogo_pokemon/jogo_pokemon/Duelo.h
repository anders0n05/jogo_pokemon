#ifndef DUELO_H
#define DUELO_H
#include "Structs_jogo.h"

#include<iostream>
using namespace std;


void personagens() {
	Adversario adversario; Oponente oponente; Monsters monstro; Jogador jogador; Ataque ataque;

	
	//Nomes dos ataques 
	adversario.oponente[0].monstro[0].ataque[0].nome_ataque = "Particula de chamas";
	adversario.oponente[0].monstro[0].ataque[1].nome_ataque = "Lanca Chamas";
	adversario.oponente[0].monstro[0].ataque[2].nome_ataque = "Garra de Metal";
	adversario.oponente[0].monstro[0].ataque[3].nome_ataque = "Quebra Cranio";
	
	
	adversario.oponente[0].monstro[1].ataque[0].nome_ataque = "Jato de Agua";
	adversario.oponente[0].monstro[1].ataque[1].nome_ataque = "Giro rapido";
	adversario.oponente[0].monstro[1].ataque[2].nome_ataque = "Raio de Gelo";
	adversario.oponente[0].monstro[1].ataque[3].nome_ataque = "Rajada de bolhas";

	adversario.oponente[1].monstro[0].ataque[0].nome_ataque = "Ventania";
	adversario.oponente[1].monstro[0].ataque[1].nome_ataque = "Danca das penas";
	adversario.oponente[1].monstro[0].ataque[2].nome_ataque = "Redemoinho do vento";
	adversario.oponente[1].monstro[0].ataque[3].nome_ataque = "Golpe aereo";

	adversario.oponente[1].monstro[1].ataque[0].nome_ataque = "MOrdida";
	adversario.oponente[1].monstro[1].ataque[1].nome_ataque = "Raio do trovao";
	adversario.oponente[1].monstro[1].ataque[2].nome_ataque = "Investida";
	adversario.oponente[1].monstro[1].ataque[3].nome_ataque = "Hiper presa";

	adversario.oponente[2].monstro[0].ataque[0].nome_ataque = "Rajada de bolhas";
	adversario.oponente[2].monstro[0].ataque[1].nome_ataque = "Hidro Bomba";
	adversario.oponente[2].monstro[0].ataque[2].nome_ataque = "Raio Aurora";
	adversario.oponente[2].monstro[0].ataque[3].nome_ataque = "Ataque de areia";

	adversario.oponente[2].monstro[1].ataque[0].nome_ataque = "Pancada Psiquica";
	adversario.oponente[2].monstro[1].ataque[1].nome_ataque = "Esfera de aura";
	adversario.oponente[2].monstro[1].ataque[2].nome_ataque = "Mega soco";
	adversario.oponente[2].monstro[1].ataque[3].nome_ataque = "Estrela Cadente";

	adversario.oponente[3].monstro[0].ataque[0].nome_ataque = "Hidro Canhao";
	adversario.oponente[3].monstro[0].ataque[1].nome_ataque = "Giro rapido";
	adversario.oponente[3].monstro[0].ataque[2].nome_ataque = "Quebra Cranio";
	adversario.oponente[3].monstro[0].ataque[3].nome_ataque = "Mordida";

	adversario.oponente[3].monstro[1].ataque[0].nome_ataque = "Ventania";
	adversario.oponente[3].monstro[1].ataque[1].nome_ataque = "Danca das penas";
	adversario.oponente[3].monstro[1].ataque[2].nome_ataque = "Redemoinho do vento";
	adversario.oponente[3].monstro[1].ataque[3].nome_ataque = "Golpe aereo";


	jogador.monstro[0].ataque[0].nome_ataque = "Choque do Trovao";
	jogador.monstro[0].ataque[1].nome_ataque = "Esfera eletrica";
	jogador.monstro[0].ataque[2].nome_ataque = "Cauda de ferro";
	jogador.monstro[0].ataque[3].nome_ataque = "Trovao";

	jogador.monstro[1].ataque[0].nome_ataque = "Semente Sangue-suga";
	jogador.monstro[1].ataque[1].nome_ataque = "Chicote de cipo";
	jogador.monstro[1].ataque[2].nome_ataque = "Po do sono";
	jogador.monstro[1].ataque[3].nome_ataque = "Danca das petalas";

	adversario.oponente[0].monstro[0].nome = "Charmander";
	adversario.oponente[0].monstro[1].nome = "Squirtle";
	

	adversario.oponente[1].monstro[0].nome = " Pidgeotto";
	adversario.oponente[1].monstro[1].nome = "Rattata";

	adversario.oponente[2].monstro[0].nome = "Vaporean";
	adversario.oponente[2].monstro[1].nome = "Mewtwo";
	adversario.oponente[3].monstro[0].nome = " Blastoise";
	adversario.oponente[3].monstro[1].nome = "Pidgey";

	jogador.monstro[0].nome = "Pikachu";
	jogador.monstro[1].nome = "Bulbasaur";


	cout << jogador.monstro[1].ataque[2].nome_ataque;



}














#endif
