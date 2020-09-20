#pragma once

#include "CompiledHeaders.h"

template <class T>
class Dynamic1D
{
public:

	Dynamic1D(unsigned short int set_capacity = default_capacity);

	void insert(T item);
	T get_item(unsigned short int index);
	T * get_items();

	~Dynamic1D();

private:

	void resize();

private:

	T * array;
	unsigned short int capacity;
	unsigned short int default_capacity = 50;
	unsigned short int size = 0;

};




template <class T>
class Dynamic2D
{
public:

	Dynamic2D(unsigned short int set_capacity_x = default_capacity_x,
			  unsigned short int set_capacity_y = default_capacity_y);
		
	void insert(unsigned short int year, T item);


	~Dynamic2D();

private:

	T** matrix;
	unsigned short int capacity_x;
	unsigned short int default_capacity_x = 4;
	unsigned short int size_x = 0;
	unsigned short int capacity_y;
	unsigned short int default_capacity_y = 10;
	unsigned short int size_y = 0;
	unsigned short int nr_mat_max;
};

template <class T>
void Dynamic2D<T>::insert(unsigned short int year, T item)
{
	year -= 1;
	matrix[year][size_y] = item;
	size_y++;
}

template <class T>
Dynamic2D<T>::Dynamic2D(unsigned short int set_capacity_x, unsigned short int set_capacity_y)
{
	capacity_x = set_capacity_x;
	default_capacity_x = set_capacity_x;
	capacity_y = set_capacity_y;
	default_capacity_y = set_capacity_y;
	matrix = new T[capacity_x];

	for (unsigned int i = 0; i < capacity_x; i++)
		matrix[i] = new T[capacity_y];
}

template <class T>
Dynamic2D<T>::~Dynamic2D()
{

}








template <class T>
void Dynamic1D<T>::resize()
{
	if (size < capacity)
		return;

	capacity = default_capacity + capacity;
	T* new_array = new T[capacity];

	memcpy(new_array, array, sizeof(T) * size);
	delete[] array;
	array = new_array;
}

template <class T>
Dynamic1D<T>::Dynamic1D(unsigned short int set_capacity)
{
	capacity = set_capacity;
	default_capacity = set_capacity;
	array = new T[capacity];
	
}

template <class T>
T * Dynamic1D<T>::get_items()
{
	return array;
}

template <class T>
T Dynamic1D<T>::get_item(unsigned short int index)
{
	return array[index];
}

template <class T>
void Dynamic1D<T>::insert(T item)
{
	resize();
	array[size] = item;
	size++;
}

template <class T>
Dynamic1D<T>::~Dynamic1D()
{
	delete[] array;
}

