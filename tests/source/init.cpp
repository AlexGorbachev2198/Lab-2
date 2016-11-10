#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calculator Sum", "[Sum]") {
    double x = 3;
    int y = 4;
    
    double rv = Sum( x, y );
    
	REQUIRE( rv == 7);
}
SCENARIO("calculator Dev", "[Dev]") {
    double x = 8;
    int y = 4;
    
    double rv = *Dev( x, y );
    
	REQUIRE( rv == 2);
}
SCENARIO("calculator Mult", "[Mult]") {
    double x = 3;
    int y = 4;
    
    double rv = Mult( x, y );
    
	REQUIRE( rv == 12);
}
SCENARIO("calculator Sub", "[Sub]") {
    double x = 5;
    int y = 4;
    
    double rv = Sub( x, y );
    
	REQUIRE( rv == 1);
}
SCENARIO("calculator Pow1", "[Pow1]") {
    double x = 3;
    int y = 2;
    
    double rv = Pow1( x, y );
    
	REQUIRE( rv == 9 );
}
SCENARIO("calculator Sqrt3", "[Sqrt3]") {
    double x = 0.25;
    
    double rv = Sqrt3( x );
    
	REQUIRE( rv == 0.5);
}
