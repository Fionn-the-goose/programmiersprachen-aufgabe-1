#define CATCH_CONFIG_RUNNER
#include <iostream>
#include <catch.hpp>
#include <cmath>


int sum_multiples()
{
	int counter = 0;
	for (int i = 1; i <= 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
		counter = counter + i;
		}
	
	}
	return counter;
}

TEST_CASE("describe_sum_multiples", "[sum_multiples]")
{
	REQUIRE(sum_multiples() == 234168);
}

int main(int argc, char* argv[])
{
	std::cout<<sum_multiples()<<std::endl;
	return Catch::Session().run(argc, argv);
}
