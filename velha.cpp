/**
 * \file  velha.cpp
 */


#include "velha.hpp"
using namespace std;
#include <iostream>
#include <cstdlib>

/** 
 * @brief verifica situacao do jogo da velha
 * @author Programador 
 * @param  velha descreve o parametro
 * 
 *  Descrever o que a funcao faz
 */ 

int VerificaVelha( int velha[3][3] )
{	
	int linha = 0;
	int coluna = 0;
	int x_cont = 0;
	int o_cont = 0;
	int vazio_cont = 0;
	int jogadas[9];
	int n_jogada = 0;

	for (linha = 0; linha < 3; linha++) {
		for (coluna = 0; coluna < 3; coluna++) {
			if (velha[linha][coluna] == 1) {
				x_cont++;
			};
			if (velha[linha][coluna] == 2) {
				o_cont++;
			};
			if (velha[linha][coluna] == 0) {
				vazio_cont++;
			};

			if (coluna == 0){
				jogadas[linha*3] = velha[linha][coluna];
			};
			if (coluna == 1){
				jogadas[linha*3 + 1] = velha[linha][coluna];
			};
			if (coluna == 2){
				jogadas[linha*3 + 2] = velha[linha][coluna];
			};
		};
	};
	if (abs(x_cont) - abs(o_cont) < 2) {
		cout << "Array de Jogadas Possível:" << endl;
		for (n_jogada = 0; n_jogada < 9; n_jogada++) {
			cout << n_jogada << " - " << jogadas[n_jogada] << endl;
		};

		bool condicao_vitoria_x = 0;
		bool condicao_vitoria_o = 0;

		if ((jogadas[2] == jogadas[5]) && (jogadas[5] == jogadas[8])) {
			if (jogadas[2] == 1) {
				condicao_vitoria_x = 1;
			} else if (jogadas[2] == 2){
				condicao_vitoria_o = 1;
			}
		}
		if ((jogadas[1] == jogadas[4]) && (jogadas[4] == jogadas[7])) {
			if (jogadas[1] == 1) {
				condicao_vitoria_x = 1;
			} else if (jogadas[1] == 2){
				condicao_vitoria_o = 1;
			}
		}
		if ((jogadas[0] == jogadas[3]) && (jogadas[3] == jogadas[6])) {
			if (jogadas[0] == 1) {
				condicao_vitoria_x = 1;
			} else if (jogadas[0] == 2){
				condicao_vitoria_o = 1;
			}
		}
		if ((jogadas[0] == jogadas[4]) && (jogadas[4] == jogadas[8])) {
			if (jogadas[0] == 1) {
				condicao_vitoria_x = 1;
			} else if (jogadas[0] == 2){
				condicao_vitoria_o = 1;
			}
		}
		if ((jogadas[2] == jogadas[4]) && (jogadas[4] == jogadas[6])) {
			if (jogadas[2] == 1) {
				condicao_vitoria_x = 1;
			} else if (jogadas[2] == 2){
				condicao_vitoria_o = 1;
			}
		}
		if ((jogadas[6] == jogadas[7]) && (jogadas[7] == jogadas[8])) {
			if (jogadas[6] == 1) {
				condicao_vitoria_x = 1;
			} else if (jogadas[6] == 2){
				condicao_vitoria_o = 1;
			}
		}
		if ((jogadas[3] == jogadas[4]) && (jogadas[4] == jogadas[5])) {
			if (jogadas[3] == 1) {
				condicao_vitoria_x = 1;
			} else if (jogadas[3] == 2){
				condicao_vitoria_o = 1;
			}
		}
		if ((jogadas[0] == jogadas[1]) && (jogadas[1] == jogadas[2])) {
			if (jogadas[0] == 1) {
				condicao_vitoria_x = 1;
			} else if (jogadas[0] == 2){
				condicao_vitoria_o = 1;
			}
		}

		if ((condicao_vitoria_x == 1) || (condicao_vitoria_o == 1)) {
			if (condicao_vitoria_x == 1) {
				return 1;
			};
			if (condicao_vitoria_o == 1) {
				return 2;
			};
		};
	} else {
		return -2;
	};
	return 0; /*!< retorna zero para teste */
}

