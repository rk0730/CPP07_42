#include "iter.hpp"
#include <iostream>

template <typename T> void increment(T &value)
{
	value++;
}

template <typename T> void print(const T &value)
{
	std::cout << value << " ";
}

int main()
{
	int array[] = {1, 2, 3, 4, 5};
	size_t length = sizeof(array) / sizeof(array[0]);
	::iter(array, length, increment<int>);
	for (size_t i = 0; i < length; ++i)
		std::cout << "array[" << i << "] = " << array[i] << std::endl;

	float array2[] = {1.1, 2.1, 3.1, 4.1, 5.1};
	size_t length2 = sizeof(array2) / sizeof(array2[0]);
	::iter(array2, length2, increment<float>);
	for (size_t i = 0; i < length2; ++i)
		std::cout << "array2[" << i << "] = " << array2[i] << std::endl;

	std::string array3[] = {"one", "two", "three", "four", "five"};
	size_t length3 = sizeof(array3) / sizeof(array3[0]);
	::iter(array3, length3, print<std::string>);
	std::cout << std::endl;

	::iter(array, length, print<int>);
	std::cout << std::endl;
	::iter(array2, length2, print<float>);
	std::cout << std::endl;

	return 0;
}
