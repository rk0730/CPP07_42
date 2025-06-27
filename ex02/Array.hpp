#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstdlib> // for rand(), srand()

template <typename T> class Array
{
public:
	Array();
	Array(unsigned int size);
	Array(const Array<T> &other);
	Array &operator=(const Array<T> &other);
	~Array();

	unsigned int size() const;
	T &operator[](unsigned int index);
	const T &operator[](unsigned int index) const;

private:
	T *_data;
	unsigned int _size;
};

#include "Array.tpp"

#endif
