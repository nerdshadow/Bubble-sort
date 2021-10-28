#include <iostream>
#include <vector>

std::vector<int> sort(std::vector<int> array)
{
	int buff = 0;
	for (int i = 0; i < array.size(); i++)
	{
		for (int j = 0; j < array.size() - 1; j++)
		{
			if (array[j] >= array[j+1])
			{
				buff = array[j];
				array[j] = array[j + 1];
				array[j + 1] = buff;				
			}
		}
	}
	return array;
}

int main()
{
	std::vector<int> intArray = {1, 7, 4, 8, 2, 5, 1, 3};
	
	for (int i = 0; i < sort(intArray).size(); i++)
	{
	std::cout << sort(intArray)[i]<<" ";
	}

	return 0;
}