#include "stdafx.h"
#include "CGreater.h"

template<class T>
CGreater<T>::CGreater()
{
}

template<class T>
bool CGreater<T>::operator() (T a, T b)
{
	return a > b;
}

template<class T>
CGreater<T>::~CGreater()
{
}

template class CGreater<int>;
template class CGreater<double>;