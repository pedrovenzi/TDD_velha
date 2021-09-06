
/**
 * \file testa_velha.cpp
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
  


TEST_CASE( "Vitória 1", "[single-file]" ) {
	int teste1[3][3]= {   { 0, 0, 1 }, 
	                      { 0, 0, 1 },
						  { 0, 0, 1 }
					  };
    REQUIRE( VerificaVelha(teste1) == 1 );

}

TEST_CASE( "Vitória 2", "[single-file]" ) {
	int teste2[3][3]= {   { 0, 1, 0 }, 
	                      { 0, 1, 0 },
						  { 0, 1, 0 }
					  };
    REQUIRE( VerificaVelha(teste2) == 1 );

}

TEST_CASE( "Vitória 3", "[single-file]" ) {
	int teste3[3][3]= {   { 1, 0, 0 }, 
	                      { 1, 0, 0 },
						  { 1, 0, 0 }
					  };
    REQUIRE( VerificaVelha(teste3) == 1 );

}

TEST_CASE( "Vitória 4", "[single-file]" ) {
	int teste4[3][3]= {   { 1, 0, 0 }, 
	                      { 0, 1, 0 },
						  { 0, 0, 1 }
					  };
    REQUIRE( VerificaVelha(teste4) == 1 );

}

TEST_CASE( "Vitória 5", "[single-file]" ) {
	int teste5[3][3]= {   { 0, 0, 1 }, 
	                      { 0, 1, 0 },
						  { 1, 0, 0 }
					  };
    REQUIRE( VerificaVelha(teste5) == 1 );

}

TEST_CASE( "Vitória 6", "[single-file]" ) {
	int teste6[3][3]= {   { 0, 0, 0 }, 
	                      { 0, 0, 0 },
						  { 1, 1, 1 }
					  };
    REQUIRE( VerificaVelha(teste6) == 1 );

}

TEST_CASE( "Vitória 7", "[single-file]" ) {
	int teste7[3][3]= {   { 0, 0, 0 }, 
	                      { 1, 1, 1 },
						  { 0, 0, 0 }
					  };
    REQUIRE( VerificaVelha(teste7) == 1 );

}

TEST_CASE( "Vitória 8", "[single-file]" ) {
	int teste8[3][3]= {   { 1, 1, 1 }, 
	                      { 0, 0, 0 },
						  { 0, 0, 0 }
					  };
    REQUIRE( VerificaVelha(teste8) == 1 );

}

