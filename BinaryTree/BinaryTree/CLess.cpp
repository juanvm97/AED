#include "stdafx.h"
#include "CLess.h"

template <class T>
CLess<T>::CLess()
{
}

template <class T>
bool CLess<T>::operator() (T a, T b)
{
	return a < b;
}

template <class T>
CLess<T>::~CLess()
{
}

template class CLess<int>;
template class CLess<double>;
