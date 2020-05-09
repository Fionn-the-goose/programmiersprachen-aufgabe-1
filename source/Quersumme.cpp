#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int quer(int a)
{
	int counter = 0;
	bool x = false;
	while (x == false)
	{
		if (a < 10)
		{
			counter + a;
			x = true; 
		}
		else
		{
			counter = counter + (a%10);
			a/10;
		}
	}	
	return counter;
}


TEST_CASE("describe_gcd", "[gcd]")
{
	REQUIRE(quer(24) ==6);
	REQUIRE(quer(900) ==9);
	REQUIRE(quer(3303497) ==29);
}


int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}
