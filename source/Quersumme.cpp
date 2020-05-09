#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int quer(int a)
{
	int counter = 0;
	bool x  = false;
	while (x == false)
	{
		if (a < 10)
		{
			counter + a;
			break;
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
	REQUIRE(gcd(2,4) ==2);
	REQUIRE(gcd(9,6) ==3);
	REQUIRE(gcd(3,7) ==1);
}


int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}
