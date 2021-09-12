
/**
 * \file testa_velha.cpp
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
  


TEST_CASE( "Vitória 1 - Coluna da Direita", "[single-file]" ) {
	int teste1[3][3]= {   { 0, 2, 1 }, 
	                      { 0, 2, 1 },
						  { 2, 1, 1 }
					  };
    REQUIRE( VerificaVelha(teste1) == 1 );

}

TEST_CASE( "Vitória 2 - Coluna do Meio", "[single-file]" ) {
	int teste2[3][3]= {   { 2, 1, 2 }, 
	                      { 1, 1, 0 },
						  { 2, 1, 0 }
					  };
    REQUIRE( VerificaVelha(teste2) == 1 );

}

TEST_CASE( "Vitória 3 - Coluna da Esquerda", "[single-file]" ) {
	int teste3[3][3]= {   { 1, 2, 0 }, 
	                      { 1, 1, 2 },
						  { 1, 0, 2 }
					  };
    REQUIRE( VerificaVelha(teste3) == 1 );

}

TEST_CASE( "Vitória 4 - Diagonal Direita", "[single-file]" ) {
	int teste4[3][3]= {   { 1, 2, 0 }, 
	                      { 2, 1, 2 },
						  { 0, 1, 1 }
					  };
    REQUIRE( VerificaVelha(teste4) == 1 );

}

TEST_CASE( "Vitória 5 - Diagonal Esquerda", "[single-file]" ) {
	int teste5[3][3]= {   { 0, 2, 1 }, 
	                      { 2, 1, 2 },
						  { 1, 1, 0 }
					  };
    REQUIRE( VerificaVelha(teste5) == 1 );

}

TEST_CASE( "Vitória 6 - Linha de Baixo", "[single-file]" ) {
	int teste6[3][3]= {   { 2, 1, 2 }, 
	                      { 0, 2, 0 },
						  { 1, 1, 1 }
					  };
    REQUIRE( VerificaVelha(teste6) == 1 );

}

TEST_CASE( "Vitória 7 - Linha do Meio", "[single-file]" ) {
	int teste7[3][3]= {   { 2, 1, 0 }, 
	                      { 1, 1, 1 },
						  { 2, 0, 2 }
					  };
    REQUIRE( VerificaVelha(teste7) == 1 );

}

TEST_CASE( "Vitória 8 - Linha de Cima", "[single-file]" ) {
	int teste8[3][3]= {   { 1, 1, 1 }, 
	                      { 2, 0, 2 },
						  { 0, 2, 1 }
					  };
    REQUIRE( VerificaVelha(teste8) == 1 );

}

TEST_CASE( "Jogo Impossível", "[single-file]" ) {
	int teste8[3][3]= {   { 1, 1, 1 }, 
	                      { 1, 2, 2 },
						  { 0, 0, 0 }
					  };
    REQUIRE( VerificaVelha(teste8) == -2 );

}

