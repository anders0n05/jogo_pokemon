#ifndef OPERACOES_FUNCIONAIS_H
#define OPERACOES_FUNCIONAIS_H
#define TAM 7
#include<string>


struct Jogo {//strcut pai, contem todos os elementos em comum seja adversario ou jogador
	char aparencia;
};
struct Jogador:Jogo {

	
};

struct Adversario1:Jogo {
	
};

struct Adversario2:Jogo {
	
};

struct Adversario3:Jogo {
	
};

struct Adversario4:Jogo {
	
};
void inicia_tabuleiro(char matriz[TAM][TAM]) {
	Jogador jogador; Adversario1 adversario1; Adversario2 adversario2; Adversario3 adversario3; Adversario4 adversario4;
	jogador.aparencia ='P';
	adversario1.aparencia = 'A';
	adversario2.aparencia = 'A';
	adversario3.aparencia = 'A';
	adversario4.aparencia = 'A';

	for (int i = 0; i < TAM; i++) {
		for (int j = 0; j< TAM; j++) {
			matriz[i][j] = ' °';
			if (i == 3 && j == 3) {
				matriz[i][j] = jogador.aparencia;
			}
			if (i == 0 && j == 0) {
				matriz[i][j] = adversario1.aparencia;
			}
			if (i == 0 && j == TAM-1) {
				matriz[i][j] = adversario2.aparencia;
			}
			if (i == TAM - 1 && j == 0) {
				
				matriz[i][j] = adversario3.aparencia;
			}
			if (i == TAM-1 && j == TAM-1) {
				matriz[i][j] = adversario4.aparencia;
			}
		}

		
		
	}

}










#endif // !OPERACOES_FUNCIONAIS_H
