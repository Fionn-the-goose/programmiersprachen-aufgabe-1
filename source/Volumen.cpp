#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include <math.h>



float volumen_zylinder(int radius, int hight)
{
	float volumen = M_PI * pow(radius, 2) * hight;
	return volumen;
}



TEST_CASE("Berechnung des Volumen eines Zylinders", "[volumen_zylinder]")
{
	REQUIRE(volumen_zylinder(3, 2) == Approx(18.849555));
}



int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}
