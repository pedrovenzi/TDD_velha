// Copyright 2021 Pedro Venzi
/**
 * \file  velha.cpp
 */


#include "velha.hpp"
#include <iostream>
#include <cstdlib>

/** 
 * @brief Verifica a Situação do Jogo da Velha
 * @author Pedro Venzi
 * @param  velha representa uma imagem estática da disposição de um Jogo da Velha em um dado momento.
 * 
 *  Dada uma imagem estática (estado) de um Jogo da Velha, a função verifica o resultado de um jogo
 *  caso ele já tenha acabado, confere a plausibilidade da aparição de tal estado ao decorrer de um jogo,
 *  e checa se o jogo ainda está em andamento.
 */ 

int VerificaVelha(int velha[3][3]) {
  int linha = 0;
  int coluna = 0;
  int x_cont = 0;
  int o_cont = 0;
  int vazio_cont = 0;
  int jogadas[9];

  for (linha = 0; linha < 3; linha++) {
    for (coluna = 0; coluna < 3; coluna++) {
      // Contagem de X, O, e espaços vazios
      if (velha[linha][coluna] == 1) {
        x_cont++;
      }
      if (velha[linha][coluna] == 2) {
        o_cont++;
      }
      if (velha[linha][coluna] == 0) {
        vazio_cont++;
      }

      // Preenchimento do Array de Jogadas
      if (coluna == 0) {
        jogadas[linha*3] = velha[linha][coluna];
      }
      if (coluna == 1) {
        jogadas[linha*3 + 1] = velha[linha][coluna];
      }
      if (coluna == 2) {
        jogadas[linha*3 + 2] = velha[linha][coluna];
      }
    }
  }

  // Verificação de Jogo em Turnos. Se não estiver em Turnos, Jogo Impossível
  if (abs(x_cont) - abs(o_cont) < 2) {
    int condicao_vitoria_x = 0;
    int condicao_vitoria_o = 0;

    // Contagem de Condições de Vitória
    if ((jogadas[2] == jogadas[5]) && (jogadas[5] == jogadas[8])) {
      if (jogadas[2] == 1) {
        condicao_vitoria_x++;
      } else if (jogadas[2] == 2) {
        condicao_vitoria_o++;
      }
    }
    if ((jogadas[1] == jogadas[4]) && (jogadas[4] == jogadas[7])) {
      if (jogadas[1] == 1) {
        condicao_vitoria_x++;
      } else if (jogadas[1] == 2) {
        condicao_vitoria_o++;
      }
    }
    if ((jogadas[0] == jogadas[3]) && (jogadas[3] == jogadas[6])) {
      if (jogadas[0] == 1) {
        condicao_vitoria_x++;
      } else if (jogadas[0] == 2) {
        condicao_vitoria_o++;
      }
    }
    if ((jogadas[0] == jogadas[4]) && (jogadas[4] == jogadas[8])) {
      if (jogadas[0] == 1) {
        condicao_vitoria_x++;
      } else if (jogadas[0] == 2) {
        condicao_vitoria_o++;
      }
    }
    if ((jogadas[2] == jogadas[4]) && (jogadas[4] == jogadas[6])) {
      if (jogadas[2] == 1) {
        condicao_vitoria_x++;
      } else if (jogadas[2] == 2) {
        condicao_vitoria_o++;
      }
    }
    if ((jogadas[6] == jogadas[7]) && (jogadas[7] == jogadas[8])) {
      if (jogadas[6] == 1) {
        condicao_vitoria_x++;
      } else if (jogadas[6] == 2) {
        condicao_vitoria_o++;
      }
    }
    if ((jogadas[3] == jogadas[4]) && (jogadas[4] == jogadas[5])) {
      if (jogadas[3] == 1) {
        condicao_vitoria_x++;
      } else if (jogadas[3] == 2) {
        condicao_vitoria_o++;
      }
    }
    if ((jogadas[0] == jogadas[1]) && (jogadas[1] == jogadas[2])) {
      if (jogadas[0] == 1) {
        condicao_vitoria_x++;
      } else if (jogadas[0] == 2) {
        condicao_vitoria_o++;
      }
    }

    if ((condicao_vitoria_x > 0) || (condicao_vitoria_o > 0)) {
      // Verificação de Vitórias Simultânes e Duplicadas
      if (((condicao_vitoria_x > 1) || (condicao_vitoria_o > 1)) ||
         ((condicao_vitoria_x == 1) && (condicao_vitoria_o == 1))) {
        return -2;
      }
      // Verificação de Vitórias Singulares e Legítimas
      if (condicao_vitoria_x == 1) {
        return 1;
      } else if (condicao_vitoria_o == 1) {
        return 2;
      }

    } else {
      // Verificação de Empates e Indeterminações
      if (vazio_cont == 0) {
        return 0;
      } else {
        return -1;
      }
    }
  } else {
    return -2;
  }
  return 0;
}
