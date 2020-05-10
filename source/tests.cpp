#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>


int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return gcd(b, (a % b));
	}
}


double mile_to_kilometer(double mile)
{
	double km = mile/0.62137;
	return km;
}


float fract(float eingabe)
{
	float ausgabe = floor(eingabe)-eingabe;
	return abs(ausgabe);
}


int factorial(int a)
{
	int counter = 1;
	for (int i = 1; i <= a; i++)
	{
		counter = counter * i;
	}
	return counter;
}


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


int quer(int a)
{
	int counter = 0;
	bool x = false;
	while (x == false)
	{
		if (a < 10)
		{
			counter = counter + a;
			x = true; 
		}
		else
		{
			counter = counter + (a%10);
			a = a/10;
		}
	}
	return counter;
}


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


float volumen_zylinder(float radius, float hight)
{
	float volumen =  3.14159265358979323846264338327 * pow(radius, 2) * hight;
	return volumen;
}


TEST_CASE("describe_gcd", "[gcd]")
{
	REQUIRE(gcd(2,4) ==2);
	REQUIRE(gcd(1,1) ==1);
	REQUIRE(gcd(117,234) ==117);
}


TEST_CASE("describe_fract", "[fract]")
{
	REQUIRE(fract(12.2934) == Approx(0.2934));
}


TEST_CASE("describe_factorial", "[factorial]")
{
	REQUIRE(factorial(7) == 5040);
	REQUIRE(factorial(1) == 1);
}


TEST_CASE("describe_is_prime", "[is_prime]")
{
	REQUIRE(is_prim(1999) == true);
	REQUIRE(is_prim(7) == true);
	REQUIRE(is_prim(2) == true);
	REQUIRE(is_prim(1) == false);
	REQUIRE(is_prim(-23) == false);
	REQUIRE(is_prim(15) == false);
}


TEST_CASE("describe_mile_to_kilometer", "[mile_to_kilometer]")
{
	REQUIRE(mile_to_kilometer(43) == 69.2019247791);
	REQUIRE(mile_to_kilometer(0.44) ==0.708113);
	REQUIRE(mile_to_kilometer(-1) ==-1.60935);
}


TEST_CASE("describe_Quersumme", "[Quersumme]")
{
	REQUIRE(quer(24354) == 18);
	REQUIRE(quer(900) == 9);
	REQUIRE(quer(3303497) == 29);
	REQUIRE(quer(0) == 0);
	REQUIRE(quer(1) == 1);
}


TEST_CASE("describe_sum-multiples", "[sum-multiples]")
{
	REQUIRE(sum_multiples() == 234168);
}


TEST_CASE("describe_Volumen", "[Volumen]")
{
	REQUIRE(volumen_zylinder(3.0f, 2.0f) == Approx(56.548667));
	REQUIRE(volumen_zylinder(0.0f, 0.0f) == Approx(0.0));
	REQUIRE(volumen_zylinder(3.5f, 2.25f) == Approx(86.590147));
}


int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
