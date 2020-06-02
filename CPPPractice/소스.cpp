#include <iostream>
int main(void)
{
	int i = 0;
	int max = 0;
	int maxindex;
	int su[9] = { 0 };
	for (i = 0; i < 9; i++)
	{
		std::cin >> su[i];
	}
	max = su[i];
	for (i = 0; i < 9; i++)
	{
		if (max < su[i])
		{
			max = su[i];
			maxindex = i;
		}
		
	}


	std::cout << max << std::endl << (maxindex + 1);


	return 0;
}