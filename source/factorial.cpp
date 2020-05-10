#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>


int factorial(int a)
{
	int counter = 1;
	for (int i = 1; i <= a; i++)
	{
		counter = counter * i;
	}
	return counter;
}



TEST_CASE("describe_factorial", "[factorial]")
{
	REQUIRE(factorial(7) == 5040);
	REQUIRE(factorial(1) == 1);
	REQUIRE(factorial(7) == 5040);
}



int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}
