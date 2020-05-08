#define CATCH_CONFIG_RUNNER
#include <iostream>


int main()
{
	int i = 1;
	bool x = false;
	while (x == false)
	{
		for (int j=1; j<21; j++)
		{
			if (i % j == 0)
			{
				x = true;
				continue;
			}
			else
			{
				x = false;
				break;
			}
		}
	i = i+1;
	}
	i--;
	std::cout << i << std::endl;
	return i;
}

