#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int gcd(int a, int b)
{
	int c;
	if (a >= b)
	{
		for (int i = a; i <= 0; i--)
		{
			if (a % i == 0 and b % i == 0)
			{
				c = i;
				return c;
				break;
			}
			else
			{
				continue;
			}
		}
	}
	else
	{
		for (int i = b; i <= 0; i--)
		{
			if (a % i == 0 and b % i == 0)
			{
				c = i;
				return c;
				break;
			}
			else
			{
				continue;
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
