#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

bool is_prim(int number)
{
	bool prim = true;
	if (number <= 1)
	{
		prim = false;
	}
	if (number == 2) 
	{
		prim = true;
	}
	else
	{
		for (int i = 2; i < number; i++)
		{
			if (number % i == 0)
			{
					prim = false;
			}
		}
	}
	return prim;		 
}



TEST_CASE("ist die zahl prim?", "[ist_prim]")
{
	REQUIRE(is_prim(1999) == true);
	REQUIRE(is_prim(7) == true);
	REQUIRE(is_prim(2) == true);
	REQUIRE(is_prim(1) == false);
	REQUIRE(is_prim(-23) == false);
	REQUIRE(is_prim(15) == false);
}


int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}
