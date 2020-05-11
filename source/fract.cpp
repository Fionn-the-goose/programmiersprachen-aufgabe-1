#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

float fract(float eingabe)
{
	int more = static_cast<int>(eingabe)
	float ausgabe = eingabe-more;
	return ausgabe;
}



TEST_CASE("describe_fract", "[fract]")
{
	REQUIRE(fract(12.2934) == Approx(0.2934));
}



int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}
