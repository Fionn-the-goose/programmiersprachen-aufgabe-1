#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

float fract(float eingabe)
{
	float ausgabe = floor(zahl)-zahl;
	return abs(ausgabe);
}



TEST_CASE("describe_fract", "[fract]")
{
	REQUIRE(fract(12.2934) == Approx(0.2934));
}



int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}
