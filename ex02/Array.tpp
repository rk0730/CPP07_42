#include <stdexcept>

template <typename T> Array<T>::Array() : _data(new T[0]), _size(0) {}

template <typename T> Array<T>::Array(unsigned int size) : _data(new T[size]), _size(size) {}

template <typename T> Array<T>::Array(const Array<T> &other) : _data(new T[other._size]), _size(other._size)
{
	for (unsigned int i = 0; i < _size; ++i)
		_data[i] = other._data[i];
}

template <typename T> Array<T> &Array<T>::operator=(const Array<T> &other)
{
	if (this != &other)
	{
		delete[] _data;
		_size = other._size;
		_data = new T[_size];
		for (unsigned int i = 0; i < _size; ++i)
			_data[i] = other._data[i];
	}
	return *this;
}

template <typename T> Array<T>::~Array()
{
	delete[] _data;
}

template <typename T> unsigned int Array<T>::size() const
{
	return _size;
}

template <typename T> T &Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw std::out_of_range("Index out of range");
	return _data[index];
}

template <typename T> const T &Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw std::out_of_range("Index out of range");
	return _data[index];
}
