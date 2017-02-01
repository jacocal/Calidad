#include <iostream>
#include <cstdlib>

bool viciesto(int year);

int main(int argc, char **argv)
{

	int year = std::atoi(argv[1]);

	std::cout << year << std::endl;

	bool esViciesto = viciesto(year);

	std::cout << esViciesto << std::endl;

	return 0;

}

bool viciesto(int year)
{

	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			{
				return true;
			}else{
				return false;
			}
		}else{
			return true;
		}
 	}else{
		return false;
	}

}
