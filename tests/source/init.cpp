#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calculator Sum", "[Sum]") {
    int x = 3;
    int y = 4;
    
    int rv = sum( x, y );
    
	REQUIRE( rv == 7);
}
SCENARIO("calculator Dev", "[Dev]") {
    int x = 8;
    int y = 4;
    
    int rv = Dev( x, y );
    
	REQUIRE( rv == 2);
}
SCENARIO("calculator Mult", "[Mult]") {
    int x = 3;
    int y = 4;
    
    int rv = Mult( x, y );
    
	REQUIRE( rv == 12);
}
SCENARIO("calculator Sub", "[Sub]") {
    int x = 5;
    int y = 4;
    
    int rv = Sub( x, y );
    
	REQUIRE( rv == 1);
}
SCENARIO("calculator Pow", "[Pow]") {
    int x = 3;
    int y = 2;
    
    int rv = Pow( x, y );
    
	REQUIRE( rv == 9 );
}
SCENARIO("calculator Sqrt3", "[Sqrt3]") {
    int x = 4;
    
    int rv = Sqrt3( x );
    
	REQUIRE( rv == 2);
}
