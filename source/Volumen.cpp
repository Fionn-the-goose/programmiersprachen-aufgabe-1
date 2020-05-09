#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>



float volumen_zylinder(float radius, float hight)
{
	float volumen =  3.14159265358979323846f * pow(radius, 2) * hight;
	return volumen;
}



TEST_CASE("Berechnung des Volumen eines Zylinders", "[volumen_zylinder]")
{
	REQUIRE(volumen_zylinder(3.0f, 2.0f) == Approx(56.548667));
}



int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}
