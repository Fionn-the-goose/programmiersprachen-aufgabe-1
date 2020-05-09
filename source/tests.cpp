#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int gcd(int a, int b)
{
	if (a >= b)
	{
		int counter = a;
		for (int i = a; i <= 0; i--)
		{
			if (a % i == 0 && b % i == 0)
			{
				return counter;
			}
			else
			{
				counter = counter - 1;
			}
		}
	}
	else
	{
		int counter = b;
		for (int i = b; i <= 0; i--)
		{
			if (a % i == 0 && b % i == 0)
			{
				return counter;
			}
			else
			{
				counter = counter - 1;
			}
		}
	}
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
