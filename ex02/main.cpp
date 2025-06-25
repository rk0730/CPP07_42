#include "Array.hpp"
#include <iostream>

int main()
{
	Array<int> intArray(5);
	for (unsigned int i = 0; i < intArray.size(); ++i)
		intArray[i] = i * 10;

	for (unsigned int i = 0; i < intArray.size(); ++i)
		std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;

	Array<double> doubleArray(3);
	for (unsigned int i = 0; i < doubleArray.size(); ++i)
		doubleArray[i] = i * 1.5;

	for (unsigned int i = 0; i < doubleArray.size(); ++i)
		std::cout << "doubleArray[" << i << "] = " << doubleArray[i] << std::endl;

	return 0;
}
