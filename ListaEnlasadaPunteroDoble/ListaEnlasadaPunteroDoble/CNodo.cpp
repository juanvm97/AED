#include "stdafx.h"
#include "CNodo.h"

template <class T>
CNodo<T>::CNodo(T x)
{
	m_data = x;
	m_next = NULL;
}

template <class T>
CNodo<T>::CNodo(T x, CNodo<T> *s)
{
	m_data = x;
	m_next = s;
}

template <class T>
CNodo<T>::~CNodo()
{
	//delete m_next;
}

template class CNodo<int>;
template class CNodo<double>;