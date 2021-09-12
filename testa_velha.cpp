
/**
 * \file testa_velha.cpp
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
  

TEST_CASE( "Vitória 1 - X Coluna da Direita", "[single-file]" ) {
	int teste1[3][3]= {   { 0, 2, 1 }, 
	                      { 0, 2, 1 },
						  { 2, 1, 1 }
					  };
    REQUIRE( VerificaVelha(teste1) == 1 );

}

TEST_CASE( "Vitória 2 - X Coluna do Meio", "[single-file]" ) {
	int teste2[3][3]= {   { 2, 1, 2 }, 
	                      { 1, 1, 0 },
						  { 2, 1, 0 }
					  };
    REQUIRE( VerificaVelha(teste2) == 1 );

}

TEST_CASE( "Vitória 3 - X Coluna da Esquerda", "[single-file]" ) {
	int teste3[3][3]= {   { 1, 2, 0 }, 
	                      { 1, 1, 2 },
						  { 1, 0, 2 }
					  };
    REQUIRE( VerificaVelha(teste3) == 1 );

}

TEST_CASE( "Vitória 4 - X Diagonal Direita", "[single-file]" ) {
	int teste12[3][3]= {   { 1, 2, 0 }, 
	                      { 2, 1, 2 },
						  { 0, 1, 1 }
					  };
    REQUIRE( VerificaVelha(teste12) == 1 );

}

TEST_CASE( "Vitória 5 - X Diagonal Esquerda", "[single-file]" ) {
	int teste5[3][3]= {   { 0, 2, 1 }, 
	                      { 2, 1, 2 },
						  { 1, 1, 0 }
					  };
    REQUIRE( VerificaVelha(teste5) == 1 );

}

TEST_CASE( "Vitória 6 - X Linha de Baixo", "[single-file]" ) {
	int teste6[3][3]= {   { 2, 1, 2 }, 
	                      { 0, 2, 0 },
						  { 1, 1, 1 }
					  };
    REQUIRE( VerificaVelha(teste6) == 1 );

}

TEST_CASE( "Vitória 7 - X Linha do Meio", "[single-file]" ) {
	int teste7[3][3]= {   { 2, 1, 0 }, 
	                      { 1, 1, 1 },
						  { 2, 0, 2 }
					  };
    REQUIRE( VerificaVelha(teste7) == 1 );

}

TEST_CASE( "Vitória 8 - X Linha de Cima", "[single-file]" ) {
	int teste8[3][3]= {   { 1, 1, 1 }, 
	                      { 2, 0, 2 },
						  { 0, 2, 1 }
					  };
    REQUIRE( VerificaVelha(teste8) == 1 );

}


TEST_CASE( "Vitória 9 - O Coluna da Direita", "[single-file]" ) {
	int teste9[3][3]= {   { 0, 1, 2 }, 
	                      { 0, 1, 2 },
						  { 1, 2, 2 }
					  };
    REQUIRE( VerificaVelha(teste9) == 2 );

}

TEST_CASE( "Vitória 10 - O Coluna do Meio", "[single-file]" ) {
	int teste10[3][3]= {   { 1, 2, 1 }, 
	                      { 2, 2, 0 },
						  { 1, 2, 0 }
					  };
    REQUIRE( VerificaVelha(teste10) == 2 );

}

TEST_CASE( "Vitória 11 - O Coluna da Esquerda", "[single-file]" ) {
	int teste11[3][3]= {   { 2, 1, 0 }, 
	                      { 2, 2, 1 },
						  { 2, 0, 1 }
					  };
    REQUIRE( VerificaVelha(teste11) == 2 );

}

TEST_CASE( "Vitória 12 - O Diagonal Direita", "[single-file]" ) {
	int teste12[3][3]= {   { 2, 1, 0 }, 
	                      { 1, 2, 1 },
						  { 0, 2, 2 }
					  };
    REQUIRE( VerificaVelha(teste12) == 2 );

}

TEST_CASE( "Vitória 13 - O Diagonal Esquerda", "[single-file]" ) {
	int teste12[3][3]= {   { 0, 1, 2 }, 
	                      { 1, 2, 1 },
						  { 2, 2, 0 }
					  };
    REQUIRE( VerificaVelha(teste13) == 2 );

}

TEST_CASE( "Vitória 14 - O Linha de BaiOo", "[single-file]" ) {
	int teste14[3][3]= {   { 1, 2, 1 }, 
	                      { 0, 1, 0 },
						  { 2, 2, 2 }
					  };
    REQUIRE( VerificaVelha(teste14) == 2 );

}

TEST_CASE( "Vitória 15 - O Linha do Meio", "[single-file]" ) {
	int teste15[3][3]= {   { 1, 2, 0 }, 
	                      { 2, 2, 2 },
						  { 1, 0, 1 }
					  };
    REQUIRE( VerificaVelha(teste15) == 2 );

}

TEST_CASE( "Vitória 16 - O Linha de Cima", "[single-file]" ) {
	int teste16[3][3]= {   { 2, 2, 2 }, 
	                      { 1, 0, 1 },
						  { 0, 1, 2 }
					  };
    REQUIRE( VerificaVelha(teste16) == 2 );

}

TEST_CASE( "Jogo Impossível", "[single-file]" ) {
	int teste8[3][3]= {   { 1, 1, 1 }, 
	                      { 1, 2, 2 },
						  { 0, 0, 0 }
					  };
    REQUIRE( VerificaVelha(teste8) == -2 );

}


