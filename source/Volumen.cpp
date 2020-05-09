#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include <math.h>



float volumen_zylinder(float radius, float hight)
{
	float volumen = M_PI * pow(radius, 2) * hight;
	return volumen;
}



TEST_CASE("describe_volumen_zylinder", "[volumen_zylinder]")
{
	REQUIRE(volumen_zylinder(3.0, 2.0) == Approx(18.849555));
}



int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}
