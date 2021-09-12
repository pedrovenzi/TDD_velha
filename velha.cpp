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

			cout << "hop";
		};
	};
	cout << "Hello" << endl;
	return 0; /*!< retorna zero para teste */
}

